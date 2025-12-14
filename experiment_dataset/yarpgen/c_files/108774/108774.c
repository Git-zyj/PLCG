/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 += ((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 2]) ? var_6 : (arr_2 [i_1 + 2] [i_1]));
                    arr_6 [i_0] [i_0] [i_0] = ((726016324398613998 ? 1 : 52831));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((var_8 ? -2080866329 : (arr_11 [i_0] [i_1 + 3] [i_1] [i_1 + 1] [i_1] [i_4])));
                                var_14 = ((var_9 ? 755885142 : var_10));
                            }
                        }
                    }
                    var_15 += 1775748343;
                    var_16 = (max(var_16, 1));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [11] = ((-(var_9 + 4294967295)));
                    arr_17 [i_0] [i_0] [i_0] = var_7;
                    var_17 = ((var_3 ? (arr_4 [i_0] [i_1 - 1] [i_1 + 2]) : -49282699));
                    arr_18 [8] [1] [i_5] [i_5] = (var_11 ? -25 : (arr_8 [i_1 + 1] [i_1 - 1]));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_18 += (((min(4503565267632128, var_1)) ^ ((((arr_4 [15] [i_6] [i_6]) % (arr_4 [i_0] [i_1 + 3] [i_6]))))));
                    var_19 = (((((var_11 ? 755885143 : 34) * (12704 / 2)))));
                }
                var_20 = (min(var_20, ((((((107 ^ (arr_19 [i_0] [i_0]))))) ? var_1 : ((((min(var_5, 755885142))) ? (((arr_13 [i_0] [i_0] [i_1] [i_1 + 1]) | var_2)) : (~var_6)))))));
                var_21 += 2038960000;
            }
        }
    }
    var_22 = (var_5 / (((((var_5 ? var_10 : var_8))))));
    #pragma endscop
}
