/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 -= (max((arr_4 [i_0]), var_3));
                arr_5 [i_0] [i_0] = ((var_11 ? (((var_12 ? 1415421366 : var_5))) : ((max((((arr_4 [i_0]) ? var_12 : var_6)), 1)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, (((1773096556 << (((max(2521870730, 7068771494839240205)) - 7068771494839240188)))))));
                    var_17 = 3687020546;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_18 = ((((max(var_11, (arr_18 [i_7 - 1] [i_7 + 1] [i_7 + 1] [3])))) ? (((arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1] [8]) ? var_3 : 2521870730)) : (~var_6)));
                        var_19 = (1773096565 ? 1773096556 : 1773096565);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_20 = var_4;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_21 = (((arr_20 [i_2] [i_8] [i_2]) == var_10));
                            var_22 = (((-32767 - 1) ? 2521870730 : 1870520272));
                            var_23 = (arr_9 [i_2] [i_2 - 1]);
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            var_24 = 1549;
                            var_25 = (max(var_25, 9776343890770502603));
                            arr_29 [i_2] [1] [i_2] [i_8] [1] = (((1773096566 ? var_3 : (arr_21 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1]))));
                            var_26 ^= ((max(var_0, 2521870739)));
                            arr_30 [i_6] [i_6] [i_5] [0] [i_6] [i_6] &= ((-((-(max(1773096566, var_10))))));
                        }
                        var_27 = var_4;
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        arr_33 [4] [i_2] = ((29179 ? var_3 : var_9));
                        var_28 = var_10;
                    }
                    arr_34 [i_2] [0] [i_6] = (i_2 % 2 == zero) ? (((((1713966377 << (((arr_9 [i_2] [i_2 - 1]) - 10231559688492267081))))) ? (((31 ? -1653960452 : 2521870730))) : ((((max(var_1, var_11))) ? var_11 : 8670400182939049007)))) : (((((1713966377 << (((((arr_9 [i_2] [i_2 - 1]) - 10231559688492267081)) - 12416216054152041421))))) ? (((31 ? -1653960452 : 2521870730))) : ((((max(var_1, var_11))) ? var_11 : 8670400182939049007))));
                }
            }
        }
        var_29 = (i_2 % 2 == zero) ? (max(((max(((var_5 ? 1 : (arr_18 [i_2] [i_2] [1] [1]))), var_1))), ((var_10 >> (((arr_8 [i_2]) - 1336134861)))))) : (max(((max(((var_5 ? 1 : (arr_18 [i_2] [i_2] [1] [1]))), var_1))), ((var_10 >> (((((arr_8 [i_2]) + 1336134861)) + 67692523))))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_30 *= (!var_10);
            var_31 = ((-(arr_8 [i_2])));
        }
        var_32 = (~(~8670400182939049023));
    }

    for (int i_13 = 3; i_13 < 13;i_13 += 1)
    {
        var_33 = (max(var_33, (((~((var_9 ? (arr_1 [4]) : var_5)))))));
        var_34 = (((arr_2 [i_13 - 3]) <= (((arr_2 [i_13 - 3]) - var_13))));
        var_35 = (max(((max(var_13, ((max(var_11, 18789)))))), (((arr_1 [i_13 - 2]) & 17928953567297430397))));
    }
    #pragma endscop
}
