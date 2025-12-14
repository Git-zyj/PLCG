/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_12 = (~10);
                                var_13 = (104 ? 104 : 152);
                            }
                            for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_14 = 2199022731264;
                                arr_18 [i_2] [i_1] [i_0] [i_3] [i_5] [i_2] = ((((((arr_14 [i_0] [i_0 + 1] [i_2 + 3] [i_5 + 1] [i_5 + 1] [i_2]) ? (arr_14 [i_0 + 2] [i_1] [i_1] [i_3] [i_5] [i_5 + 1]) : var_1))) ? (min(var_8, var_10)) : (min((arr_14 [i_5 - 1] [i_3] [i_2 - 1] [i_1] [1] [9]), var_0))));
                                var_15 = (min((9 / var_5), (((~var_10) | (arr_16 [i_0 + 2] [i_0 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 3])))));
                                var_16 = var_3;
                                arr_19 [i_1] [i_2] [i_2 + 1] [i_1] [i_0] = var_4;
                            }
                            for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                            {
                                var_17 ^= (~var_9);
                                var_18 = (max(var_18, var_7));
                                var_19 = (max(var_19, (((var_10 || ((min(((((arr_0 [i_2]) <= 102))), (min(var_2, 0))))))))));
                                var_20 ^= ((2147483646 ? ((6111754582318855336 ? -1477968043 : 6111754582318855322)) : 62193799));
                            }
                            var_21 = (((min((!var_0), (!62193799))) || ((var_0 || (((1477968042 ? (arr_12 [i_0] [i_0] [i_2] [11]) : (arr_15 [i_3] [i_0] [i_2 - 1] [i_0] [16]))))))));
                        }
                    }
                }
                arr_22 [i_0] = var_0;
            }
        }
    }
    var_22 ^= ((((min(0, 6111754582318855349))) || (((((max(var_4, 14423151077341190373))) ? var_3 : (~var_8))))));
    var_23 = var_5;
    var_24 = var_8;
    #pragma endscop
}
