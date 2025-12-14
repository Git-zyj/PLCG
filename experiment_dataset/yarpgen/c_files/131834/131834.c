/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? ((((var_6 ? 1794464340 : 1794464347)))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (min((((!(1794464351 * 16112)))), ((4294967290 ? (arr_5 [i_1 + 4]) : (arr_5 [i_0])))));
                                var_19 ^= 16116;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_20 = (((max((49425 / 85), (((arr_18 [i_1] [i_1] [i_0]) ? -802769264753231214 : 6089424697724084303)))) - -31));
                                var_21 = (arr_16 [i_0] [i_1] [i_1] [i_6]);
                                arr_22 [i_0] [10] [i_5] [4] [i_5] [i_6 - 2] [i_7] = (var_1 - 6296234710151333746);
                                var_22 = (-802769264753231222 ? 1 : 82);
                                var_23 = (max(var_23, 1222256619));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_0] [i_0] = (arr_4 [i_1 + 4] [i_1 + 4]);
                var_24 = (max(var_24, var_2));
            }
        }
    }
    #pragma endscop
}
