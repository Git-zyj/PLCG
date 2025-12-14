/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162428
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1 - 1] = ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) * (((long long int) var_9))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) 4294967295U)), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)17] [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)239))))) ? ((~(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (max((arr_2 [i_1 + 1]), (max((arr_2 [i_0]), (((/* implicit */long long int) (signed char)-82))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 + 4] [i_0])) ? (arr_9 [i_2] [i_1 + 1] [i_1 - 1]) : (((/* implicit */int) (_Bool)0))))) ? ((((_Bool)1) ? (arr_9 [i_3] [i_1 + 3] [i_0]) : (arr_9 [i_1] [i_1 + 4] [i_0]))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_1 + 2] [i_1 - 1])) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_0]) : (arr_9 [i_1] [i_1 + 3] [i_0])))));
                            var_13 *= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((var_9) ? (arr_12 [i_2] [9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [18] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)16)))))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)19586)) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_3 [i_0])))))) : (max((((/* implicit */long long int) arr_3 [(unsigned char)4])), (arr_2 [i_0])))))) ? (max((((/* implicit */unsigned int) max((519527071), (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))), (1291626947U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3672516540482372584LL))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1 + 2] [i_1 + 4])))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)239)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967288U))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(0)))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))), (((var_0) / (((/* implicit */int) var_10)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 3033370772U)))))))));
}
