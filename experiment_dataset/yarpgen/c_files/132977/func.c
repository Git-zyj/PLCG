/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132977
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [(short)24] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) var_9)) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 3] [(unsigned char)15])) : (((/* implicit */int) var_10))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2380380418U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_9)), (var_10)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26439)))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))) : (1570116036U))) : (arr_10 [i_0] [i_0] [i_1 - 3] [i_2 + 2] [i_1 - 3])))));
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 1] [(unsigned short)6] [i_2])))) >= (min((arr_10 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]), (arr_10 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2])))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(unsigned char)17] [i_1] [i_1] [12U])) ? (((((/* implicit */int) arr_7 [i_1] [i_1 + 2] [1])) & (((/* implicit */int) arr_7 [i_1] [i_2 + 1] [i_2])))) : ((+(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2]))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_3))));
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4] [i_1 - 2] [(unsigned char)1])))));
                    }
                    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)19] [i_1] [(unsigned char)19] [i_2 + 3]))) - (arr_4 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [(unsigned char)9] [i_6]));
                                var_23 = ((/* implicit */_Bool) arr_1 [i_2 - 2] [i_1 + 3]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) arr_17 [i_1 - 3] [i_1 - 3] [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (short)-14910))))))) * (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)255))))), (var_0))))))));
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned short) var_9))))), (min((max((((/* implicit */long long int) var_4)), (var_5))), (((/* implicit */long long int) var_9)))))))));
    var_27 = max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) var_1))));
    var_28 ^= ((/* implicit */unsigned char) var_9);
}
