/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12834
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1 + 1] [i_0 - 1] = ((/* implicit */_Bool) 5896963846148959488LL);
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 5896963846148959488LL))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [(short)11] [i_1 - 1] [i_2])))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (_Bool)0))))))), (((((/* implicit */unsigned long long int) var_2)) & (min((((/* implicit */unsigned long long int) (unsigned char)128)), (6933888389414757488ULL)))))));
                                arr_18 [i_0] [i_4] &= ((/* implicit */short) (signed char)7);
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1 - 3])) ? (((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) << (((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((long long int) ((11512855684294794139ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))))) - (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_0 + 1])) >> (((216805699067945682ULL) - (216805699067945666ULL))))))))));
                    arr_19 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) : (var_6))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
}
