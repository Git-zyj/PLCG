/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113321
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) (_Bool)1))))) | (var_8)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((long long int) -2204964089790055677LL)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_6)) - (10072))))))))));
                arr_9 [2] [i_1] &= ((/* implicit */unsigned char) arr_4 [(signed char)12] [(unsigned char)4]);
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63305))) : (7564419027796647372LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_1 [i_0]))))))))));
                    arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((9223372036854775795LL) < (((/* implicit */long long int) arr_10 [i_0 - 1] [i_2 - 2] [(unsigned char)1]))))) >= ((+(((/* implicit */int) arr_3 [(unsigned short)7] [i_0]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) (+(((arr_18 [i_0] [i_1] [i_4 + 1] [i_1]) / (arr_18 [i_0] [i_1] [i_4 + 1] [i_4])))));
                                var_10 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_1])) & (min((((/* implicit */int) var_4)), (arr_14 [i_1] [i_1])))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_26 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)90)) + (((/* implicit */int) var_6))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_6))));
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_13 = arr_17 [i_0] [i_1] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(signed char)10] [i_7] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (arr_11 [i_0] [i_0 - 1] [i_7])))) ? ((((!(((/* implicit */_Bool) 6471429443602127946LL)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_5 [i_0] [i_9])))))) : (((/* implicit */int) var_7))));
                                var_15 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_6 [i_0 - 1])), (arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_8]))) | (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [(signed char)5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_2)))))));
                                arr_37 [i_1] [i_1] [(_Bool)1] [i_8] [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_16 [i_1] [i_1] [i_7] [i_0 - 1])))) ? (((/* implicit */int) ((arr_4 [i_0 - 1] [i_1]) <= (arr_4 [i_0 - 1] [i_1])))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1])) || ((_Bool)1)))) - ((+(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */long long int) var_9);
}
