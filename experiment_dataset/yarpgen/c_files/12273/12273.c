/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((1 ? var_1 : var_14)), ((-(var_0 == 1)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_16 = ((max((arr_1 [i_0 - 1]), (arr_0 [i_0 + 3]))));
        arr_2 [i_0] = ((!(!52663)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((~((5244891206774746221 ? 16255 : 3826384059845352780))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4 + 1] = 16250;
                                var_18 = (min(var_18, (((((180 ? (max(var_0, 1)) : ((13201852866934805395 ? -77 : 46577)))) == (((arr_10 [i_0 + 2] [16] [1] [i_3] [i_4 + 1] [16] [i_4 + 1]) ? (arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [1] [i_4 - 1]) : (arr_10 [i_0 - 3] [i_3] [i_3] [i_3] [i_4] [i_4] [i_4 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [21] = ((!(max(1, 1))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = (max(var_19, (((!(((215 ? (!-6119379209811610552) : (!-18245)))))))));
        var_20 *= 1;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            {
                var_21 |= ((((!(var_4 >= 3781386650048068836))) || 0));
                var_22 += 1;
                arr_24 [i_6] [i_7] [i_7] |= (arr_19 [i_6]);
                var_23 = ((6479883669121830711 ? -6119379209811610552 : ((42 ? -638916616 : -6119379209811610552))));
            }
        }
    }
    #pragma endscop
}
