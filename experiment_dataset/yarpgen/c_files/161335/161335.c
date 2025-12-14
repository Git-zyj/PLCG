/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = var_3;
                                var_18 |= (((~(min(var_11, (arr_4 [i_0]))))));
                            }
                        }
                    }
                    var_19 = ((((((((32743 < (arr_6 [i_0] [i_1] [i_0] [i_2]))))) + 9858079584226027694)) + (((-(arr_12 [i_0] [i_1]))))));
                    var_20 = (((~(arr_4 [i_1]))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((var_15 != var_9) ? (max(var_3, 8588664489483523921)) : var_0)) ^ var_9)))));
    var_22 &= (((var_9 < 11) << (((max((min(var_16, var_7)), (var_1 > var_4))) - 7203323414038005754))));
    var_23 = var_2;
    #pragma endscop
}
