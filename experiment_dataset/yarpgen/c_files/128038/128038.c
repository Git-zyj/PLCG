/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((8192 == 65024) - (var_6 / var_14))) == ((((var_5 <= 3082647952) == (0 < var_16))))));
    var_19 = ((((((2320623282 < var_16) == (var_0 - 33)))) <= ((((var_1 - 952019597) < (65040 <= 494455701))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((((((var_7 < var_9) == (((1663587213281841804 <= (arr_2 [i_0]))))))) <= ((((33 || 65535) && (0 || 850331174))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (7638945758272384360 < 15791);
                                var_21 = (((((27 <= 2013265920) <= ((3082647939 - (arr_8 [i_0] [i_1] [i_0] [i_0 - 4] [i_4 + 1])))))) - ((((850331174 < 2234712240) < (var_3 / var_5)))));
                                var_22 = ((((((var_3 <= 57369) <= ((15 | (arr_7 [i_3])))))) == ((((-1663587213281841791 <= 2541316553) == (-8638 ^ var_9))))));
                                var_23 = (((((var_5 / 50839) / (((arr_1 [i_2 - 2]) * var_16)))) * ((((var_12 * (arr_7 [i_0 + 2]))) / (var_12 * 222)))));
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((((((arr_3 [i_0] [i_0 + 1]) - (arr_12 [i_0 - 1] [i_1 - 1] [i_2] [i_3]))) < ((((var_4 <= (arr_7 [i_2]))))))))) == (((((((arr_3 [i_0] [i_1]) == 2117527803)))) - ((var_4 | (arr_2 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((((var_6 < var_11) < (var_2 < var_10)))) <= (3444636113 < 1)));
    #pragma endscop
}
