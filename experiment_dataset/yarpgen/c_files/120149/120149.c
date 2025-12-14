/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((var_5 % 1565566429) ? var_0 : ((min(-32145, var_13)))))) ? ((((((2729400867 ? var_5 : -144115188075855872))) ? var_17 : var_5))) : (((arr_1 [i_0] [i_0]) ? 4294967282 : (arr_1 [i_0] [i_0])))));
        arr_4 [1] &= 261632;
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_19 = (((((821736608 ? var_6 : -25927))) ? (arr_6 [i_1 - 2]) : 32144));
        var_20 |= var_7;
        arr_7 [i_1 + 2] = 32144;
        arr_8 [i_1] = 32159;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_21 ^= (arr_10 [i_2]);
        var_22 = (arr_6 [i_2]);
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_23 = (((((!(((arr_5 [i_3]) != -32145))))) != ((max((32144 >= 1565566420), (arr_9 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_29 [i_4] [i_5] [i_7 - 1] &= (((arr_14 [i_3] [i_3 + 1]) > (arr_14 [i_3] [i_3 + 1])));
                            arr_30 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] = (-(arr_16 [i_3 - 1] [i_7 + 1]));
                            arr_31 [i_7] [i_5] [i_5] [14] [i_4] [i_3] [i_3] = 32159;
                            var_24 = -576460752303423488;
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_25 = (var_8 ^ var_5);
                            var_26 = (min(var_26, (((((3947158812 ? 9223372036854775807 : (arr_9 [i_3]))) > ((3752402515 ? -261632 : var_1)))))));
                        }
                        arr_35 [i_3] |= (((arr_25 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_4]) & 9));
                    }
                    var_27 ^= (max((arr_6 [i_3 + 1]), ((min(576460752303423487, 25895)))));
                }
            }
        }
    }
    var_28 = (min(var_28, ((((~var_11) / var_4)))));
    #pragma endscop
}
