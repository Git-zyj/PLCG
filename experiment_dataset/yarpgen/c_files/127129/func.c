/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127129
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
    var_19 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (9297321472115088969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16341))))) | (((((/* implicit */_Bool) (signed char)105)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (signed char)105)) ? (((((/* implicit */_Bool) (short)-27079)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (_Bool)1))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_13))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_9 [i_0 - 1]))))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0]))));
                    var_24 = ((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)82)), ((short)(-32767 - 1))))))));
                    var_25 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_14)))) * (min((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) * (((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                }
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            arr_18 [i_1] [i_4] [i_4] [i_3] [i_1] [i_1] = ((((/* implicit */long long int) ((var_13) ? (((/* implicit */int) (short)(-32767 - 1))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (signed char)-112))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0]))) : (3672984877U)))) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))));
                            var_26 ^= ((/* implicit */short) (-(((/* implicit */int) arr_9 [15]))));
                            arr_19 [i_4 + 1] [i_1] [i_1] [i_4 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)232), (((/* implicit */unsigned char) (_Bool)1))))) ^ (((/* implicit */int) ((_Bool) (signed char)-114)))));
                        }
                        var_27 = ((/* implicit */unsigned int) var_17);
                        arr_20 [i_0] [i_0] [i_1] = (~((~(((/* implicit */int) (unsigned short)25147)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 |= ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)12040))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_29 = ((_Bool) arr_10 [i_0] [i_0 - 1] [i_0 - 1]);
                            arr_28 [i_6] [i_1] [7] [i_1] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_13 [i_6]))) - (((/* implicit */int) (signed char)-114))));
                        }
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) ((((((long long int) (short)-27099)) == (max((2507270770885257868LL), (((/* implicit */long long int) (unsigned char)255)))))) || (((/* implicit */_Bool) arr_25 [i_1] [i_8] [i_0] [i_3 - 1] [i_1] [i_1]))));
                            arr_31 [i_1] [i_6] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_0]))) * ((((_Bool)1) ? (1134340144U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)91)) == (((/* implicit */int) (short)(-32767 - 1)))))) | (((/* implicit */int) ((_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_15), (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) (unsigned short)24306)) : ((((_Bool)0) ? (max((var_3), (((/* implicit */int) arr_16 [i_0] [i_0])))) : ((+(((/* implicit */int) (unsigned char)7))))))));
                            var_33 = ((/* implicit */short) (_Bool)1);
                            var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-5), (((/* implicit */int) (unsigned char)7))))) ? ((((+(((/* implicit */int) (unsigned char)196)))) * (((((/* implicit */int) (unsigned char)7)) - (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_35 = ((/* implicit */unsigned short) var_13);
                    }
                    var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3]))))) == (((unsigned long long int) arr_1 [i_1])))))));
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_29 [i_0] [i_1] [i_1] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_1] [(signed char)0] [i_0 - 1] [i_3])) : (((/* implicit */int) var_13))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)59503)) >= (((/* implicit */int) (short)-14701))))))) : (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_1] [i_3] [i_3])) ? (var_3) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_3] [i_1] [i_0] [i_1]))))));
                }
            }
        } 
    } 
}
