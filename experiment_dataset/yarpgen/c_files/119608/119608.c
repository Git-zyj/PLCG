/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 += (((arr_0 [i_0]) << ((((((max(1120239998, 1120239994))) ? ((8067083156291366539 ? var_7 : var_7)) : (10379660917418185077 <= var_3))) - 294060224883486170))));
                                arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4] |= (min((69 ^ 14465709384229780820), ((((var_14 ? 3981034689479770798 : var_2)) & 3174727300))));
                                arr_11 [12] [i_1] [i_1] [i_1] [i_1] |= ((1120239995 ? ((((((max(var_9, var_0)))) / (1120239988 - -5292)))) : ((var_1 ? ((418317146895214302 ? 3981034689479770792 : 1120239997)) : ((1120239995 ? 14465709384229780823 : 14465709384229780820))))));
                                var_17 = (min(var_17, (arr_4 [i_4] [i_4])));
                                var_18 ^= (((var_0 / 1120239995) ? 3174727298 : ((max((~1), 155)))));
                            }
                        }
                    }
                    var_19 -= ((((var_2 >= ((var_0 ? var_5 : var_8)))) ? ((((var_1 << (var_13 - 6338527880931533339))) * (arr_6 [i_0] [i_0] [i_1] [i_0 - 1] [1]))) : 14465709384229780817));
                    var_20 = (min(var_20, ((((14465709384229780827 < 8067083156291366546) ? ((-((-13 ? var_11 : 8067083156291366546)))) : ((((!((min(var_12, (arr_1 [i_2])))))))))))));
                    var_21 = (min(var_21, (((((((var_7 + 3981034689479770793) - 402653184))) ? (((10379660917418185049 == var_3) << (((min(var_6, var_9)) - 58)))) : (var_14 || var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
