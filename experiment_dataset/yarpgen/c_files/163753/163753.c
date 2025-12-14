/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((((((var_14 ? var_12 : var_11))) ? (-5176770254690964122 < 31128) : ((var_6 ? 1881558739951170298 : 24981)))) > (((var_0 ? var_14 : ((var_12 ? var_1 : var_5)))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] = -5176770254690964122;
                    arr_9 [i_0] [i_0] [i_0] = (((var_3 < var_9) ? ((((((var_6 ? 22031 : var_13))) || (((-20199 ? var_13 : var_7)))))) : (((!(((32241 ? var_4 : var_5))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_16 -= (min((((var_13 && 24982) ^ ((-14701 ? 255 : 485546878530168510)))), ((min(var_12, (var_3 || -32241))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_17 = (max(var_17, -var_12));
                    var_18 &= (var_7 ^ -1);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_19 = ((240 ^ ((((max(var_12, var_3))) ? (max(24353, var_2)) : var_7))));
                            arr_25 [i_4] [i_4] [i_7] = ((var_1 | (max((var_15 % var_7), ((var_7 << (var_7 - 12127)))))));
                        }
                    }
                }
                arr_26 [14] [14] [i_3] = ((max(((14343673398664648874 ? var_13 : var_1), ((max(-9569, -19104)))))));
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
