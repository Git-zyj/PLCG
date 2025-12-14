/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (max(var_15, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((((((arr_5 [i_0] [i_2] [i_2]) & -3911671385962969717))) > -71));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (134213632 == -1837227266);
                                var_19 = (min(var_19, (((101 ? (((((max(22194, 1837227245))) && (arr_9 [i_3] [i_2] [i_3])))) : 140)))));
                                arr_12 [2] [i_2] [i_3] = -93;
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_2] [i_2] |= ((((-7687443691665723855 ? 6796179714485835715 : -106)) & (((((((22295 ? -886298362 : var_7))) <= (max(var_7, -7150405519229412921))))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_17 [11] [11] [i_5] = var_11;
                    arr_18 [i_0] [i_0] = ((((arr_10 [2] [14] [i_0] [i_1] [i_1] [i_5] [i_5]) + -5535101327525597427)));
                    var_20 ^= var_2;
                    var_21 = ((-2086695030 & (((2086695032 == (arr_2 [i_0]))))));
                    var_22 += (max((min(var_9, (!-2086695031))), var_11));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_22 [1] [i_1] = 1895940255;
                    var_23 ^= ((((-1545629600 ? (arr_19 [i_0]) : var_6)) >= var_11));
                }
                var_24 = 1047269254899962547;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            {
                var_25 = (max(1837227266, 772643011958900885));
                var_26 &= ((!((!((max(var_1, (arr_24 [i_8 - 2]))))))));
            }
        }
    }
    var_27 = (min(var_27, ((max(var_3, 3063219941307090818)))));
    #pragma endscop
}
