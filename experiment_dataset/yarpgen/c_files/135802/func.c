/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135802
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 = (-((+(((/* implicit */int) var_12)))));
                                arr_14 [12] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((var_11), ((unsigned char)8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2093883171))))))) + (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((~(((/* implicit */int) var_4))))));
                                var_17 *= ((((/* implicit */int) min(((unsigned char)255), (var_13)))) / (((/* implicit */int) var_9)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (int i_10 = 3; i_10 < 20; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) + (((/* implicit */int) (unsigned char)31)))))));
                                arr_33 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)25))));
                                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)37))));
                                var_20 -= min(((+(((/* implicit */int) var_11)))), ((+((-(((/* implicit */int) (unsigned char)246)))))));
                                arr_34 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) <= (min(((-2147483647 - 1)), (((/* implicit */int) var_12))))))));
                            arr_42 [i_7] = (~(((((/* implicit */_Bool) 1569751402)) ? (2034999857) : (((/* implicit */int) (unsigned char)242)))));
                            var_22 -= min(((unsigned char)27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 244223771))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 3; i_14 < 18; i_14 += 4) 
    {
        for (int i_15 = 1; i_15 < 18; i_15 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) >= ((+(((/* implicit */int) (unsigned char)156))))));
                            arr_55 [2] [i_14] [15] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) var_9)))) % ((+(((/* implicit */int) (unsigned char)235))))));
                            var_24 = var_12;
                            var_25 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            {
                                arr_63 [i_20] [i_14] [i_18] [i_14] [i_14] = var_12;
                                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)203)) > (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_21 = 0; i_21 < 14; i_21 += 1) 
    {
        for (int i_22 = 0; i_22 < 14; i_22 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 12; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        {
                            var_27 = ((((min((var_0), (var_6))) != (((/* implicit */int) var_13)))) ? (min((((/* implicit */int) (unsigned char)255)), ((-(var_2))))) : ((+((~(((/* implicit */int) var_13)))))));
                            var_28 = ((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)32)), (var_0)))))))));
                            arr_74 [i_21] [i_21] = ((((var_3) < (var_5))) ? (((((/* implicit */int) var_11)) | (var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_10)))));
                            var_29 = var_5;
                            arr_75 [i_24] [i_24] [i_21] [i_21] [i_22] [i_21] = ((/* implicit */unsigned char) min((var_14), ((+(var_1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    for (unsigned char i_26 = 1; i_26 < 12; i_26 += 3) 
                    {
                        {
                            arr_80 [i_21] [i_22] [i_21] [i_21] [i_26] = ((((/* implicit */_Bool) (unsigned char)48)) ? (1007657777) : (-872576822));
                            var_30 += (-(((/* implicit */int) ((var_6) > ((-(((/* implicit */int) var_12))))))));
                            arr_81 [i_26] [(unsigned char)6] [(unsigned char)6] [i_21] [(unsigned char)6] [i_21] &= ((/* implicit */unsigned char) ((((min((min((var_5), (var_2))), (((/* implicit */int) (unsigned char)156)))) + (2147483647))) << (((((var_6) & (((/* implicit */int) (unsigned char)217)))) - (144)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 14; i_27 += 1) 
                {
                    for (int i_28 = 1; i_28 < 11; i_28 += 4) 
                    {
                        {
                            var_31 &= (((+((+(var_1))))) & (126));
                            arr_87 [i_21] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -2003312466)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? ((+(var_14))) : (var_0)))));
                            var_32 = (((+(((/* implicit */int) ((var_1) < (var_14)))))) % ((+(var_8))));
                            var_33 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))), (var_0)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 3) 
    {
        for (unsigned char i_30 = 0; i_30 < 18; i_30 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_31 = 1; i_31 < 17; i_31 += 1) 
                {
                    for (int i_32 = 0; i_32 < 18; i_32 += 4) 
                    {
                        for (int i_33 = 0; i_33 < 18; i_33 += 3) 
                        {
                            {
                                var_34 -= ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != ((+(((/* implicit */int) (unsigned char)213))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                                var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) & (var_7))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)144))))))) ? ((+(var_2))) : (min((var_7), (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_34 = 3; i_34 < 15; i_34 += 1) 
                {
                    for (int i_35 = 0; i_35 < 18; i_35 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */int) var_12);
                            arr_105 [i_29] [8] [i_29] [i_34 + 1] [12] [i_35] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 1835393975))))), (var_6)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_36 = 0; i_36 < 18; i_36 += 3) 
                {
                    for (int i_37 = 0; i_37 < 18; i_37 += 4) 
                    {
                        for (unsigned char i_38 = 0; i_38 < 18; i_38 += 1) 
                        {
                            {
                                var_37 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((2147483520) - (min((133), (2147483647))))))));
                                var_38 = (+((((+(((/* implicit */int) var_12)))) * ((-(((/* implicit */int) (unsigned char)199)))))));
                                arr_115 [i_29] [i_30] [i_38] [i_29] [i_38] = ((/* implicit */unsigned char) (~(min(((~(var_3))), (((/* implicit */int) min((var_9), ((unsigned char)114))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 18; i_39 += 4) 
                {
                    for (unsigned char i_40 = 3; i_40 < 16; i_40 += 3) 
                    {
                        {
                            arr_123 [i_29] [i_29] = ((/* implicit */unsigned char) min((min((var_8), (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_14)) ? (var_8) : (var_6)))));
                            var_39 = min((min(((+(var_7))), (min((1531041994), (((/* implicit */int) var_4)))))), (((((321814589) <= (var_5))) ? ((-(var_0))) : (var_7))));
                            var_40 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((528482304) == (((/* implicit */int) (unsigned char)15))))))), (min((var_7), (((((var_3) + (2147483647))) << (((((var_8) + (1516656672))) - (10)))))))));
                            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)15)))))))));
                            var_42 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_5)) ? (var_14) : (var_2))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
