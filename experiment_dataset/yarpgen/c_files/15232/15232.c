/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((max(51, var_8)))) | (var_14 == var_0)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 && (!var_13)));
        arr_3 [i_0] = (((((-113 + 2147483647) << (4909332713284368308 - 1)))) ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1));
        arr_4 [i_0] [i_0] = (max(((min(var_7, (arr_0 [i_0] [i_0])))), (max(9168413140439210189, 20954))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 &= (((((-var_12 ? (((var_16 >= (arr_7 [i_2] [i_1])))) : -var_18))) >= ((var_0 | (((arr_6 [i_2] [i_0]) ^ (arr_8 [i_0] [i_1] [i_1] [i_0])))))));
                    var_21 = (max(var_21, var_0));
                    var_22 = (max((max(-var_5, ((var_18 ? (arr_8 [i_0] [i_0] [8] [1]) : var_13)))), -4833150524253432806));
                    var_23 = (min(var_23, ((((((2035778210223500969 ^ var_15) ? ((((arr_7 [i_0] [i_1]) % var_6))) : (arr_6 [10] [1]))) <= (min(var_12, ((~(-9223372036854775807 - 1))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= -var_9;
                                var_24 = (max(var_24, ((max((arr_5 [i_2] [14] [i_2]), (((var_1 - 2600920132802861659) + (var_0 + 2370061855))))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 ^= 28888;
    }
    #pragma endscop
}
