/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((90 != (min(((var_5 ? 6990260993265828064 : var_3)), 90))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 -= 189;
                    var_15 = ((51369 ? (((90 * var_12) - -95072526)) : (-32767 - 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 -= ((-(max(((3387014762034551768 ? 13308107924731602719 : 3168006866409104385)), (var_11 / 18)))));
                                var_17 = (min(var_10, (!var_0)));
                            }
                        }
                    }
                    var_18 ^= ((((((var_11 / 18446744073709551596) - ((var_3 ? 105 : 14054157009265072549))))) ? -3168006866409104385 : 3168006866409104385));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_19 = var_11;
                var_20 = ((576451956210401280 ? 761902259 : (((var_5 ? (arr_11 [i_5]) : var_10)))));
                var_21 = 4611686018427387904;
            }
        }
    }
    #pragma endscop
}
