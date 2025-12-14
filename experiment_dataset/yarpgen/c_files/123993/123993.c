/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_15 = ((var_12 ? ((-305224567 ? 614828508 : 614828493)) : 34013516));
                    var_16 = (min(var_16, ((((((var_2 ? (arr_0 [i_0] [23]) : var_11))) ? ((((var_4 < (arr_5 [0] [0] [0] [i_0]))))) : ((var_12 ? 32767 : var_6)))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (max(-1307290692, ((~(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    arr_10 [i_0] [i_1] [i_1] [4] = (arr_2 [i_0] [i_0]);
                    arr_11 [i_0] [1] [21] [i_0] &= 34013516;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_5] [i_4 + 2] [i_5] = (min((min((min(var_1, 59157414616845512)), ((((arr_12 [i_1] [1]) ^ var_0))))), 3611780544));
                                var_18 = ((arr_15 [i_0] [i_1] [i_1] [i_4] [i_5]) ? (max(((((arr_15 [1] [17] [i_1] [i_1] [i_0]) ? 64 : -1769607440560710414))), var_12)) : (((~((var_6 ? var_4 : var_10))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_3] = (((-(arr_16 [i_0] [i_1] [24] [i_3] [24]))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_19 = (((((~(((-34013525 == (arr_1 [i_0]))))))) ? var_1 : (var_13 + 1073741823)));
                            arr_24 [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                            var_20 = (min(var_20, -5782858159448891405));
                        }
                    }
                }
                var_21 ^= ((~((((1 ? var_6 : var_8))))));
            }
        }
    }
    var_22 &= 1;
    var_23 = (!var_12);
    #pragma endscop
}
