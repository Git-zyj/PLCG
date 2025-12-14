/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_10 = -51;
                            var_11 &= 4294967270;
                            var_12 &= (min(((((var_3 ^ 663856605) ? 1 : -4294967295))), var_5));
                        }
                    }
                }
                var_13 = ((var_6 ? (min(((21393 ? 0 : 4294967295)), 21393)) : -22788));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] [i_4] [i_1] = (arr_12 [i_0] [i_1 + 1] [i_0] [i_5]);
                            arr_17 [i_0] [i_1] = (i_1 % 2 == zero) ? ((((min((arr_0 [i_4]), (0 & 28942))) != ((((min(-4669, 14221))) >> (((((arr_12 [0] [i_1 - 1] [10] [i_5]) ? (arr_7 [i_1] [i_1] [i_1] [i_5] [3]) : (arr_4 [i_0 + 3] [i_1]))) - 1580119548))))))) : ((((min((arr_0 [i_4]), (0 & 28942))) != ((((min(-4669, 14221))) >> (((((((arr_12 [0] [i_1 - 1] [10] [i_5]) ? (arr_7 [i_1] [i_1] [i_1] [i_5] [3]) : (arr_4 [i_0 + 3] [i_1]))) - 1580119548)) - 1615571596)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_14 *= ((((21 ? -12309 : var_1)) + ((56 ? var_0 : -1))));
                            arr_24 [4] [4] [4] [i_0] |= (arr_14 [6] [i_1] [6]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] = -var_5;
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((var_3 / ((var_0 ? 4227529480994220797 : var_6)))) * (((min(39, var_7))))));
    var_16 += var_1;
    #pragma endscop
}
