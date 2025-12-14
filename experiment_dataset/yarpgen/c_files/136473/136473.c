/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [21] = (((arr_3 [i_0] [17] [16]) >> (((!(4132990972 > 43905))))));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = (arr_8 [i_1] [i_1] [1]);
                        var_18 = (arr_2 [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_2] &= ((~(arr_5 [0] [15])));
                        var_19 = ((!(((((!(arr_3 [i_0] [i_0] [i_0]))) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_1 [i_0] [i_0]))))));
                        arr_16 [20] [i_1] [17] [20] [1] [i_1] = (max((arr_2 [i_0] [i_1]), (((min((arr_2 [2] [i_4]), 16775168)) | (arr_4 [i_2])))));
                    }
                    var_20 = (arr_4 [i_2]);
                }
            }
        }
    }
    var_21 = (var_8 > 0);
    #pragma endscop
}
