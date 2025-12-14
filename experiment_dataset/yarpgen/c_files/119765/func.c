/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119765
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)-29)) % (((/* implicit */int) (unsigned short)37104))));
                        var_20 ^= ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)28409)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_11)))) != (max((((/* implicit */int) (short)13816)), (1263708125)))))) == (((/* implicit */int) (!(((((/* implicit */int) (short)-1166)) < (((/* implicit */int) var_12))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_7 [i_1 - 1] [2] [2] [i_0 + 1]))) == (((((/* implicit */int) (unsigned char)225)) / (((/* implicit */int) (short)32761)))))))));
                        var_22 *= ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [(short)12]);
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((6166413484181521278LL) - (((/* implicit */long long int) ((unsigned int) arr_0 [(signed char)10])))))) ? (((/* implicit */int) arr_11 [(_Bool)0] [i_3])) : (((/* implicit */int) var_8))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(arr_10 [i_0] [i_1 - 2] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0 + 1] [i_0 - 1]) : (arr_5 [i_0] [i_0 - 1])))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) (_Bool)1)))))));
                        var_25 += ((/* implicit */unsigned int) ((unsigned char) ((var_16) <= (((/* implicit */unsigned long long int) 8217787692937459224LL)))));
                        var_26 = ((/* implicit */unsigned short) (unsigned char)160);
                    }
                    for (short i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [8LL] [i_5 + 1] [i_5])) ? (((/* implicit */int) ((short) arr_10 [i_0 + 1] [i_0 - 1] [i_1 + 1] [(signed char)4]))) : (((/* implicit */int) arr_11 [(unsigned short)0] [(unsigned short)0]))));
                        var_28 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-30)), (((unsigned short) arr_6 [i_2] [i_2]))));
                        arr_18 [i_0] = ((/* implicit */unsigned char) min((arr_11 [i_0] [i_1 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 - 3])))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) (unsigned char)202))));
                        var_30 = ((/* implicit */unsigned char) (((((_Bool)1) ? (252379829195265936LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_31 -= ((/* implicit */signed char) min((((int) var_11)), (((((/* implicit */_Bool) 17353955644782334312ULL)) ? (((/* implicit */int) (unsigned short)57982)) : (((/* implicit */int) var_0))))));
                        var_32 = ((/* implicit */unsigned short) arr_4 [i_1 - 3] [i_0 - 1] [i_0]);
                        var_33 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) 469762048)))) ? (arr_9 [i_7] [i_2] [i_0 + 1]) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) < (((/* implicit */int) arr_2 [i_0])))))));
                        arr_25 [i_0 - 1] [i_1 - 1] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1 - 1] [i_0] [i_7]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)58214)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (short)-32761))))));
                                arr_30 [i_0 - 1] [3ULL] [i_0] [i_0] [i_9 - 2] = ((/* implicit */short) (~(arr_17 [i_0] [i_0] [i_0] [i_8] [i_9])));
                                var_35 = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                    arr_31 [i_0] = arr_20 [(_Bool)1] [i_0] [i_0] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_8))));
}
