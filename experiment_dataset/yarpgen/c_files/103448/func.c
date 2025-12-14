/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103448
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (min((4294967295U), (((/* implicit */unsigned int) -712487658))))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1125522325U)) ? (2072269179U) : (0U)))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    var_14 = ((((/* implicit */unsigned int) var_6)) * (3169444971U));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((unsigned int) max((arr_3 [i_0]), ((~(1466484109U))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -349830408)) ? (2469450086U) : (2827528841U))))) ? (((unsigned int) arr_5 [i_1] [i_1 - 2] [i_1 + 2])) : (((var_1) | (arr_7 [i_1 + 2] [i_2 - 3] [i_1]))));
                        var_17 -= var_4;
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            var_18 += ((/* implicit */unsigned int) ((int) max((var_4), (65535U))));
                            var_19 = 3169444964U;
                            var_20 -= ((/* implicit */int) ((unsigned int) 15U));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) max((arr_6 [i_1 + 2] [i_3 + 1] [i_4 - 1]), (arr_6 [i_0 - 1] [i_1 + 3] [9])))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (~(1125522325U)))) ? ((-(arr_3 [i_0]))) : (((/* implicit */unsigned int) (~(-1783727709))))))));
                            var_23 *= ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned int) var_3)));
                            var_24 = ((((((/* implicit */_Bool) 1659133912U)) ? (((/* implicit */unsigned int) -712487641)) : (1790701611U))) * (((/* implicit */unsigned int) arr_11 [i_1 + 3] [i_2 - 2] [i_2])));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */int) var_9);
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2528007111U)) || (((/* implicit */_Bool) 4294967286U))))) : (var_6)));
                            var_27 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_1) : (var_1)))) ? (((((/* implicit */_Bool) 3964451700U)) ? (3169444971U) : (var_10))) : (((/* implicit */unsigned int) ((((arr_6 [i_1 + 1] [8U] [i_1 + 1]) + (2147483647))) << (((((var_2) + (1098225483))) - (18))))))));
                            var_28 = ((unsigned int) ((arr_5 [i_1] [i_1 + 1] [i_1]) != (var_1)));
                        }
                        var_29 = ((/* implicit */unsigned int) (-(var_6)));
                        var_30 = max((((/* implicit */unsigned int) var_2)), ((((!(((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) var_2)) : (607189273U))) : (arr_12 [i_1] [i_0 + 1] [7] [5] [i_0] [9U] [i_1]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_31 = ((unsigned int) ((min((((/* implicit */unsigned int) 975154755)), (arr_10 [i_7] [i_1] [i_2 - 2] [11U] [i_1] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -715746928)) < (arr_4 [i_0] [11U])))))));
                        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) 3867304324U))) ? (min((3169444971U), (3169444971U))) : (1125522326U))) > (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (max((arr_2 [6U]), (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((int) arr_3 [5U])))))));
                    }
                    for (unsigned int i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        var_33 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_8 [9U] [i_1 + 2] [9U] [4U]) : (((/* implicit */unsigned int) -672581089))))) || (((/* implicit */_Bool) (~(5U))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) * (var_7)))) ? (((unsigned int) var_0)) : (var_1)))));
                        var_34 += ((unsigned int) ((int) 1281882624U));
                    }
                }
            } 
        } 
    } 
}
