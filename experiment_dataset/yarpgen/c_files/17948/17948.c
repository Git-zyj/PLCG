/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-1695765361, var_2));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max((((((0 ? 281474976710655 : 18446462598732840961)) >= (((((arr_1 [i_0] [16]) < -23769))))))), ((-(max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = (max((944888895 < 912449676), var_8));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_1 - 1] [i_2] [i_2] = (((arr_7 [18] [i_1 - 1]) * (arr_7 [i_2 + 1] [i_1 - 1])));
            var_12 = -1614259854;
            arr_13 [1] [i_2] = (((((arr_6 [i_1] [i_2]) ? var_4 : 0)) - ((var_2 ? 1695765387 : 110))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_13 = ((-116 ? ((-(max(var_7, var_9)))) : var_3));
            arr_16 [i_1] = -912449677;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_14 -= (((((76 >> (1695765345 - 1695765318))) | 8)));
                            arr_26 [i_5] [i_5] [i_5] [i_4] [i_4] [i_3] [8] |= (203 < -13681);
                            arr_27 [i_3] [i_1] = var_5;
                            arr_28 [i_1] [i_1] [i_1] [i_1] = (((var_10 % var_6) ? -10 : (((((var_10 ? var_1 : var_4)) * (var_10 / 3506380581))))));
                        }
                    }
                }
            }
            arr_29 [i_1] [i_1] [i_3] = (3506380568 << 8);
        }
        var_15 = ((3338811767805162435 ? (((max(var_9, 736735647)) * var_8)) : ((((((arr_11 [i_1]) ? -1695765386 : var_6)) % ((min(var_3, var_6))))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_32 [i_7] = ((min(-1695765363, 1813872776)));
        arr_33 [i_7] = var_1;
        var_16 = ((max(1, ((79 >> (16127638801489136518 - 16127638801489136490))))));
        var_17 = (((((912449677 ? (arr_19 [i_7] [i_7] [i_7] [i_7]) : ((-14478 ? 1695765360 : var_3))))) ? ((min((!23829), (((arr_31 [i_7]) | var_9))))) : ((var_3 ? (arr_0 [i_7]) : (!var_3)))));
        arr_34 [i_7] = (max(var_8, var_8));
    }
    var_18 = ((var_6 ? -var_5 : ((((min(var_0, -3177))) ? 0 : ((var_9 ? var_7 : 0))))));
    var_19 -= (max((min(var_6, -30)), var_8));
    #pragma endscop
}
