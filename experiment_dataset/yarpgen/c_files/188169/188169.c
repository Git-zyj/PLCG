/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 - 2] = ((((((((10737 ? 122 : -288230376151711744))) ? 18446744073709551587 : (114 | 65533)))) ? (((212 < 3643) ? (((var_2 ? 60222 : var_11))) : ((14508 ? var_2 : 5005164960760683722)))) : var_12));
                    arr_9 [i_2] [i_1] [i_0] = (((((((var_12 ? var_17 : var_4)) & (((var_17 ? var_14 : var_10)))))) ? ((((var_10 ? var_2 : var_4)) ^ (var_16 <= var_4))) : ((((((var_11 ? var_1 : var_13)) >= var_14))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4 - 4] [7] [7] = ((((120 ? (((var_14 ? 116 : var_14))) : ((28205 ? var_2 : 14361576792518906642)))) / var_17));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 = var_3;
                                var_20 = var_5;
                                var_21 ^= (((((var_13 ? ((var_5 ? var_9 : var_17)) : (((var_2 ? var_11 : var_9)))))) && var_11));
                            }
                        }
                    }
                    arr_26 [i_3] = var_2;
                }
            }
        }
    }
    var_22 = ((((((((51 ? 13441579112948867886 : 122))) ? ((-120 ? -6654257691811350484 : 3652)) : ((var_16 ? var_14 : var_12))))) ? (((var_1 >= var_11) ? (4640090031475842635 % 48) : (var_9 != var_18))) : var_7));
    var_23 = ((((((((var_16 ? var_2 : var_14))) ? ((var_5 ? var_5 : var_14)) : (14512085884812105336 <= 18446744073709551594)))) ? (((((((var_15 ? var_2 : var_10))) && (((var_8 ? var_4 : var_4))))))) : (((((13441579112948867873 ? -112 : 48642))) ? (1 / 1943791043) : 121))));
    var_24 = ((-3952704216157690708 ? -2 : 53060));
    #pragma endscop
}
