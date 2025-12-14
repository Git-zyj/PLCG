/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (((var_10 * 1) || var_11));
    var_21 = (min(var_21, var_5));
    var_22 = (((((~((max(var_16, var_3)))))) ? 17710996257093726130 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_23 = ((~(!1)));
                    var_24 = ((((arr_2 [i_0]) * (((225 ? (arr_5 [i_0] [i_2]) : var_0))))));
                    var_25 *= (max((min((arr_4 [i_2] [i_1 - 1] [i_2]), ((var_4 ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : var_7)))), (arr_2 [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_26 &= (((arr_5 [i_1 - 1] [i_1 - 1]) % 735747816615825485));
                    var_27 = 17463800523856234950;
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_28 = (min((arr_0 [i_0]), (((arr_11 [i_0] [i_1 - 1] [i_5] [i_6]) ? 2865604806606225255 : 1))));
                                var_29 = (((((arr_3 [i_1 - 1] [i_1 - 1] [i_6]) ^ 225)) << (((((arr_12 [i_1 - 1] [i_1 - 1] [i_1] [10]) | (arr_6 [i_1 - 1] [i_1 - 1] [i_5] [i_5]))) - 11526751444174498615))));
                                var_30 = -1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_31 = (min((((((((var_8 > (arr_21 [i_0] [i_0] [i_0] [i_0]))))) >= var_7))), (arr_24 [i_8] [i_7] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])));

                            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                            {
                                var_32 = (var_18 | var_11);
                                var_33 = ((((arr_1 [i_0]) + ((max((arr_1 [13]), var_13))))));
                                var_34 = 0;
                                var_35 = (((max((min((arr_10 [i_9] [i_7] [i_1]), 10297491470766006511)), 1055670224501110093)) | (arr_11 [i_0] [i_0] [i_1 - 1] [i_8])));
                                var_36 = ((max(9864168224189438882, 13484955604599630895)));
                            }
                            for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                            {
                                var_37 *= ((((arr_18 [i_1 - 1] [i_1] [i_7] [i_8] [i_1]) ^ var_16)));
                                var_38 = var_5;
                            }
                            var_39 = (max(var_39, var_13));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
