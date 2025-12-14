/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_9 | -8930556912257048237) ? -30720 : (~3280157156708681048))) < (((min((3238 == var_0), (var_1 < var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 *= (-21542 | 932493483931973115);
                            var_21 ^= ((((((arr_10 [4] [i_3]) & (max(1, 3797079413235517149))))) ? (arr_5 [i_0] [i_1] [1]) : ((((((arr_1 [i_0]) ? (arr_2 [i_0]) : 21533))) ? (((max(65535, -21546)))) : (max((arr_0 [i_2]), -21530))))));
                        }
                    }
                }
                var_22 = ((((((arr_2 [i_0]) ? 127 : ((max((arr_1 [i_0]), (arr_11 [i_1] [i_1] [i_1 - 1] [i_1]))))))) ? ((26809 ? 21544 : (21547 != 172))) : ((192 ? ((-(arr_3 [i_0] [i_0]))) : (arr_4 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_23 = (min((var_16 + 151), (((((28 ? var_17 : var_7))) ? (var_17 || var_9) : (183 < -6964712842077429456)))));
    var_24 = ((~((~((var_9 ? 192 : var_18))))));
    #pragma endscop
}
