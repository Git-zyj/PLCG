/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1578
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) ((short) (unsigned char)0))), ((-(((/* implicit */int) ((unsigned char) arr_5 [i_1]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_5)) / (((((/* implicit */_Bool) (short)3)) ? (1850469578U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))))));
                    var_20 = ((/* implicit */unsigned short) (signed char)-61);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) (-((+(arr_3 [i_0] [i_0])))));
                    var_22 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (((/* implicit */long long int) (+(arr_4 [i_1]))))));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))))))));
                }
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (min((((arr_4 [i_0]) & (arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [(unsigned char)18] [(unsigned char)18])) & (((/* implicit */int) arr_10 [i_0])))))))));
                var_26 *= ((/* implicit */signed char) max((min(((-(((/* implicit */int) (signed char)-52)))), (((var_2) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [20ULL] [i_1] [i_0] [i_0])))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)232)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -13)), (1373988743369051306ULL))))));
                    var_28 = (-(((/* implicit */int) (short)16)));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-105)))), (((/* implicit */int) min((arr_11 [i_0] [i_1] [i_4]), (var_3))))))) - (max((8091365792204684108ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)105)))))))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (signed char)56)) * (((((/* implicit */int) max(((signed char)-43), ((signed char)56)))) / (((/* implicit */int) (signed char)-123))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_1 [i_6 + 3])))))))));
                            var_32 = ((/* implicit */unsigned char) (short)-21511);
                        }
                        for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_14);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) (unsigned short)36999))))) | (((((int) (signed char)92)) / (min((((/* implicit */int) var_6)), (var_14)))))));
                            var_35 = ((/* implicit */short) arr_10 [i_0]);
                            var_36 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)188)), (-2126560196)))), (max((2660285372U), (341490542U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_9 [i_1] [i_1] [i_6] [i_8]), (((/* implicit */short) (signed char)-34))))))))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-117)), (-1481580457)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)92))))) ? (((((/* implicit */unsigned long long int) 2797689884U)) + (1373988743369051295ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1531717704)) ? (var_16) : (-8880794213708552779LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [5U])))));
                            var_39 = ((/* implicit */unsigned int) ((short) var_0));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_40 = ((/* implicit */short) (-((-((+(arr_17 [i_0] [i_1] [i_6] [i_6])))))));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))) * (((((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) (signed char)-61)))) - (arr_25 [i_6 + 2] [i_1])))));
                            var_42 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (max((((/* implicit */unsigned int) 1048575)), (arr_4 [i_6 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5125)))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 19; i_11 += 3) 
                        {
                            var_43 = ((/* implicit */short) ((min((1744537333U), (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))) >= (((/* implicit */unsigned int) -209933667))));
                            var_44 &= ((/* implicit */signed char) 1373988743369051291ULL);
                        }
                        for (signed char i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            var_45 *= ((/* implicit */unsigned char) ((int) arr_34 [i_0]));
                            var_46 = ((/* implicit */signed char) (~(1373988743369051306ULL)));
                        }
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(short)1] [i_1] [(short)1] [i_1] [i_1] [i_1] [(signed char)8]))) & (2753364745U))), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-21511)) + (2147483647))) >> (((1541602556U) - (1541602555U))))))))), (arr_3 [i_0] [i_1])));
                            var_48 = ((/* implicit */unsigned short) arr_27 [14] [i_5]);
                        }
                        var_49 = ((/* implicit */int) ((short) (!(((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_5] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_5] [i_6])))))));
                    }
                    var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((((arr_21 [i_0] [i_0] [i_0] [(short)14] [2U]) + (2147483647))) >> (((arr_2 [i_1]) - (1066219049U))))))))))));
                }
            }
        } 
    } 
    var_51 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11324))))) ^ (((((/* implicit */_Bool) 1541602556U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) % (6U))) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
    var_52 = ((/* implicit */short) var_7);
    var_53 = ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) 2147483647)))) ? (2836143586U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 460370167)) == (var_15))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14)))))));
}
