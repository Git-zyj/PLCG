/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162347
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5343)) / (((/* implicit */int) var_10))))))))));
                                var_19 = var_16;
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8877)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_4]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)248))) - (arr_11 [i_4] [(unsigned short)8] [i_2 - 3] [(unsigned short)8] [i_2] [i_2])))))))))));
                                var_21 += ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_17)), (arr_5 [i_2 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - ((~(((548611435U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)248))) >= (arr_11 [(short)12] [(short)12] [i_1] [i_1] [i_1] [i_2])))) & (((/* implicit */int) (unsigned short)4894))));
                    arr_15 [i_0] [i_1] [i_2 - 2] = ((/* implicit */short) ((long long int) (unsigned short)2));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (short)30721);
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)99))));
    var_25 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 549755813887ULL)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) var_13)))) ? (var_15) : (((/* implicit */unsigned long long int) 66341541))));
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~((((+(var_0))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)153)) + (((/* implicit */int) var_2))))))))))));
}
