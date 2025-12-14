/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_18 = var_10;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (var_3 > 3685609181);
        arr_7 [i_1] [i_1] = ((((arr_4 [i_1]) ? var_7 : (arr_4 [i_1]))));
        arr_8 [i_1] [i_1] = (max(var_5, 14336));
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_20 ^= var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = ((~(max(var_6, -14362))));
                                arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] = var_16;
                                var_22 = (((((var_7 ? -10552074 : var_0))) ? (arr_17 [i_6 + 1] [i_6 + 1] [i_2 - 1]) : (max((arr_17 [i_2 - 3] [i_6 + 1] [i_2 - 3]), var_15))));
                            }
                        }
                    }
                    var_23 = (arr_13 [9] [i_3]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_27 [i_2] [0] [i_2] = (((arr_26 [i_2] [i_7] [0] [0] [i_2] [i_2]) ? (min((min(2796154720568513123, -2796154720568513129)), ((min(0, (arr_13 [i_2] [i_2])))))) : 255));
                                var_24 = ((((min(var_4, ((((-127 - 1) == var_9)))))) ? var_12 : (((8 & -1) ^ ((max(1, -1917027620)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
