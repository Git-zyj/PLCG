/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 >> ((var_8 >> ((((-77 ? -77 : 77)) + 87))))));
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [2] [i_0] = ((((((arr_4 [i_0] [i_0] [i_0]) >= ((var_8 ? 2061 : -2002477042))))) * (((arr_3 [i_0 + 3] [i_0 + 3]) ? 1 : var_10))));
                    var_14 = (min(2408147134, 21740));
                    var_15 = (max(var_15, ((((min(-110, 2179784806)) >> ((((arr_4 [i_0 - 2] [i_1] [i_0 - 2]) < 0))))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((((((((arr_10 [i_0] [9] [7] [24]) - var_1))) ? (max(var_11, (arr_0 [i_0]))) : var_2)) & 268435456));
                        var_17 = ((-(arr_7 [i_0] [i_0 - 2] [10])));
                        arr_12 [i_0] [12] [12] [12] [1] [i_0] = (arr_8 [i_0] [i_0] [13] [i_0]);
                        arr_13 [i_0] [i_0] = ((((((4324734619574390711 | -88) ? 13167 : (max((arr_3 [i_2] [10]), 1886820161))))) || (((-2147483634 || -61) < (7 >= 1)))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [2] [i_0] [i_0] [i_0] = (((((arr_2 [i_0 + 3] [i_0 + 1] [i_0 + 3]) < (arr_2 [i_0 + 3] [i_0 + 2] [i_0 + 2]))) || ((max((arr_2 [i_0 - 2] [i_0 + 1] [12]), var_7)))));
                        var_18 = -1565463025;
                    }
                    arr_17 [i_0] [9] [i_0] [16] = (max(((max(-1315994480129972879, (((21003 > (arr_5 [i_0] [i_0] [20] [i_0]))))))), (2 + 1965992196982665221)));
                }
            }
        }
    }
    #pragma endscop
}
