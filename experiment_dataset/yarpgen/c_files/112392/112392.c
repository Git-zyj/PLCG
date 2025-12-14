/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_16 = 37809;
            arr_5 [i_0] [i_1] = (arr_4 [i_0] [i_1]);
            arr_6 [i_1] [3] = ((((max(27727, (arr_2 [i_1])))) ? ((max((arr_2 [i_1]), (arr_2 [i_0])))) : (arr_2 [14])));
            arr_7 [13] [13] [2] = (arr_1 [7]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_11 [14] [i_0] = var_4;
            var_17 |= var_9;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 -= (((arr_3 [i_4] [i_3 - 1] [i_0]) ^ (max((arr_12 [i_4] [i_3 - 1] [i_3]), var_1))));
                        var_19 = ((~(((arr_12 [i_3] [i_3 - 1] [i_4 + 1]) ? (((max(27705, var_7)))) : var_2))));
                    }
                }
            }
        }
        var_20 -= ((!(((27727 ? 27727 : 27727)))));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        arr_19 [3] [i_5] |= ((!((((arr_17 [i_5 + 1]) ? (arr_18 [i_5]) : (~var_3))))));
        arr_20 [i_5] = ((var_14 ? ((var_1 + (arr_16 [i_5 + 1]))) : (arr_16 [i_5 + 1])));
        arr_21 [i_5] = (((arr_18 [i_5 + 4]) / ((var_8 ? (arr_18 [i_5 + 2]) : var_11))));
    }
    var_21 = var_8;
    #pragma endscop
}
