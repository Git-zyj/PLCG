/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((524288 - 0), (var_12 || 3256562844606343967))) / (((max(var_1, (max(22766, 48))))))));
    var_15 = -3371714875;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] = (((((8064 ? 5857197743078492174 : var_4))) ? (((-923252420 ? ((min(132, var_7))) : (2151207748 - var_12)))) : ((((min(var_6, 923252420))) ? ((var_13 ? var_10 : var_4)) : (~var_4)))));
                                var_16 = (min(var_16, ((((min(var_10, 268435424)) == ((min(var_1, (max(5732072725238828402, var_3))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_17 ^= (min((((var_13 > var_4) < (120 / var_12))), (((var_10 <= var_11) <= ((16174 >> (var_11 + 120)))))));
                            var_18 = 2947751300;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_27 [i_1] [7] [i_7] [1] = (min((var_8 || var_6), (max(var_2, 1))));
                                var_19 = (min(var_19, ((max((((!(((7496819673764793592 ? var_6 : -51)))))), 96)))));
                                var_20 ^= max((--8668601418910795541), (68719476735 * 50));
                                var_21 = ((var_11 ? (min(((-8050 ? 32767 : 923252415)), var_6)) : (-var_3 < var_11)));
                                arr_28 [i_1] [6] = 18446744073709027327;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
