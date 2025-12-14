/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187417
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
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [(unsigned short)9] [i_2] [i_3] [(signed char)0] [i_4] = ((/* implicit */unsigned int) var_18);
                                arr_14 [i_3] [i_2] [(short)6] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)29178)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 2670543918U)) ? (((/* implicit */unsigned long long int) 1624423377U)) : (18133074893634040800ULL))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_1])))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 137438953472LL)) ? (((/* implicit */long long int) min((1624423377U), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (1961812778))))))) : (4715651022704086489LL))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned long long int) var_12);
    var_24 = ((/* implicit */unsigned int) var_19);
}
