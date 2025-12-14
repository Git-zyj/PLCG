/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_2, (!var_3)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [6] [i_3] [i_2] [i_3] [i_0] [i_4] [i_0] = -1212990097;
                            arr_13 [1] [i_0] [i_1] [1] [i_0] [i_4] = (arr_4 [i_0]);
                            arr_14 [i_0] [i_1] [10] [i_3] = (!63);
                            arr_15 [3] [i_1] [i_0] [1] [i_4] = (-1212990097 ? 268435456 : (max(1, (arr_0 [i_0] [i_0]))));
                            var_19 = (((((1 ? 1212990097 : 8646911284551352320))) ? -4294967295 : 1145330168));
                        }
                        arr_16 [i_0] = (((max(((9223372036854775807 ? (arr_4 [i_0]) : var_17)), (arr_10 [7] [i_0] [i_2] [i_3] [i_3]))) + ((max((arr_3 [i_0]), (arr_3 [i_0]))))));
                        var_20 ^= 15539;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] = 32767;
                        arr_24 [6] [1] [i_6 + 3] [i_0] [i_5] [i_6 - 1] = ((var_5 ? (min((max(1106310820, (arr_17 [i_0]))), 1)) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_25 [i_0] = (max(((-1993551861 | (arr_5 [i_0] [i_6 - 1] [i_6]))), ((max(698622472, (arr_3 [i_0]))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_21 ^= ((!((!((max(1212990111, 1)))))));
        arr_28 [2] = ((((min((arr_8 [2] [12] [i_8]), (arr_8 [i_8] [1] [i_8])))) ? (max(1212990096, (arr_8 [i_8] [6] [i_8]))) : (!-49)));
    }
    var_22 = (min(var_22, var_12));
    #pragma endscop
}
