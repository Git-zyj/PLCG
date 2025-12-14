/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107448
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
    var_12 = var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 891042434))))) ? (((((_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (10ULL))) : ((+(18446744073709551615ULL))))) : (min((((/* implicit */unsigned long long int) (signed char)16)), ((-(0ULL)))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])), (18446744073709551597ULL)))));
                var_15 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_1 [i_0]))) << (((int) (signed char)2))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [(short)2] [i_2] [i_2] [i_3] [i_2] [(unsigned char)0] |= ((min(((+(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))) != (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_8)))) ? (((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)125)))) : (((/* implicit */int) var_0)))));
                                var_16 = ((/* implicit */int) ((signed char) ((long long int) var_8)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
