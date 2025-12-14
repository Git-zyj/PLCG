/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_10);
    var_18 += (var_1 != var_9);
    var_19 += (~-7759748686546146368);

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_20 *= ((((-((min(255, (arr_0 [i_0] [i_0 + 1])))))) * (((arr_1 [i_0 - 2]) / (arr_1 [i_0 - 4])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 ^= (arr_2 [i_0] [i_1] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 &= ((((((((-(arr_4 [i_0] [i_0] [i_0]))) <= (!var_11))))) % (min(6926362670559932575, 1))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((arr_0 [i_0] [i_4]) ? (((min(-56, (arr_3 [i_4] [i_2] [i_0]))))) : ((11520381403149619063 ? 9223372036854775807 : (arr_2 [i_0 + 1] [i_2] [i_4]))));
                                var_23 &= ((var_2 * (min(var_2, ((((arr_7 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_14)))))));
                                var_24 -= ((1331889349 ^ ((((!((!(arr_7 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_1 - 1])))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_4] |= (min((((!(arr_11 [i_4 + 1] [i_2 - 1] [i_4 + 1] [i_3 + 1] [i_2 - 1])))), (-9223372036854775807 + 70)));
                            }
                        }
                    }
                    var_25 = ((10604499849843588681 && (6926362670559932525 / -11530)));
                    arr_15 [i_0 - 2] [i_1] [0] = ((~(((((var_2 / (arr_11 [i_0] [i_1 + 2] [i_1] [8] [i_2])))) ? ((-(arr_8 [i_0] [i_0 - 2]))) : var_12))));
                    arr_16 [i_0 - 2] [i_1 + 2] [i_2] |= (((((~(((arr_8 [i_0] [9]) ? var_6 : var_4))))) ? (((arr_2 [i_0 - 1] [i_1] [i_2 - 1]) >> ((((arr_10 [i_0] [i_1] [i_0] [i_0]) != 10948682643228340067))))) : ((-((((arr_8 [i_2] [i_1]) || var_13)))))));
                }
            }
        }
    }
    var_26 = (((var_1 * -19837) / var_4));
    #pragma endscop
}
