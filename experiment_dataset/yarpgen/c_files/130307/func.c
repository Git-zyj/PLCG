/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130307
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
    var_10 = ((/* implicit */signed char) max((var_7), (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (var_7)))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3)))) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)128))))))) & (((((/* implicit */_Bool) 1122842065U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_2 [i_0] [i_0]))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)31))))));
        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_2 [i_0] [i_0])) << (((max((((/* implicit */unsigned long long int) (_Bool)1)), (2269814212194729984ULL))) - (2269814212194729972ULL)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_4] [i_2 - 1] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_2 [i_2] [i_2 - 1])) | (arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), ((+(((/* implicit */int) ((((/* implicit */int) (signed char)54)) != (((/* implicit */int) (signed char)87)))))))));
                                var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_2] [i_2 - 2] [9LL])))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2 - 1]))) : (((/* implicit */int) ((-388471857) != (((/* implicit */int) (_Bool)1)))))));
                                var_16 = max((((((/* implicit */_Bool) ((unsigned short) 9223372036854775792LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_15 [(unsigned char)1] [i_2] [i_3] [i_4] [i_5]))), (((/* implicit */unsigned long long int) ((633332215) | ((~(-494168884)))))));
                                arr_17 [10] [10] [i_3] [i_4] [(unsigned short)5] = ((/* implicit */unsigned char) ((((arr_3 [i_1]) + (2147483647))) << ((((((+(var_0))) + (1666138895))) - (11)))));
                            }
                        } 
                    } 
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= ((+(((/* implicit */int) max((arr_12 [i_1 + 1]), (((/* implicit */signed char) var_8)))))))));
                }
            } 
        } 
    } 
}
