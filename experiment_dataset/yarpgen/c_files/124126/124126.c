/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(0, 60138));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (!502941227);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = min(((min(-1969334835, 3673003985776676187))), 12570507525037188772);
                        arr_11 [i_0] [i_1] [i_0] = 14987977407688485284;
                        var_23 = max(0, 7);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] |= -14336;
                        arr_17 [i_0] [i_0] [i_0] [7] [8] = (min((max(-140737488355327, ((max(20, (-32767 - 1)))))), ((max((-32767 - 1), (max((-32767 - 1), 7)))))));
                        arr_18 [i_0] = max((min(18068539362560172872, ((max(4, 16))))), ((max(1983960961, (~100)))));
                        arr_19 [i_2] [2] [i_0] = (max(((max(11696866029073163432, 37259980))), (((~((1023 ? 3230752137 : 596666464)))))));
                        arr_20 [i_0] [i_4] = ((-2061404598068731509 ? (max(1983960961, 17206441980085160821)) : 378204711149378745));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_24 = (max(var_24, (((~(max(255, 1983960961)))))));
                        var_25 = (min(var_25, 17206441980085160821));
                        var_26 = (min(var_26, ((((((max(949989458, 1812158599)) ? 287471937 : 16)))))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_0] [i_6] [12] &= 5879465204312755568;
                            arr_28 [i_0] [i_2] [i_2] [i_1] [i_0] = (min(0, 24));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_27 = 182;
                            arr_31 [i_0] [i_1] = 1983960978;
                            var_28 = (!378204711149378731);
                            var_29 = 13;
                            var_30 = (max(var_30, 0));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_1] = (min(((~(~1))), (min(((max(48664, 0))), 16))));
                            var_31 = (74 ? (((min(77, -32747)))) : (((!673808990) ? 32753 : (min(673808991, 1)))));
                            var_32 = 9422616511189404825;
                        }
                    }
                }
            }
        }
        arr_36 [i_0] [i_0] = (max(9422616511189404825, (min(((min(115, 248))), (min(18196078534801067576, 0))))));
    }
    #pragma endscop
}
