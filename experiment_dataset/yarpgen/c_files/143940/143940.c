/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((((((((-2147483647 - 1) ? 2147483647 : (arr_0 [i_0]))) & (arr_6 [i_0])))) ? ((((((arr_6 [i_0]) >= -2147483647))) | (14140302632280211184 == var_0))) : (((-70 <= var_6) ? 388918831 : (((arr_4 [i_1]) ? var_3 : var_8))))));

                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((((min((((arr_8 [i_3] [i_1 + 4] [i_0]) ? (arr_6 [i_2]) : var_3)), (max(var_6, 30))))) ? ((~(arr_4 [i_0]))) : 30)))));
                        var_17 -= ((((((var_6 == var_1) ? var_2 : (max(var_0, var_12))))) ? ((((!((((arr_1 [11]) ? -388918831 : var_0))))))) : var_7));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_18 = (arr_9 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]);
                            var_19 = (((((-(arr_9 [14] [i_1] [i_2] [8] [14])))) / (arr_5 [i_3 - 3] [i_3] [i_1 - 3])));
                            var_20 = (min(var_20, (~1760059941429657871)));
                            var_21 += (((((var_9 ? (arr_7 [i_0] [i_3] [i_2] [i_0] [i_0]) : (arr_0 [i_0])))) == 134217726));
                            var_22 ^= ((~((var_12 ? (arr_7 [i_0] [i_4] [i_0] [i_3] [2]) : (arr_8 [i_4] [i_4] [i_4])))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_23 = ((((min((~-26), ((-8 ? 15 : 17472557036781309246))))) ? (min((arr_10 [i_1 - 3] [12] [i_3] [i_3 - 1] [8] [i_5]), (arr_10 [i_1 + 3] [i_3 - 3] [i_1 + 3] [i_3 - 4] [2] [i_3 - 2]))) : var_4));
                            var_24 = (arr_8 [i_1] [16] [i_2]);
                            var_25 = ((-(((arr_7 [i_0] [i_1] [i_2] [i_3] [i_5]) ? -var_4 : (max(var_0, var_9))))));
                        }
                        arr_14 [i_1] [i_2] [15] = (((((~11805996905213010379) || (((11805996905213010379 << (-2060065818 + 2060065847))))))) != var_3);
                        var_26 = var_4;
                    }
                    var_27 = (max(var_27, ((((max((arr_1 [i_0]), (arr_9 [i_0] [i_0] [i_2] [i_1] [i_2])))) / (((arr_9 [8] [i_0] [i_2] [i_2] [i_2]) & var_9))))));

                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_28 = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]);
                        arr_19 [i_0] [i_1] = (arr_17 [i_1] [i_1] [i_1 + 2] [15]);
                    }
                    var_29 = ((var_7 & (((-1618703074046116139 << (700028653 - 700028643))))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        var_30 -= var_3;

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_31 *= -4;

            /* vectorizable */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                var_32 = (var_10 <= 127);
                var_33 = var_5;
            }
            var_34 |= min((((-6 ? (arr_9 [i_7 + 1] [12] [i_8] [0] [i_8]) : (arr_11 [i_7] [i_7] [12] [i_7 - 1])))), var_1);
        }
    }
    #pragma endscop
}
