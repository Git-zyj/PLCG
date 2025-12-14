/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((-2147483634 == (max(1363055551, 209))));
                        var_13 = (max(var_13, var_1));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_14 = (min(var_14, var_7));
                                var_15 = max(209, 2147483647);
                                var_16 = max((max(((((arr_1 [i_0]) == var_7))), (~2147483635))), (((((min(var_9, (arr_8 [i_5])))) && (((var_8 ? (arr_8 [i_0]) : var_9)))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (((((-(((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) % 1244993306)))) | (((max((arr_4 [i_0]), var_6)))))))));
                    var_18 = 45;
                }
            }
        }
    }
    var_19 += ((((min(var_1, var_2))) ? (!65535) : ((-((2147483633 ? 2147483634 : 46))))));
    var_20 |= ((var_10 <= (min((var_7 | var_11), (var_0 / 470350385)))));
    var_21 &= (min((((((-2011095232 ? -367823946 : 28))) ? var_8 : -4294967295)), var_3));
    #pragma endscop
}
