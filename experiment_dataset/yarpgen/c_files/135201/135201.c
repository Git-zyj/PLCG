/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (var_9 ? ((min(-127, 255))) : -127);
                                var_20 = (((((15118848408642976473 ? (((arr_4 [i_0] [i_1] [i_0]) ? (arr_0 [i_0] [i_3]) : var_16)) : 127))) ? ((((~var_10) ? ((var_16 ? var_4 : 32767)) : var_3))) : (((((21 ? 65535 : 29))) ? ((var_6 ? (arr_7 [19] [7] [i_2] [i_0] [i_4]) : 3327895665066575143)) : (!var_2)))));
                                var_21 = (min(var_21, ((((-127 - 1) && 253)))));
                                var_22 = (--313084700);
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 -= (((((((var_4 >> (((arr_6 [i_0] [i_1] [i_1]) - 8101024567784653796))))) ? ((227 ? -121 : var_13)) : (((min(4364, var_8)))))) != (((((127 ? (-127 - 1) : 171))) ? ((-7012385150723810306 ? 87 : 3327895665066575150)) : (arr_3 [i_0 + 1])))));
                                arr_17 [i_0] [i_1] [i_1] [i_0] [i_6 - 3] = (-32767 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 |= (min(var_16, (((0 <= var_13) ? var_15 : (((var_9 ? 32767 : var_5)))))));
    var_25 = -8559812216474932771;
    #pragma endscop
}
