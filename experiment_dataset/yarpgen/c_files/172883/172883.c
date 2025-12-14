/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((((41306 >> (37353 - 37335)))) ? (((max(var_0, 58419)))) : -4136274152203921753))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (((-4136274152203921758 || 1) ? (((241 / -4136274152203921758) ? (((min(var_3, -13214)))) : ((var_2 ? -4136274152203921766 : var_8)))) : ((((var_6 < var_1) ? -0 : ((10 ? 1 : -2002525714)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = ((-(((((-188836718 ? 4107437715 : -4136274152203921752)) < -4136274152203921752)))));
                                var_13 = (min(((~(arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]))), (((var_0 & (((arr_8 [i_0] [i_0] [i_2] [i_3] [9]) ? 0 : -79)))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = 12744;
                arr_15 [i_0] [i_0] [1] = -var_6;
                arr_16 [7] [i_1] = -var_9;
            }
        }
    }
    var_14 = (max(var_6, (var_3 | var_7)));
    #pragma endscop
}
