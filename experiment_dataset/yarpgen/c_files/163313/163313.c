/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = var_3;
    var_21 ^= (max(var_12, ((((3748862470355423992 & var_14) >= var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = 32768;
                    arr_8 [i_0] = ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (32774 ^ 9889916308063394270) : (arr_5 [i_0]));
                    arr_9 [12] [18] [i_2] &= (((((~(arr_1 [1])))) ? 14624345527962193394 : ((((((arr_6 [i_1 - 2] [i_1 - 2] [8] [8]) != (arr_0 [i_1 + 1]))) ? (arr_1 [2]) : (arr_7 [2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (max(14624345527962193377, (((32767 ? 243 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_24 = var_15;
                                var_25 = (max(var_25, (var_13 >= 3822398545747358216)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
