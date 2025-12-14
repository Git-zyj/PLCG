/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115255
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */short) arr_0 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_18 -= ((/* implicit */long long int) min((((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)9973)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55563))))))), (max((((/* implicit */int) max((((/* implicit */short) var_1)), ((short)5062)))), (1360531481)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1]))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) min((var_5), (((/* implicit */unsigned long long int) var_10))))))));
                        arr_17 [i_2] [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1360531480)))) ? ((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_2] [i_1] [i_0]))))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) (((~(arr_3 [i_0]))) < ((~(arr_3 [i_0])))));
                        var_23 = ((/* implicit */unsigned char) (~(((int) arr_16 [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                                var_25 = ((/* implicit */unsigned long long int) ((short) 1656497817622150034LL));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(7183883190069432111ULL)))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15172)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_6] [i_6] [i_6]))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((((arr_15 [i_0] [i_0] [i_2] [i_0 + 2]) / (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_2]) ? (((/* implicit */int) (unsigned short)55593)) : (((/* implicit */int) (unsigned short)58052))))))) | (arr_9 [i_0] [i_0] [i_0] [i_0])));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (short)-23513)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))) : (1114887713))))));
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    var_29 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_8 - 1])), (((unsigned long long int) arr_25 [i_0] [i_1])))) == (((/* implicit */unsigned long long int) (+(0U))))));
                    var_30 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (var_4)))))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_25 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))) ? (((((/* implicit */unsigned long long int) arr_25 [i_0 + 1] [i_1])) + (var_15))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_0] [i_0] [i_8 - 1])))))));
                }
                var_32 = ((/* implicit */short) ((min((((int) var_15)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_1] [i_0]))))))) | (((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0])))));
            }
        } 
    } 
}
