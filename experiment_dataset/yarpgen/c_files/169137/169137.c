/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((max(0, var_1)) - (!var_5)));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 |= (min((max((max(2815343778, -26186)), (arr_0 [i_0]))), 157));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (min(6035953560695028850, -1621870056));
                        var_23 = (max(var_23, (245 ^ 223)));
                        var_24 = (max((arr_4 [i_0] [i_1] [i_3]), (arr_1 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_25 = (max((((!(arr_6 [i_0] [i_4 + 2] [i_1 + 1])))), (min(var_7, ((max((arr_0 [i_4]), 0)))))));
                        var_26 = ((((max((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), var_17))) ? (~var_1) : ((26186 ? 0 : 1))));
                        var_27 = (((192 & 8323072) ? ((max((arr_2 [i_0]), (arr_11 [i_4 - 1] [i_4 - 1] [i_1] [i_0])))) : var_10));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_28 ^= (min(238, -1299924775));
                            var_29 = (0 & var_17);
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            var_30 = ((((max((arr_13 [0] [i_4 + 2] [i_6 + 1] [i_6]), var_12))) ? (arr_2 [i_0]) : ((((((arr_9 [6] [9] [i_1 - 1] [i_1]) == (arr_4 [i_6] [i_2] [i_0]))) ? (0 >= 2902885594) : (max(1, var_7)))))));
                            var_31 = (min(var_31, (arr_11 [i_0] [i_0] [i_2] [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_32 = (max(((min(var_0, (-9223372036854775807 - 1)))), var_10));
                            var_33 &= (((((-68 == ((max((arr_7 [i_0] [i_4 + 2] [i_2]), (arr_9 [i_0] [i_0] [i_0] [11]))))))) <= ((((min((arr_10 [i_4]), 0)) <= ((~(arr_17 [i_7] [8] [i_2] [i_0] [i_0]))))))));
                            var_34 ^= (min((55 + -143), var_6));
                            var_35 += ((((max((18446744073709551613 >= 9223372036854775806), 255))) ? (var_4 == -547617268) : ((((arr_13 [i_0] [i_1 - 1] [i_4 + 1] [i_7]) == (arr_13 [2] [i_1 + 1] [i_4 + 1] [2]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        var_36 = (max(var_36, 1023));
                        var_37 = var_12;
                        var_38 &= (((12 ? var_18 : var_13)));
                        var_39 = -var_11;
                    }
                }
            }
        }
    }
    var_40 = var_16;
    #pragma endscop
}
