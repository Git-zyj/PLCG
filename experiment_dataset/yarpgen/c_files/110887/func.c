/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110887
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
    var_11 = ((unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))), (var_1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        arr_9 [i_3 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)58086)) ? (((/* implicit */int) (unsigned short)58102)) : (((/* implicit */int) (unsigned short)16383)))) : ((+(((/* implicit */int) (short)4095)))))) >> ((((-((-(((/* implicit */int) var_7)))))) - (7639)))));
                        arr_10 [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)6264), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) ((short) var_4)))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 93410745U)) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_2] [i_3] [i_4])) : (var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)125))))))))));
                            var_13 |= ((/* implicit */signed char) ((((/* implicit */int) ((short) (~(var_1))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26663)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_1])))) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_2])) : (((/* implicit */int) (short)3032))))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned int) var_8);
                            var_14 -= ((/* implicit */short) (unsigned short)35869);
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_16 [i_5] [i_5] [i_3 - 2] [i_3 - 2] [(unsigned short)8] [i_3 + 2])))))));
                        }
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_19 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
                            var_18 -= ((/* implicit */short) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_18 [(short)2] [i_2] [i_3 + 1] [i_2])) ? (((/* implicit */int) (unsigned short)7427)) : (((/* implicit */int) arr_6 [i_1] [i_3] [i_3 + 1] [i_0]))))));
                            var_19 = ((/* implicit */_Bool) (-(((arr_12 [i_2]) ? (((/* implicit */int) (short)-3222)) : (((/* implicit */int) arr_12 [i_2]))))));
                        }
                        arr_20 [i_1] [i_1] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_1 [i_2] [i_3])) : (arr_4 [(unsigned short)7])))))));
                        arr_21 [i_0] [(short)18] [i_0] |= ((/* implicit */short) var_10);
                    }
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 2) 
                    {
                        var_20 -= ((/* implicit */short) var_3);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
                        {
                            arr_29 [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_8 + 1] [(_Bool)1] [i_2])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-30666)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)))));
                            var_21 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17074))))))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(var_3)))))));
                            arr_30 [i_0] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */short) min(((~(arr_16 [(signed char)1] [(unsigned short)11] [(signed char)1] [i_8 + 1] [i_7 + 2] [i_7 + 2]))), (((/* implicit */unsigned long long int) ((short) 12115995914820764484ULL)))));
                        }
                        arr_31 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_2);
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((arr_34 [i_10 + 3]) * (arr_34 [i_10 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49130))) <= (arr_34 [i_10 + 1])))))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62310)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_1] [i_2] [i_1] [i_10 + 1]))) % (arr_8 [i_10 - 1] [i_2] [i_0] [i_2] [i_0])))) ? (arr_23 [i_0] [i_1] [i_1] [i_1] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : ((+(var_1)))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(arr_18 [i_0] [i_1] [i_0] [i_10]))), ((+(var_1)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42714))) - (arr_35 [i_0] [i_1] [i_2] [0U] [i_1]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */short) var_9);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_1 [i_1] [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1])))));
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_2)))))))));
                        arr_39 [i_11] [i_11] [i_2] [i_2] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [(unsigned short)8] [i_1] [(_Bool)1] [i_2] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (6330748158888787131ULL)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) 6330748158888787132ULL)))))) ? (min(((+(var_9))), (((/* implicit */unsigned long long int) ((unsigned int) var_4))))) : ((+((-(arr_28 [10U] [10U] [10U] [10U] [10U])))))));
                        var_29 = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_11]);
                    }
                }
            } 
        } 
    } 
}
