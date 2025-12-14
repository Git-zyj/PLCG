/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_16 = (!var_1);
                            var_17 = (max(var_17, 87));
                            var_18 = 6144;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = ((arr_3 [i_3 + 2] [i_0] [i_1 + 1]) & (arr_12 [i_3 + 2] [i_1 - 3] [i_1 + 1] [6]));
                            var_19 ^= 0;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_20 = 1;
                            var_21 = -6144;
                        }
                        var_22 = (arr_9 [i_3 + 2] [i_2 - 1] [i_2 - 2] [i_1 + 1]);
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_1 - 3] |= (arr_14 [i_7 + 1] [i_2 + 2] [i_2] [i_1 - 3] [i_1 + 1] [i_1]);
                        arr_26 [i_0] [i_0] [i_0] = -67;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_23 = ((arr_23 [i_1] [i_7] [10] [i_1] [10]) >= (arr_2 [11]));
                            var_24 = (arr_29 [i_0] [i_8] [i_7 + 1] [i_1] [i_1] [i_1] [i_0]);
                            arr_30 [i_0] [i_1] [3] [i_1] [6] [i_7 + 2] [i_8] = var_2;
                        }
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1 + 1] [i_2] [i_0] = ((((min(65535, 6982938307039962458))) ? (((arr_29 [9] [i_0] [i_1 - 2] [i_2 + 2] [i_2] [i_9] [i_0]) ? ((((1853730419852748793 > (arr_16 [i_0] [i_0] [8] [8] [8]))))) : (((arr_11 [i_9 - 1] [i_1] [i_1]) ? var_4 : var_9)))) : (max(var_8, ((max((arr_3 [i_0] [i_0] [i_2]), (arr_15 [i_0] [i_1] [i_2 - 2] [i_0] [i_1] [i_1] [i_2 - 1]))))))));
                        var_25 = (max(var_25, ((max(((((max(-30619, 7))) ? ((16383 ? 10778044711156226301 : 5473762019607252505)) : ((((arr_2 [1]) ? 244 : -30619))))), (arr_20 [i_1] [i_2] [3]))))));
                        arr_35 [i_0] [i_0] [i_2] [i_9] [i_1 - 1] = (arr_14 [i_0] [i_1 - 2] [2] [i_2] [i_0] [i_0]);
                        arr_36 [i_0] [i_0] = ((!(arr_15 [i_0] [i_9] [i_9 + 2] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_37 [i_0] [i_1] [i_0] = ((-30619 ? -103 : 7));
                }
            }
        }
    }
    var_26 = var_7;
    #pragma endscop
}
