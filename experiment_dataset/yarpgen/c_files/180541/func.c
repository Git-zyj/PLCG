/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180541
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
    var_20 = (+(((((/* implicit */int) ((signed char) var_11))) / (((/* implicit */int) var_16)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)180)))), (((/* implicit */int) arr_3 [i_0]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_22 -= ((/* implicit */unsigned char) arr_6 [(unsigned short)4]);
                    var_23 -= ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_4) : (var_4))))));
                            var_25 = ((/* implicit */signed char) var_4);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)71)))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0]))) - (5U))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_8 [i_0] [i_0] [i_4] [i_0]))));
                        }
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)54)) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        var_29 -= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) & (var_19)))));
                        var_30 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)194))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_0 [i_1]))));
                    var_32 = ((/* implicit */_Bool) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((unsigned char)71)))) ? (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_0] [i_6]), ((unsigned char)180)))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)62))))))));
                    var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_16)))));
                    var_34 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)113));
                }
                for (short i_7 = 4; i_7 < 19; i_7 += 2) 
                {
                    var_35 -= ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_0] [i_1] [i_7]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)75)), (var_3)))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_18)), ((unsigned char)181)))))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((var_19) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195))))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_8] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_0] [i_1] [i_7] [i_7] [i_8]), (((/* implicit */unsigned short) var_11)))))) : (10497921742673001063ULL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_1 [i_7]), (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9 + 4])))))))));
                            var_40 -= ((/* implicit */unsigned int) arr_5 [i_8] [i_0]);
                            var_41 *= ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_30 [i_9 + 1] [i_8] [i_7 + 1] [i_1] [i_1] [i_1] [i_0])))));
                            var_42 += ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)183))));
                            var_43 = ((((((/* implicit */int) arr_15 [i_0] [i_7 - 3] [i_7 - 4] [i_7] [i_7])) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_0])) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned short)4073))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_24 [i_0] [i_7] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)63)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_44 = max((((/* implicit */unsigned int) max((arr_8 [i_0] [i_7 - 1] [i_0] [i_10]), (arr_8 [i_8] [i_0] [i_0] [i_0])))), (max((max((var_4), (((/* implicit */unsigned int) arr_18 [i_0] [i_8] [i_7] [i_1] [i_0])))), (((/* implicit */unsigned int) arr_4 [i_0])))));
                            var_45 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned char)181))))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)185))))))));
                            var_46 = ((/* implicit */unsigned short) var_17);
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_47 -= ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) (unsigned char)183)) >= (((/* implicit */int) (unsigned char)80))))) << (((((/* implicit */int) ((unsigned char) var_15))) - (144))))), (((/* implicit */int) (((-(((/* implicit */int) arr_36 [i_11] [i_8] [i_7] [i_1] [i_0])))) >= (((/* implicit */int) (unsigned char)188)))))));
                            var_48 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? ((-(((/* implicit */int) (unsigned char)58)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)54)) >= (((/* implicit */int) (unsigned char)157))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (arr_7 [i_7] [i_1] [i_0])))) ? (((/* implicit */int) ((signed char) var_16))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)186))))))));
                            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) arr_36 [i_0] [i_1] [i_7] [i_8] [i_11]))));
                            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        var_51 = ((/* implicit */short) arr_29 [i_7] [i_1] [i_7]);
                        var_52 = ((/* implicit */unsigned long long int) (unsigned char)76);
                        var_53 *= ((/* implicit */unsigned char) var_10);
                        var_54 += ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_7 - 1] [i_12])))));
                        var_55 = ((/* implicit */unsigned short) arr_0 [i_12]);
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 1; i_14 < 18; i_14 += 1) 
                        {
                            var_56 = ((/* implicit */int) (unsigned char)180);
                            var_57 += ((/* implicit */unsigned char) arr_19 [i_0] [i_1] [i_13] [i_13] [i_14] [i_7]);
                            var_58 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)165)))) / (((/* implicit */int) (unsigned char)157))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_59 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)182)) << (((var_9) - (3114059740870767270ULL)))));
                            var_60 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned char)96)))))));
                            var_61 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned char)202)))));
                        }
                        var_62 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) arr_10 [i_0] [i_7] [i_7 - 2] [i_13])) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_7 - 3] [i_13]))));
                        var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)184)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35081))))) : (((/* implicit */int) arr_15 [i_7] [i_7 - 2] [i_7] [i_7 - 4] [i_7 + 1])))))));
                        var_64 -= ((long long int) arr_46 [i_13] [i_0]);
                    }
                    var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) max((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_0])))))), (max((((((/* implicit */_Bool) arr_20 [i_0] [i_7])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_7] [i_7])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) >= (((/* implicit */int) (unsigned char)75))))))))))));
                    var_66 *= ((/* implicit */signed char) var_14);
                }
            }
        } 
    } 
}
