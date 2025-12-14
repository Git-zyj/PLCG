/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((~23), ((var_2 ? -106 : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 |= (max((!9521120382442747196), (arr_1 [3] [i_1])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (max(976355336, (-2147483647 - 1)));
                    var_17 = ((~(((!(arr_2 [i_0] [i_1]))))));
                    var_18 = (((((var_11 ? var_1 : (arr_6 [i_0] [i_1])))) ? (((~(arr_4 [i_2] [i_2] [1] [i_0])))) : (max((arr_1 [i_0] [i_1]), ((min((arr_5 [i_2] [i_0] [i_0]), (arr_2 [0] [0]))))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_19 = 1150062949649413663;
                                arr_15 [i_0] [i_0] [10] [i_0] [i_0] [i_0] = ((!(arr_2 [i_1] [i_3])));
                            }
                        }
                    }
                }
                var_20 = (min(((~(((arr_2 [i_0] [i_1]) + var_10)))), -1492995381));
            }
        }
    }
    var_21 = (-2147483647 - 1);
    #pragma endscop
}
