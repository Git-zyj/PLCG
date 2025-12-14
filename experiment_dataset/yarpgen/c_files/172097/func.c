/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172097
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 -= ((/* implicit */signed char) var_0);
                var_11 = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_6 [i_0] [14LL] [14LL] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)17599))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_3] [(signed char)2]))))) | (-5372792592566784LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)17611))) / (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) (short)17610))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) 3067216881U)) ? (var_6) : (var_8)))))));
                                arr_12 [(_Bool)1] [i_3] [(unsigned char)3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-93)))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (short)-17612)) : (((/* implicit */int) (signed char)9)))) : (((((/* implicit */int) (unsigned char)67)) << (0U)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) 4294967295U);
                    var_15 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_5)))) + (((/* implicit */int) var_9))));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)1995)) ? (var_7) : ((~(1591018176U))))));
                    var_17 = ((/* implicit */unsigned short) var_9);
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (var_8) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)91))))))) ? (var_0) : (var_6))))));
                    var_19 &= ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) -2585966588610192355LL)) ? (((/* implicit */long long int) -2147483647)) : (arr_1 [i_0]))) + (9223372036854775807LL))) >> (((var_7) - (3411108576U)))))) ? (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)17599))))) : (((/* implicit */unsigned int) var_3)));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_1] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_1] [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_6])))))));
                    arr_17 [i_0] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_6])))) - ((~(((/* implicit */int) var_9))))));
                }
                arr_18 [(unsigned char)19] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1762706991U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (0LL)))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) arr_11 [i_1] [8U] [8U] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_2)))))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 2875934731U)) : (-3761101231713149311LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((unsigned char) (-(min((555567551), (var_3))))));
}
