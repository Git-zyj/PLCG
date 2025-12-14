/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((-((-54 ? (var_5 != var_2) : (var_3 * 54)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 *= 1;
                    var_17 ^= ((~((var_6 ? (((arr_2 [i_2] [i_1]) ^ 51)) : ((2752043176807423276 ? -51 : 176))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (~(80 - var_3));
                                var_19 = (min(var_19, ((max(((-(min(var_9, 72)))), ((((((arr_1 [1]) ? var_13 : -134217728)) - ((31132 ? 80 : -60369630))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (min((((var_12 ^ 206) * var_6)), (((~(!var_1))))));
                                var_21 = ((((((((43 << (3800876989555641137 - 3800876989555641118)))) ? 43528 : 51))) ? (((((205 ? var_13 : 11924851147511549890))) ? ((182 ? 25036 : var_6)) : 0)) : ((((arr_16 [i_0] [i_1] [i_0] [i_5] [i_5] [i_6] [i_5]) ? (((var_14 + 2147483647) >> (var_13 + 29189))) : (max(1412757095, 36)))))));
                                var_22 = (min(var_22, ((((((1 ? (arr_11 [i_5 - 3] [i_5 - 2] [i_5 - 3] [i_5 + 2] [i_5 + 1]) : (arr_0 [i_2 - 3])))) ? (arr_0 [i_2 + 4]) : (arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 + 2]))))));
                                arr_18 [i_5] [i_5] [i_2] [i_5] [i_5] = 1047570693;
                                var_23 = 1706425879;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
