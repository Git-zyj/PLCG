/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (min(1, (((((min((arr_1 [i_0]), 101)))) & (min((arr_3 [i_1]), 1610612736))))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_11 = (min(var_11, (((~((((9210525131641792078 % 144) == (~16775168)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (arr_1 [i_3 + 2]);
                                var_13 = ((((((((arr_12 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4]) * (arr_11 [i_0] [i_1] [i_3])))) / 1698190956084558057)) + (arr_3 [i_0])));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((min((((((arr_1 [i_0]) % 6)))), (~260395970))))));
            }
        }
    }
    var_15 = 27021597764222976;

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_16 = (min(var_16, (arr_14 [i_5 + 2])));
        arr_16 [i_5] = ((((min(1, -61))) < ((((((arr_14 [i_5 - 2]) != (arr_14 [i_5])))) + (arr_15 [i_5 + 1])))));
        var_17 = -51;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_18 = (min(var_7, (min(4563790234435896631, ((86 ? var_5 : (arr_4 [i_6] [i_6] [i_6])))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_7] [i_6] [i_7] = ((((((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) && (((170 ? 10354993999824184375 : var_5)))))) > (min(((225 ? 243 : -30786)), 65506))));
                    arr_26 [2] [i_7] [i_7] [i_6] = ((~(var_5 && 4194303)));
                }
            }
        }
        var_19 = (min((min((((arr_14 [i_6]) ? -9210525131641792078 : 232)), 260395970)), -260395972));
        arr_27 [i_6] [i_6] = (min(34, 29));
        var_20 = 155;
    }
    var_21 = (~48);
    var_22 = var_1;
    #pragma endscop
}
