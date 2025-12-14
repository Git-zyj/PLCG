/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159701
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
    var_19 = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (var_16))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)245)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) == ((+(((/* implicit */int) (signed char)-114))))))))));
    var_20 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)31705)) : ((+(((/* implicit */int) (unsigned short)64144)))))), (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)114)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_21 -= ((/* implicit */short) (-(((((/* implicit */_Bool) max(((short)13648), (((/* implicit */short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)1504), (((/* implicit */unsigned short) arr_1 [8LL] [i_0])))))) : (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1] [i_0]))))))));
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-1797)))), (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_17)))))))) ? (((/* implicit */int) ((_Bool) (!((_Bool)0))))) : (((/* implicit */int) var_13))))));
                        var_24 *= ((/* implicit */short) (((-(arr_5 [i_2 + 2] [i_2 + 1]))) > (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                        arr_10 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((min((-4488650958931084218LL), (((/* implicit */long long int) var_3)))) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 4] [(_Bool)1] [i_2] [i_2]))))))) | (((((/* implicit */long long int) arr_0 [i_0] [i_3])) | (arr_5 [i_3] [i_1])))));
                    }
                    for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) (-(((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0))))) | (((/* implicit */int) (!((_Bool)1))))))));
                        var_26 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1] [i_0]))))));
                        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [4] [(_Bool)1] [i_2 + 2]))));
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2117310986)) ? (((((/* implicit */_Bool) (short)-10460)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_9 [i_0] [(signed char)5] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned short)12761)) : (697369868))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                        var_29 = (short)10455;
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((-(-444778660))), (((/* implicit */int) ((176532650U) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4462))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13648))) == (2095685345U))))) : (max((-3325183638843856523LL), (((/* implicit */long long int) (short)7936))))))));
                        var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) (+((-(6145685337311484587ULL)))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((int) (((_Bool)1) ? (4050552942U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                            var_33 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-10460)) == (((/* implicit */int) arr_15 [i_0] [i_0] [2U] [(signed char)5] [i_0])))) ? ((((_Bool)0) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [5LL]))))) : (((/* implicit */unsigned long long int) (-(arr_16 [0U] [0U] [i_7] [i_7]))))));
                            arr_23 [i_0] [i_1] = ((/* implicit */_Bool) (+(arr_22 [i_2 + 4] [i_1] [i_2] [i_0] [i_7])));
                        }
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [9LL]))));
                        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 - 1] [i_2 + 4] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [(_Bool)1] [i_2 + 1] [i_2 - 1] [i_6] [i_6]))));
                        var_36 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) <= (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6]))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (short)32763))));
                                arr_29 [i_0] [i_0] [8LL] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((arr_6 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_26 [i_0] [i_1] [(short)4]))))) == (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32749))) : (4050552942U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3013689781U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) ? (arr_11 [i_0] [i_0] [i_2 + 1] [i_8]) : (((/* implicit */int) arr_8 [i_8] [i_1] [i_1] [i_2 + 2])))) : ((+((~(((/* implicit */int) (signed char)105))))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)18643)))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)22128)) && (((/* implicit */_Bool) arr_26 [8U] [i_2] [i_8]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3939140744U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] = var_14;
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */short) ((((/* implicit */long long int) (-2147483647 - 1))) > (((((((/* implicit */unsigned int) 18310239)) == (arr_28 [i_2 - 1] [i_2] [i_2] [i_1] [i_1] [i_1] [i_0]))) ? (((((/* implicit */_Bool) var_18)) ? (arr_9 [i_2] [(_Bool)1] [8U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14549))) > (arr_0 [i_1] [(short)6])))))))));
                    var_40 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)52513)) == (max(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) arr_12 [i_0] [i_0] [(short)7] [i_0]))))));
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned long long int) max((arr_31 [i_10] [i_10]), (((/* implicit */long long int) (-(-567914958))))));
        arr_33 [i_10] = ((/* implicit */signed char) max(((-(var_6))), (((/* implicit */long long int) (short)-18422))));
        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) 8921026874812577613LL))));
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (short)21))), (((51739044U) >> (((349799476U) - (349799455U)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)239)) : (2147483647))))) : (420190124))))));
        arr_34 [i_10] = ((/* implicit */short) ((((arr_31 [i_10] [i_10]) > (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2771)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) : ((-(arr_31 [i_10] [i_10])))));
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
    {
        var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-57))))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_17))))))) : ((-(arr_32 [i_11] [i_11]))));
        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned char) var_6))))))))));
        var_46 -= ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (short)8442)) ? (2082050802991273315LL) : (((/* implicit */long long int) 4050552957U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) : (arr_32 [i_11] [i_11])))))))));
        var_47 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_31 [i_11] [2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) 4294967295U)) : (-8665137848115279114LL)))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            var_48 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [i_13]))));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                arr_45 [i_12] |= ((/* implicit */short) -5862322459648371293LL);
                arr_46 [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_14] [4U])) ? (arr_43 [i_13] [i_12]) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-8797225315609018647LL)))));
                arr_47 [i_12] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) <= ((+(arr_32 [(_Bool)1] [(short)12])))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                {
                    var_49 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2147483646)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        for (short i_18 = 3; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_50 -= ((/* implicit */_Bool) var_1);
                                var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7311)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
