/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((((var_7 ? -var_0 : -var_16))) && ((((50317 | 14) ? var_0 : ((var_17 ? var_10 : var_16))))));
    var_21 = ((min(var_4, var_4)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [0] = ((!(18446744073709551601 <= 0)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((!((!((max((arr_7 [1] [i_1] [i_0] [i_3]), var_9)))))));
                        var_23 = ((+(max((((arr_10 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_1]) ? (arr_3 [i_0] [i_2] [i_3]) : var_1)), var_2))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_24 = ((((((-4209105792422359715 ? 14 : 14)))) <= (arr_4 [i_4] [i_2] [i_0 - 1] [i_0 - 1])));
                        var_25 = (max((((var_0 == var_15) * (((var_6 != (arr_9 [i_0] [1] [i_0] [i_0 - 1] [i_0] [i_0])))))), ((~((max((arr_9 [i_0] [i_0 - 1] [i_0] [i_2] [1] [i_4]), (arr_4 [i_0] [i_0] [i_2] [i_0]))))))));
                        var_26 = (max(var_26, ((max((((((var_17 ? var_8 : (arr_4 [i_4] [i_1] [i_2] [i_4])))) ? ((max((arr_1 [i_0 - 1]), var_11))) : (((var_16 < (arr_13 [i_0])))))), (min(((min(var_18, (arr_0 [i_4])))), (arr_1 [i_2]))))))));
                    }
                    arr_14 [i_0] [i_1] = ((-4209105792422359715 ? 65535 : (-2147483647 - 1)));
                    arr_15 [i_0] [i_2] [i_2] |= (max(((~(!var_3))), (((((((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_9 [i_0] [i_0] [i_0] [i_1] [3] [i_0]) : (arr_12 [7] [7] [7] [i_1] [i_1])))) <= (max(4209105792422359715, -1)))))));
                }
            }
        }
        arr_16 [i_0] [i_0] = (((~((var_1 ? var_9 : var_0)))));
    }
    #pragma endscop
}
