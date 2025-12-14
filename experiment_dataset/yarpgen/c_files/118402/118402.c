/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (max(var_12, (-32753 && var_1)))));
    var_17 = (max((!14546089664984075397), 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4] = ((max(((((arr_8 [i_0] [i_3] [i_4 + 3]) << 1))), (min((arr_4 [i_0] [i_0] [i_0]), 25192)))));
                                var_18 = (min(0, ((((((arr_9 [i_0] [i_0] [i_2] [22]) & -56))) ? (max(191, 3900654408725476212)) : (arr_8 [i_4] [i_2] [i_2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_2] [i_2] [i_1] [i_1] [i_6] = (min((min(((max(16, 43516))), -3432271024839418188)), (((!(255 % 9223372036854775807))))));
                                var_19 = (max(3268225843543032455, (!14546089664984075397)));
                                var_20 = ((((((21263 ? 65520 : 1)))) ? (arr_11 [i_6] [i_6] [i_2] [i_5]) : (arr_6 [i_0] [i_0] [i_0])));
                                var_21 *= (arr_15 [i_0] [i_1] [i_5] [6] [i_6] [i_6]);
                            }
                        }
                    }
                    var_22 &= ((~(min(-5818605027174706337, 3155860463970547744))));
                    var_23 = (3432271024839418188 | (-32767 - 1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((((!5822323166419854504) ? (max(-32315, (((arr_30 [i_7] [i_8 + 1] [i_9] [8]) ? (arr_19 [i_7] [i_8] [i_9] [i_10]) : (arr_23 [i_7]))))) : (((max(65535, 483318495)))))))));
                            var_25 = (min(var_25, ((((3900654408725476218 ? -92938665 : -866947400937614903))))));
                        }
                    }
                }
                arr_34 [18] [i_7] |= ((((((16 | -3268259061984161293) ? (((arr_16 [i_7] [i_7] [i_7] [i_7]) * 431091610319663531)) : ((min(722003157472078203, (arr_27 [i_7]))))))) ? ((((max(43516, 240))))) : ((max(43516, 0)))));
                var_26 = 15;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_27 -= 0;
                            var_28 = -5982967486742177213;
                        }
                    }
                }
                arr_41 [i_8] = (arr_17 [i_7] [i_7] [18] [i_8] [i_8 + 1]);
            }
        }
    }
    #pragma endscop
}
