/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11402
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_3 [(unsigned short)1] [i_0]))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (~(arr_6 [i_0] [i_2] [7] [i_0])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_4 + 1] [i_4 + 1])) << (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1] [i_4 + 2] [i_4 + 1]))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(3571650460U))))));
                                var_25 = ((/* implicit */short) ((unsigned int) arr_11 [i_2] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4]));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -1746824686))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1699782692U)))) : (var_4)));
                                var_27 &= ((/* implicit */int) ((_Bool) ((signed char) 2703814206686227779ULL)));
                            }
                            var_28 = ((/* implicit */unsigned long long int) min((min((((-3696558752243891926LL) & (((/* implicit */long long int) arr_3 [i_0] [i_0])))), (((/* implicit */long long int) min((-917700287), (509518173)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40865)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) arr_4 [(signed char)18] [(short)2]);
        var_30 = ((/* implicit */unsigned short) ((((_Bool) 247659848)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [16U])) ? (var_10) : (arr_0 [12])))) : (min((((unsigned long long int) (unsigned short)0)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])), (var_9))))))));
        var_31 = ((/* implicit */_Bool) min((min((((signed char) arr_2 [i_5] [i_5])), (((/* implicit */signed char) arr_15 [i_5 + 1])))), (arr_16 [i_5 - 1])));
        var_32 = ((int) 3658730399U);
    }
    for (int i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((723316828U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_6] [i_6] [(short)0]))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_34 = min((((((/* implicit */int) min((arr_8 [i_6 + 3] [i_6] [i_7] [i_7]), (arr_12 [i_7] [i_7] [i_6] [i_6] [(_Bool)1] [i_6 + 3])))) ^ ((~(((/* implicit */int) (unsigned short)4064)))))), (((/* implicit */int) arr_8 [i_6] [i_6] [i_7] [i_7])));
            var_35 = ((/* implicit */int) ((long long int) (((~(arr_18 [i_6]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-3696558752243891932LL) : (((/* implicit */long long int) var_9))))))));
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (_Bool)0))));
            var_37 = ((/* implicit */int) (unsigned short)24658);
        }
        for (int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            var_38 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_6] [i_8] [i_6])) ? (((((/* implicit */_Bool) arr_9 [i_6] [i_8] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_4))) : (((((/* implicit */_Bool) arr_3 [i_6] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_8 - 1]))) : (arr_20 [(signed char)0]))))), (((/* implicit */unsigned int) (signed char)114))));
            var_39 = (+(((/* implicit */int) var_0)));
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_40 = ((/* implicit */long long int) ((unsigned int) arr_4 [i_6] [i_6 + 3]));
                var_41 = ((/* implicit */signed char) -1797842807);
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_19 [i_6 - 1] [i_6 + 2]))));
                var_43 += ((/* implicit */unsigned int) ((var_6) ? (((arr_11 [i_6 + 1] [i_6] [i_10] [i_10] [i_10] [i_10]) * (((/* implicit */long long int) ((/* implicit */int) arr_10 [15U] [9] [i_9] [i_10]))))) : (arr_21 [i_6 + 1])));
                var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (signed char)127))));
            }
            for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                var_45 = var_18;
                /* LoopSeq 4 */
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_29 [i_11 + 1] [i_11 + 1] [i_6 + 3]))) ^ (arr_29 [i_11 + 1] [i_11 + 1] [i_6 + 3])));
                    var_47 = 9804456U;
                    var_48 = (+(arr_30 [i_9] [(_Bool)1]));
                    var_49 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(arr_11 [i_6] [i_9] [i_9] [i_12] [i_9] [i_12])))))) ? ((-((-(((/* implicit */int) (_Bool)1)))))) : (min((arr_24 [i_6] [i_6] [6]), (((/* implicit */int) arr_5 [i_12] [i_6]))))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 3; i_13 < 15; i_13 += 1) 
                    {
                        var_50 = ((/* implicit */short) 4008484408U);
                        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((((/* implicit */_Bool) var_3)) ? (4285162845U) : (3571650448U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -284533452))))))));
                        var_52 |= ((/* implicit */short) min((((signed char) arr_0 [(signed char)20])), (((signed char) min((((/* implicit */unsigned int) arr_0 [10U])), (var_12))))));
                        var_53 &= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)24671));
                        var_54 = ((/* implicit */unsigned int) ((int) ((((3658730399U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) (_Bool)0)) : (var_3))));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((int) (short)-21307))));
                    var_56 += ((/* implicit */short) min((((int) ((signed char) var_16))), (((/* implicit */int) var_7))));
                }
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */int) min(((signed char)-26), ((signed char)-107)));
                    var_58 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_9])) ? (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_6] [i_15]) : (((/* implicit */int) arr_28 [i_9] [i_11] [i_9])))) : (((/* implicit */int) (signed char)104))))), (min((((unsigned int) -21990942)), (((((/* implicit */_Bool) var_10)) ? (4285162855U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                {
                    var_59 = (signed char)67;
                    var_60 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_11 - 1] [i_11 - 1] [i_9] [i_9]))));
                    var_61 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [i_11])) && (((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1])))));
                }
            }
            var_62 = ((/* implicit */unsigned int) ((unsigned long long int) min(((~(2171466256819720700ULL))), (((/* implicit */unsigned long long int) ((int) arr_41 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 1]))))));
            var_63 = max((var_3), (((/* implicit */int) ((signed char) arr_23 [i_6 + 1] [i_6]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                var_64 = ((/* implicit */short) ((_Bool) arr_21 [i_9]));
                /* LoopSeq 1 */
                for (unsigned short i_18 = 4; i_18 < 15; i_18 += 1) 
                {
                    var_65 = ((/* implicit */_Bool) (((-(var_11))) / (((/* implicit */long long int) (~(-2039427899))))));
                    var_66 = (!(((/* implicit */_Bool) arr_2 [i_6 + 3] [i_6 + 3])));
                    var_67 = ((/* implicit */unsigned int) arr_4 [i_6] [16ULL]);
                }
            }
            var_68 = arr_17 [i_6 + 1];
        }
        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            var_69 = ((((((/* implicit */_Bool) var_5)) ? (27207370U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_19] [i_19] [i_6 - 1]))))) & (((/* implicit */unsigned int) arr_30 [i_6] [i_19])));
            var_70 += ((/* implicit */signed char) 27207375U);
            var_71 &= ((/* implicit */int) max((((((/* implicit */_Bool) (+(arr_48 [i_6 + 3] [i_6 + 3])))) || (((/* implicit */_Bool) ((signed char) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) != (arr_35 [i_6 + 1] [i_6 + 3])))));
        }
        var_72 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) arr_53 [i_6] [i_6]))))) ? (((/* implicit */int) arr_8 [i_6] [3LL] [i_6] [i_6])) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 3] [i_6 - 1] [i_6] [i_6]))) : (min((((/* implicit */unsigned int) ((var_3) | (((/* implicit */int) var_18))))), (((unsigned int) arr_31 [3LL] [i_6 + 3] [i_6 + 1] [i_6 + 3]))))));
    }
}
