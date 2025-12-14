/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166035
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
    var_11 = ((((((/* implicit */_Bool) (short)18345)) ? (8338969733866477945ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) % (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1070087916)));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (short)-23765)), (((unsigned int) 375966083U))))));
            arr_7 [i_1] [i_1] [(_Bool)1] = ((unsigned char) (short)24274);
        }
        for (short i_2 = 4; i_2 < 24; i_2 += 1) 
        {
            var_14 *= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)42586))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) 2420868705U)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)6634))))));
                        var_15 = ((/* implicit */_Bool) (~(1070087916)));
                        var_16 = ((((((/* implicit */int) (short)-8810)) + (2147483647))) << (((var_9) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 - 1] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2 - 3] [i_2] [i_3 + 1])))));
                        arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (((_Bool)1) ? ((-(((/* implicit */int) (unsigned short)30728)))) : (((arr_11 [i_2]) ? (arr_8 [i_0] [i_2 - 2] [i_4]) : (((/* implicit */int) (unsigned short)20071))))))) : (((((/* implicit */_Bool) min(((unsigned short)65409), (arr_14 [(unsigned short)14] [(signed char)6] [(short)22] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (min((((/* implicit */unsigned int) var_10)), (var_2)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) arr_8 [i_0] [(short)16] [i_0])))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((int) -4723850932935607874LL))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_5])) == (((/* implicit */int) (unsigned short)15003))))))))));
            arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) min((arr_12 [i_0] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_10))) : (((/* implicit */int) (unsigned short)63506))));
        }
        for (int i_6 = 2; i_6 < 24; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -1521697443)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) arr_11 [i_6])))));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((var_5) ? ((+(((/* implicit */int) (short)12582)))) : (var_10))) | (1169915466))))));
            arr_26 [i_0] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)65530)), ((-(((/* implicit */int) arr_18 [i_0] [i_0]))))));
            var_20 = ((/* implicit */unsigned short) ((18323097805235804671ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
        }
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    var_21 += ((/* implicit */signed char) min((max((arr_9 [i_8 - 1]), (var_10))), (((((/* implicit */int) arr_19 [i_7] [i_8 - 1])) * (((/* implicit */int) arr_19 [i_7] [i_8 + 1]))))));
                    arr_33 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((~(2147483647))), (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_8])) || (((/* implicit */_Bool) 1099478073344ULL))))), ((((_Bool)1) ? (12109082619533030054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                    var_22 = ((/* implicit */_Bool) max((((/* implicit */int) arr_30 [i_7])), ((~(1141811920)))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_7] [i_7] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned long long int) (unsigned short)45442);
                                var_23 += ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2439531962U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_7] [i_8]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32746))) + (1479236767U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_39 [(unsigned short)8] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) (-(18446742974231478270ULL)))) ? (((/* implicit */int) (unsigned short)45442)) : (((/* implicit */int) arr_18 [i_7] [i_7]))))));
    }
    var_24 = ((/* implicit */int) var_1);
}
