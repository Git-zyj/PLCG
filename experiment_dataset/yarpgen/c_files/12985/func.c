/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12985
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
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */long long int) max(((-((-(((/* implicit */int) var_16)))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_19 *= ((/* implicit */signed char) ((long long int) arr_3 [i_0] [i_1] [i_2]));
                    arr_6 [i_2] [i_1] [12ULL] [i_0] = ((/* implicit */short) (((~(var_0))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((unsigned char) arr_0 [i_0]));
                                arr_14 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63002)) ? (var_0) : (((/* implicit */unsigned long long int) 0LL)))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((((/* implicit */unsigned long long int) var_1)) <= (17997930715361779562ULL))) ? (((arr_2 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8955))))) : (((/* implicit */unsigned long long int) (-(arr_12 [10LL] [i_1] [i_2] [i_2] [(short)9]))))))));
                                var_21 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63024))) ^ (((((/* implicit */_Bool) (short)-8955)) ? (((/* implicit */unsigned long long int) -1937332339)) : (arr_10 [i_2])))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) var_11))) * (min((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_0] [i_0]))), (17997930715361779562ULL))))))));
                        arr_20 [i_0] [i_0] [3] [i_0] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)24))) ? (arr_15 [i_6] [i_6] [i_5] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_19 [i_0] [i_6] [i_5] [3LL])), (576460750155939840LL)))))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_18 [i_0] [i_6] [i_5] [i_6] [i_5] [i_0]))))) / (((/* implicit */int) max(((unsigned char)196), (arr_18 [i_0] [i_0] [i_5] [i_1] [i_5] [i_5])))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        arr_25 [i_7] [i_5] [i_0] = ((/* implicit */long long int) 17356752721060527395ULL);
                        arr_26 [i_0] [i_5] [i_0] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_19 [i_0] [i_1] [i_5] [i_7])))));
                        arr_27 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 7977276502142609896LL);
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (576460750155939841LL))) <= (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)63002)), (var_3))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_16 [i_0] [i_1])) : (576460750155939840LL)))) ? (arr_19 [i_0] [i_1] [i_5] [i_7]) : (-1663143179))) - (800815362))))))));
                    }
                    arr_28 [i_5] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) ((unsigned short) (signed char)-62))))));
                    arr_29 [i_5] [i_5] [i_5] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [(unsigned char)7] [i_5] [i_5]))) || (((max((448813358347772053ULL), (arr_2 [i_0]))) <= (((/* implicit */unsigned long long int) ((((arr_17 [3] [i_1] [i_0]) + (2147483647))) << (((576460750155939840LL) - (576460750155939840LL))))))))));
                }
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_1 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            arr_35 [i_9] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (-(9223372036854775807LL)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_7)) : (var_0))))), (((/* implicit */unsigned long long int) arr_31 [i_0] [(unsigned char)11] [i_8]))));
                            arr_36 [i_8] [i_1] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */short) (((-((-(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)51987))))))));
                            var_26 = ((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min(((unsigned char)64), (arr_0 [i_0]))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) (short)32764);
            }
        } 
    } 
}
