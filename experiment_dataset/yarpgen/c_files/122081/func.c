/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122081
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
    var_15 &= ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((short) var_14))), (var_7))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_2 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))))))) : (((((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_2] [i_0]) - (var_1)))) ? (((unsigned long long int) var_7)) : (arr_5 [i_0] [i_1] [i_2] [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1ULL)) ? (18446744073709551614ULL) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((unsigned int) var_9)))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_1 + 2])) * (((/* implicit */int) arr_3 [i_1 + 1] [21LL] [i_1 + 1]))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+((+((-(var_13)))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_1] [i_2] [i_0] [i_0]))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_2]))))) ? (max((var_1), (((/* implicit */unsigned long long int) ((long long int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_4])))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2] [(_Bool)0]), (arr_0 [i_3])))))))));
                            }
                        } 
                    } 
                    var_19 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((short) var_5))))) : (((long long int) min((((/* implicit */unsigned int) var_9)), (var_10)))));
                }
            } 
        } 
    } 
}
