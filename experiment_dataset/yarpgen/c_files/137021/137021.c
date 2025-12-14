/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_3 | ((var_15 >> (var_9 - 3784594644))))));
    var_19 = (min(((((~var_14) % ((max(var_16, var_7)))))), (min(var_9, (((var_9 ? var_16 : var_6)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [14] = -var_10;
        arr_5 [i_0] [i_0] = (((!(((var_8 ? var_11 : var_8))))) ? (min((((var_12 ? var_10 : var_6))), (var_5 + var_15))) : (var_9 < var_9));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [1] [1] |= (min(128, 141));
        arr_9 [i_1] = ((~(!var_13)));
        arr_10 [i_1] = (max((min(var_2, var_16)), (var_12 <= var_0)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_15 [i_2] = (((max(var_6, var_5)) + (max(-var_4, var_14))));
        arr_16 [i_2] = -126;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_22 [i_2] [i_3 + 1] [i_2] [i_2] = (max(((4294967283 ? 2149908153 : -3422048542514489440)), (((var_1 ? var_0 : var_16)))));
                    arr_23 [5] [i_3] [i_3] [i_3] = -484328653;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_27 [i_5] [i_5] = -var_4;
        arr_28 [i_5] [i_5] |= (min((!-13), (!var_0)));
    }
    #pragma endscop
}
