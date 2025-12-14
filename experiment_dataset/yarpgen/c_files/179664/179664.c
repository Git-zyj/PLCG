/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((((!(var_3 && 0)))) ^ 0)))));
                    arr_8 [i_0 - 1] [i_0] [14] = (min(((56 >> ((((min(-28, var_5))) - 94)))), ((41745 ? 35886 : ((56 ? 31 : -24927035))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_13 = (4294967292 ^ 56);
                        var_14 -= (min(((4283533743511678286 ? 56 : -1)), ((((1 ? (arr_13 [i_0 - 1] [i_3] [i_3] [i_5]) : (arr_13 [i_0] [i_0] [i_5] [10]))) ^ (((!(arr_13 [i_0] [i_3] [i_4] [i_5]))))))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = (max((-31 % 1515393458), (((-4283533743511678287 % -7020924959911463988) ? -5052357462670140844 : (((200 / (arr_5 [i_0] [9]))))))));
                            var_15 = 31;
                            var_16 = (((((29 >> (24927016 - 24927004)))) ? (((arr_17 [1] [i_0 + 1] [i_0 + 2] [14] [i_0]) * (arr_11 [i_0] [i_0]))) : ((65531 ? 212 : -24927035))));
                            var_17 *= (((((-4720 ? (27436 & 7020924959911463975) : (~44)))) ? ((min(var_4, 127))) : ((1 ? (arr_12 [i_5] [i_5] [i_5]) : 118))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_18 += ((~((((var_2 ? var_7 : var_7))))));
                            var_19 = var_0;
                            arr_22 [i_0] [i_3] = var_7;
                            var_20 -= ((~38099) ^ (((var_1 + var_1) ? 229 : (max(7020924959911463987, -8140796032492417798)))));
                        }
                    }
                }
            }
        }
        arr_23 [i_0] = ((((-7105 ? ((min(24927011, 1))) : ((0 ? -4283533743511678286 : 27443)))) * 0));
        var_21 ^= 24927029;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            {
                var_22 += (-24927011 && 64196);
                arr_30 [i_8] [i_9] [i_9 + 2] = 1023;
                var_23 = ((-((~(8 & -24927047)))));
                var_24 = var_11;
            }
        }
    }
    var_25 &= -115;
    var_26 = (((min((min(484072129, -118)), (min(24927062, -32065)))) != var_6));
    var_27 = ((var_7 ? (((((15872 ? 10200 : 1026))) ? var_6 : var_3)) : (((!212) >> (min(0, 24927011))))));
    #pragma endscop
}
