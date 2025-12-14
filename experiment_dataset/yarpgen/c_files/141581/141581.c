/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = ((-16816097130076619102 > (((((((86 * (arr_7 [i_2] [2] [i_2] [i_2])))) <= ((-1146404582 ? var_5 : (arr_1 [i_0])))))))));
                        arr_11 [i_0] [i_2] [1] [i_0] [i_0] = var_1;
                        var_20 = (max(var_20, (~64258)));
                        arr_12 [i_2] [i_1] [i_1] [i_1] = (((1 >> 1) / 1));
                        var_21 = (((min((arr_6 [i_2]), var_17)) < var_7));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (min((arr_3 [i_0] [7]), 49419));
                        var_23 *= (((((arr_10 [1] [i_4] [1] [i_2] [i_0] [i_0]) * var_2)) == (142 + 182)));
                        var_24 = var_13;
                        var_25 = ((var_7 + (arr_5 [i_1] [i_1] [i_1])));
                    }
                    var_26 = ((-(+-4997867633728311000)));
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_19 [9] [i_1] |= (min(((((arr_7 [i_0] [i_5 + 1] [2] [i_0]) % (arr_0 [i_6 - 1] [i_5 + 2])))), ((((142 ? (arr_17 [11] [i_6 + 1] [i_5 + 1] [i_1] [8]) : (arr_3 [i_6 - 1] [i_0]))) | ((min(var_15, 1792)))))));
                            var_27 = ((((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_6 + 1] [i_0]) : 132))) ? (35 || 16117) : 4618350981545533227));
                            var_28 |= (((4997867633728311013 > 64258) == ((((min(var_15, var_5)) <= (((arr_3 [i_6] [i_0]) ? (arr_4 [i_5]) : 1)))))));
                            var_29 = (max(var_29, (arr_5 [i_0] [12] [12])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_30 = var_10;
                            arr_26 [i_8] [i_8 - 1] [i_7] [i_1] [1] = -121;
                        }
                    }
                }
            }
        }
    }
    var_31 = 1774;
    var_32 = var_13;
    #pragma endscop
}
