/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120318
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
    var_18 += ((/* implicit */long long int) 911632683U);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_16))))) ? (max((((/* implicit */long long int) var_0)), (var_4))) : (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3] [9LL] [1ULL] [i_1] [i_0] = ((((/* implicit */_Bool) max((arr_9 [i_0] [i_2 + 1] [i_0]), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : ((-(max((var_5), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [0] [(_Bool)1] [i_1] [i_1])))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
                                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_2 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (min((var_2), (var_2)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))));
                var_24 += ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_16)), ((+(((/* implicit */int) var_9))))))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_1] [i_0]), (arr_1 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (6897148344984062191LL)))));
            }
        } 
    } 
}
