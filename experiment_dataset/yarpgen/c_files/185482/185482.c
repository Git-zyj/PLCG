/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((-((124 >> (var_0 - 18095948389394390478)))));
    var_12 = -var_6;
    var_13 &= (min((min(((var_0 ? 0 : 3938600710472407809)), var_2)), (max(var_2, var_4))));
    var_14 = 139637976727552;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(var_6, var_0))) ? 7245683029544936314 : (((((arr_1 [i_0]) == (arr_1 [i_0])))))));
                                arr_14 [i_0] [i_1 + 2] [i_2] [14] &= (-(min(9257419522523994632, -9257419522523994637)));
                                var_16 -= (arr_6 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_2] [i_2] [i_5 - 1] [i_6] [i_2] = (((((((((var_10 ? 119 : var_6))) < ((16342404568027530018 ? (arr_12 [i_1 + 1] [i_5 - 1] [i_2] [i_5] [i_1 + 1]) : var_1)))))) <= 2127225533317559383));
                                var_17 = 14589894149721433793;
                                var_18 = min(((-10363453319727584929 ? 48253 : var_10)), var_7);
                                var_19 |= ((+(((arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_5 - 1] [i_5 - 3] [i_5] [i_1 - 1]) ? (arr_18 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]) : 148))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
