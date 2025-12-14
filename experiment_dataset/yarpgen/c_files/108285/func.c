/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108285
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)115), (((/* implicit */unsigned char) (signed char)-104))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((int) (signed char)104))))) : (var_11)));
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
        var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) 2147483640)))) ? ((-(var_15))) : (((((/* implicit */_Bool) (unsigned char)167)) ? (var_16) : (2147483647)))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) (+(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) arr_2 [i_2])) : (arr_0 [i_0])));
                    var_24 += ((/* implicit */_Bool) ((int) arr_5 [i_2] [i_2] [i_2 + 2] [i_0]));
                    var_25 = ((/* implicit */signed char) ((unsigned char) (unsigned char)154));
                    var_26 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (arr_0 [i_1]) : (((/* implicit */int) var_10))))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2 - 3] [i_0] [i_2 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775788LL)))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_28 = (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_0) : (((/* implicit */unsigned int) arr_0 [(unsigned short)2])))))));
        arr_9 [i_3] [i_3] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)102)))));
        var_29 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_1))) >= (18446744073709551615ULL)))), ((~(arr_7 [i_3])))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            arr_14 [i_4] [i_4] [(short)14] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)249)), (4309309)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483639)))) : (max((4752988650717126994LL), (((/* implicit */long long int) (unsigned char)167)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_5 - 2]), (arr_8 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)102), ((unsigned char)88))))) : (min((496422435U), (((/* implicit */unsigned int) (unsigned char)167)))))))));
            var_30 *= ((/* implicit */unsigned char) ((unsigned long long int) min((max((((/* implicit */unsigned long long int) var_15)), (10363555719088570667ULL))), (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) var_5)))))));
            arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_4]) ^ (((/* implicit */int) (unsigned short)62932))))) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4])) : ((~(((/* implicit */int) var_8))))));
        }
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) (-(min((arr_18 [i_4]), (arr_18 [i_4])))));
                            var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6 + 2]))) : (var_4)))) ? (min((arr_0 [14]), (arr_0 [(short)14]))) : (((/* implicit */int) ((signed char) arr_2 [i_4])))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_2 [(unsigned char)15]), (arr_4 [i_4] [i_4])))), (min((var_14), (((/* implicit */int) (_Bool)1))))))), (18210440386303434242ULL)));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_36 [i_13] [i_4] [i_4] [i_4] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned int) var_14)) : (671244375U)))) ? (((/* implicit */unsigned long long int) ((long long int) -2124921228))) : ((~(18446744073709551615ULL))))));
                            arr_37 [(unsigned char)11] [i_12] [i_4] [i_4] [i_10] [1] = ((_Bool) arr_7 [i_4]);
                        }
                        /* LoopSeq 2 */
                        for (short i_14 = 2; i_14 < 14; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -2147483639)) ? (arr_30 [i_14] [i_4] [i_4] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_4] [i_4] [i_4] [i_11] [i_12] [i_4]))))))) : ((-(((/* implicit */int) (short)20010))))));
                            arr_42 [i_4] [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-(16ULL)))) || (((/* implicit */_Bool) arr_16 [i_4] [i_11])))));
                            arr_43 [(unsigned char)6] [i_12] [i_4] [i_4] [i_10] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)255)), (17752586924567337757ULL)));
                            arr_44 [i_4] [i_10] [i_11] [6] = ((/* implicit */short) -223028476);
                        }
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_35 *= ((/* implicit */unsigned long long int) ((max((arr_31 [i_4] [i_10] [i_11] [i_15]), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (arr_0 [i_12]))))) >> (((max((max((arr_13 [(unsigned char)0] [i_12] [i_11]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)212)))) - (205)))));
                            arr_47 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) arr_26 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) arr_25 [i_4] [i_4] [(unsigned char)3] [i_11] [i_12] [i_15] [i_15])) : (min((((/* implicit */int) arr_34 [i_4] [i_10] [i_10] [i_12] [i_15])), (arr_29 [i_4] [(short)7] [i_4]))))) : ((-2147483647 - 1))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-4752988650717126994LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154)))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (min((4752988650717126994LL), (((/* implicit */long long int) arr_30 [i_4] [13LL] [i_4] [i_11])))) : (((/* implicit */long long int) arr_28 [i_4] [i_10] [i_10] [i_11])))))));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_4] [7ULL] [i_10] [i_11])), (arr_30 [i_4] [i_4] [i_4] [12ULL])))) ? (arr_28 [i_4] [11] [i_4] [i_4]) : (((((/* implicit */_Bool) arr_19 [i_4] [i_4] [(unsigned char)1])) ? (arr_7 [i_4]) : (536346624))))) : (min((arr_29 [i_4] [i_4] [i_4]), (((/* implicit */int) (unsigned char)60))))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)78)) ? (((int) var_7)) : (((((/* implicit */_Bool) -1409870868)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)29642))))))));
        arr_48 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)15360))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_39 [i_4])) ? (((/* implicit */int) arr_17 [i_4] [(_Bool)1] [(_Bool)1])) : (2147483647)))))) : (((unsigned long long int) arr_1 [i_4] [i_4]))));
    }
    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (4752988650717127018LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42680))))) : (((/* implicit */long long int) var_5))))) ? (var_15) : (((((/* implicit */int) ((short) var_8))) ^ (var_13)))));
}
