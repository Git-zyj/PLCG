/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13835
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [4U] [i_1] [i_2]))))) >= (((unsigned long long int) (_Bool)1)))) ? (arr_6 [(_Bool)1] [i_1] [i_1]) : (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_4 [13LL] [i_1] [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_18 += ((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((signed char) (((_Bool)1) ? (max((((/* implicit */unsigned int) -914209795)), (4294967294U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248)))))))))));
                }
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_3] [i_1] [i_4 - 1] [i_5] = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_20 = ((/* implicit */int) (_Bool)1);
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) max((-6596559932497765124LL), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_1] [i_4 - 1])))));
                                arr_20 [i_0] [i_1] [i_1] [i_4] [1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_13 [i_4 + 1] [i_4 - 1] [i_1] [i_4 + 1] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (9223372036854775807LL))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)16] [i_1] [(signed char)6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_0] [i_1] [(signed char)4] [(signed char)4] [16LL]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22528)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_0] [i_1] [4]))))))) ? (((((/* implicit */_Bool) arr_17 [i_1 - 1] [(unsigned char)16] [i_4 + 1] [i_4] [i_5] [(unsigned short)0])) ? ((~(1936563659))) : (((((/* implicit */_Bool) (unsigned short)32296)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)6)))))) : (min((((/* implicit */int) var_12)), ((-(((/* implicit */int) (unsigned char)8)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))) - (251)))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_23 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned long long int) (signed char)-47)), (4854624758368237037ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8483)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2305843009146585088ULL)))))));
    var_24 = var_6;
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(var_6))))));
}
