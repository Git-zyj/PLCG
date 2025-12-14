/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18340
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
    var_20 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min(((short)28902), ((short)22162)));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) var_5);
                    arr_7 [i_0] [i_0] = (-(min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (arr_1 [i_0] [i_1]))), (((((/* implicit */_Bool) 2U)) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-24)), (arr_5 [i_0] [i_0] [i_3])))) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_10 [i_0])))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_0])) : (((/* implicit */int) (short)9009)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (3U)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [17U])) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)206))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_0 [i_4])))))));
                        arr_17 [i_0] [(short)19] [i_0] [i_3] [18U] [i_0] = ((/* implicit */signed char) var_19);
                        var_23 = ((/* implicit */unsigned int) max((var_23), (max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) max((arr_8 [i_3] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_3] [i_4]))))))));
                        arr_18 [i_0] [i_0] [i_3] [(unsigned char)8] = ((/* implicit */unsigned int) (signed char)-33);
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_21 [i_0] [(short)20] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_3] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (58720256U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) && (((/* implicit */_Bool) 3400024070U))))) : (((/* implicit */int) ((short) (signed char)81)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (arr_0 [i_0])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
                        var_26 = arr_8 [i_0] [4U] [4U];
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)32)) * (((/* implicit */int) (unsigned char)104))))), (arr_1 [i_7] [i_1])))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)113)))))) : (((/* implicit */int) min((((/* implicit */short) var_14)), (arr_6 [i_0] [i_0] [i_3] [(unsigned char)22]))))));
                        arr_26 [i_0] [i_0] [i_3] [i_3] &= (+(((((/* implicit */_Bool) var_8)) ? (1631291964U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_3] [i_3] [i_7] [i_7]))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 58720272U)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)103))))) ? (((/* implicit */int) ((short) (signed char)-4))) : (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1] [i_3])))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_3]);
                    }
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)25616))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_31 [i_0])))) ? (((/* implicit */int) (unsigned char)246)) : (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned char)93))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)144))));
                    }
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                    {
                        arr_39 [i_0] = arr_31 [(short)8];
                        var_31 = ((/* implicit */unsigned int) min((var_31), (min((((/* implicit */unsigned int) ((short) (short)-30177))), (arr_31 [i_0])))));
                        var_32 -= (~(((((/* implicit */_Bool) arr_38 [i_1] [(short)8] [i_1] [i_0] [i_0])) ? (arr_38 [i_10] [i_8] [i_8] [i_0] [i_0]) : (arr_33 [i_1] [i_10] [i_1] [i_0] [i_10] [i_0]))));
                        var_33 = ((/* implicit */short) ((((unsigned int) (short)-11335)) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [(signed char)0]), ((unsigned char)121)))))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) ((unsigned char) arr_28 [i_10] [i_1] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1196899303U))))))))));
                    }
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (+(((/* implicit */int) min((arr_28 [i_8] [i_1] [i_0]), (arr_28 [i_0] [i_1] [i_8])))))))));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) arr_34 [i_0]))));
                }
                var_37 = ((short) (short)14093);
            }
        } 
    } 
    var_38 = ((/* implicit */short) min((var_38), (var_11)));
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1196899294U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_13))))))));
    var_40 = ((/* implicit */signed char) ((short) 1035892010U));
}
