/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 += (((-(arr_6 [i_2 + 1] [i_2] [i_2 - 2]))) & var_1);
                    var_11 = ((((40162 + ((var_7 / (arr_0 [19]))))) ^ (4294967295 == 0)));
                    arr_9 [i_0] [i_0] [i_0] |= var_5;
                    arr_10 [i_2] [i_1] [i_2] [i_1] = (max((max(0, ((1632150030 ? (arr_6 [i_0] [i_1] [0]) : 127701188)))), (arr_5 [i_2 + 1] [i_2 - 2] [i_2 + 1])));
                }
            }
        }
        arr_11 [i_0] = (-(((((2727738892737319238 ? 25 : 4294967284))) ? (((arr_4 [i_0] [2]) ? 4294967289 : (arr_3 [i_0]))) : ((max(1, (-2147483647 - 1)))))));
    }
    var_12 -= (var_8 / var_1);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_13 += var_3;
                    arr_19 [i_5] [i_3] [9] [i_5] = (~(((var_5 * -22) ? 12 : (((((arr_15 [i_3] [i_4]) <= (arr_12 [i_5]))))))));
                    arr_20 [i_3] [i_4] [i_3] [i_5] = (max((arr_12 [i_5]), var_6));
                }
            }
        }
    }
    var_14 = (!((max((((var_0 + 2147483647) << (var_1 - 4242346704))), (!var_8)))));
    #pragma endscop
}
