/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116959
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
    var_19 = ((/* implicit */unsigned char) max((((unsigned short) min((((/* implicit */unsigned char) (signed char)96)), ((unsigned char)132)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)21)), ((unsigned char)206))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) -187206804)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)66))))), (((long long int) (signed char)15)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_11)) - (17750)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_21 = ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((8804725116619444224LL) / (arr_9 [i_0] [2LL] [i_2] [i_1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 187206802)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_0 [i_2] [i_3]))))))) : (((/* implicit */long long int) ((((arr_2 [i_0] [i_0] [i_3]) & (((/* implicit */int) (unsigned char)206)))) % (1240160729)))));
                        var_22 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)45882)) : (((/* implicit */int) (unsigned char)12)))))) - (max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_6 [i_1] [(short)4] [i_2])) : (((/* implicit */int) var_0)))), (15288776)))));
                        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-187206803)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (13484180805150250039ULL))))));
                    }
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) -187206804))))) == (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)57595)))))) ? (max((((/* implicit */int) max((((/* implicit */signed char) var_17)), (arr_6 [i_1] [(short)7] [i_1])))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])))))) : (((((arr_2 [i_0] [i_0] [i_0]) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (6401515947326353115LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (short i_5 = 2; i_5 < 8; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */short) arr_14 [i_5] [i_4] [i_1]);
                                arr_19 [i_4] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2])) ? (arr_14 [i_0] [i_1] [i_2]) : (arr_14 [i_1] [i_2] [i_1])))) ? (max((arr_14 [i_5 + 1] [i_4] [i_1]), (((/* implicit */unsigned int) var_4)))) : ((~(arr_14 [i_4] [i_2] [i_0])))));
                                var_25 *= ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (signed char)96)), (((unsigned long long int) var_6)))) | (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)22)))))))));
}
