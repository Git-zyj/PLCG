/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119972
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
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((short) -1207650094)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_18)) ? (arr_3 [(signed char)12]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 2])))))));
            var_21 *= ((/* implicit */unsigned char) var_10);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)37788)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)37788)) == ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37788)))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_0] [8] [i_3] [i_0] = ((/* implicit */unsigned char) (-(2147483647)));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(signed char)4] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((((((/* implicit */int) (signed char)87)) < (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)0] [i_2])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)27748))))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) -1501866680)) : (17899403691794343040ULL)))));
                var_24 = ((/* implicit */unsigned char) var_10);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [(short)6])))) ? (((((/* implicit */_Bool) (signed char)121)) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)244)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)121)))))))))))));
                    var_26 = ((/* implicit */_Bool) (signed char)91);
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_3))))) : (((/* implicit */int) arr_12 [i_0] [i_2 + 1] [i_3] [i_4] [i_4]))))) ? (((/* implicit */int) ((short) 2010452163))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) arr_1 [i_0] [i_2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_4 [i_2 + 1] [2]))))))));
                }
            }
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((_Bool) var_15)));
            arr_16 [i_0] [i_0] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((arr_5 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)27))))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2 + 2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2 + 1] [i_2]))))));
            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [(short)0] [i_2] [i_0] [i_2 + 2])) + ((~(-2010452172)))));
        }
        var_29 ^= ((/* implicit */_Bool) var_16);
        var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_5 [8])) ? (((/* implicit */int) arr_14 [(signed char)2] [i_0] [i_0] [i_0] [(signed char)2])) : (var_16))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [i_0] [(_Bool)1]))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_31 &= ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */int) (((-(((/* implicit */int) arr_7 [i_0] [i_5] [4U] [i_7])))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))) : (((/* implicit */int) (signed char)-74))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_3 [i_6]))));
                        var_33 = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_34 = min((((/* implicit */unsigned long long int) var_2)), (((((1238292906U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-30984))))) ? (((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */unsigned long long int) -533807262)) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
        var_35 = ((/* implicit */_Bool) min((var_35), (((max((((((/* implicit */int) (unsigned short)20501)) + (((/* implicit */int) (signed char)0)))), (((/* implicit */int) var_6)))) != (arr_25 [i_8])))));
        arr_28 [i_8] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((int) 29360128)) < (((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_2))));
        var_37 = ((/* implicit */_Bool) var_11);
    }
    var_38 *= ((/* implicit */signed char) ((((/* implicit */int) (short)-58)) > (var_16)));
    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((long long int) ((signed char) (short)20951)))));
    /* LoopSeq 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [(signed char)6])))) ? (((/* implicit */int) arr_17 [i_10] [(_Bool)1])) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((var_14) > (((/* implicit */int) ((signed char) var_13)))))) : (((((/* implicit */_Bool) (-(arr_18 [(unsigned char)8])))) ? (((/* implicit */int) ((arr_0 [(_Bool)1] [i_10]) != (((/* implicit */unsigned int) var_18))))) : (((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10])) ? (831247391) : (((/* implicit */int) var_8))))))));
        arr_36 [i_10] = ((/* implicit */_Bool) (unsigned char)235);
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        arr_41 [i_11] [13] = ((/* implicit */unsigned char) var_2);
        var_40 += ((/* implicit */unsigned char) (~(arr_27 [i_11])));
        arr_42 [i_11] = ((/* implicit */_Bool) var_7);
        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_10) - (230141897)))))) ? (((((/* implicit */int) (signed char)-82)) * (((/* implicit */int) arr_7 [i_11] [i_11] [i_11] [i_11])))) : (((/* implicit */int) var_5))));
        arr_43 [i_11] [i_11] = ((((/* implicit */_Bool) arr_26 [2] [i_11])) ? (var_10) : (((((/* implicit */_Bool) arr_29 [i_11])) ? (var_14) : (((/* implicit */int) var_9)))));
    }
}
