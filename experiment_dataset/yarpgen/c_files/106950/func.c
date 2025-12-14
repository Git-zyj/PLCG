/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106950
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) 814999620)), (4773603035342011041LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_9))))))));
                var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1 - 1])))), (((/* implicit */int) ((unsigned short) arr_3 [i_1 - 2])))));
                arr_5 [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)-30948))) && (arr_1 [i_0] [i_1])))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) var_16)), ((((((-(((/* implicit */int) var_13)))) + (2147483647))) >> (((/* implicit */int) ((signed char) var_13)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) ((long long int) 18446744073709551614ULL))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_13))))))))))));
                        arr_10 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_2] [i_1 + 2] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_3]))))) : (((unsigned int) arr_2 [12U])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))))));
                    }
                    var_22 *= ((/* implicit */short) min((max((((/* implicit */int) var_0)), (var_7))), (max((((/* implicit */int) min(((unsigned short)12), ((unsigned short)19318)))), (1055451034)))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (min((((unsigned int) min((var_16), (var_16)))), (((/* implicit */unsigned int) var_5))))));
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_24 = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34345)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) var_10);
                                var_26 -= ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) ((short) var_1))), (((long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)16] [(unsigned short)16] [i_0])))));
                                var_27 = ((/* implicit */unsigned int) var_2);
                                arr_18 [i_5] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] [i_6 - 1])) | (((/* implicit */int) var_13)))))), (((unsigned int) arr_2 [i_1 + 2]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((7679623046303783927LL) | (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_10)) : (max((var_7), (var_7)))))), (max((((/* implicit */long long int) max((var_1), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))), (min((((/* implicit */long long int) var_15)), (var_8))))))))));
                    var_29 += ((/* implicit */int) ((max((arr_17 [i_0] [(_Bool)1] [i_0] [i_1 + 2] [i_4]), (arr_17 [i_0] [i_0] [i_4] [i_1 + 1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [1U] [i_1 + 2] [i_1]))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_1 - 1] [i_1 - 1] [i_4] [i_4] [i_4] [i_4])))));
                }
                var_30 = ((/* implicit */unsigned int) ((signed char) min((arr_7 [i_0] [i_0] [i_1 - 1]), (min((((/* implicit */unsigned int) arr_3 [i_1])), (var_12))))));
            }
        } 
    } 
    var_31 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (-1282481508856432453LL)))) ? (max((((/* implicit */long long int) var_7)), (var_8))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_17)), (var_12)))))), (((/* implicit */long long int) min((var_12), (max((var_4), (((/* implicit */unsigned int) var_1)))))))));
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((var_0), (var_0))))));
}
