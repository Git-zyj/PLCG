/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((((((var_14 ? var_15 : var_14))) && ((((arr_2 [i_0] [i_1] [9]) ? (arr_2 [13] [i_0] [i_1]) : var_17)))))) == ((var_11 << ((((var_7 % (arr_2 [i_1 + 2] [i_0] [i_0]))) - 1465360346))))));
                var_21 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = arr_6 [i_3] [i_0] [i_0];
                            var_23 = (max((((((max(var_0, (arr_2 [i_0] [i_1] [i_1])))) ? var_16 : (((max(var_12, (arr_10 [i_0] [i_0])))))))), (min((1436300333 + var_5), 3501681631994020925))));
                        }
                    }
                }
                arr_11 [i_0] = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((arr_3 [i_0] [i_1]) ? (min(1436300333, 3501681631994020925)) : var_11)) : (((((max(var_3, var_5))) ? var_14 : (arr_0 [i_0] [13]))))));
                var_24 = (arr_2 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
