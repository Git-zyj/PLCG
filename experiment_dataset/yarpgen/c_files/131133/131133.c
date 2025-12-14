/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_11 += (max(9223372036854775807, (min((arr_1 [4]), (arr_2 [2])))));
        var_12 = var_6;
        var_13 = (min(var_13, 5137926107056832180));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = ((71 != (((arr_3 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_14 = ((-1 ? (var_1 == 28694) : ((-(((arr_8 [i_4 - 1] [i_3] [i_3]) + -9223372036854775807))))));
                            var_15 = 15;
                        }

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_3] [i_1] [0] [i_6] [i_1] = var_0;
                            var_16 ^= ((-18714 ? -1 : 9223372036854775788));
                        }
                        var_17 = (min(1, (arr_14 [i_2] [i_2] [i_4 + 2] [i_1])));
                        var_18 = (max(var_18, (((((max((arr_12 [i_2] [6] [i_2] [0] [0] [i_3]), 52921))) ? -67043328 : ((-((var_3 % (arr_18 [22]))))))))));
                        var_19 = (((((((12615 >> (2369167863 - 2369167841)))) & var_7))) ? (max(((var_8 ? var_0 : var_6)), (arr_3 [i_4 - 1]))) : var_8);
                    }
                }
            }
        }
        var_20 = ((((((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [9] [i_1]) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [i_1]) : (arr_20 [i_1] [17] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 9223372036854775788));
    }
    var_21 = min(var_10, var_10);
    #pragma endscop
}
