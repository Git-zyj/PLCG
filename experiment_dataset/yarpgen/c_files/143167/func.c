/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143167
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((6168477988507634776LL), (((/* implicit */long long int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) (signed char)42)), (-7685788096091137536LL))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((min((1692897708U), (((/* implicit */unsigned int) var_0)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83)))))))))));
                                var_18 = ((/* implicit */int) min(((_Bool)1), (((((6272616013065517544LL) == (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_0]))))) && ((!((_Bool)1)))))));
                                var_19 = ((/* implicit */signed char) arr_2 [i_0] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1482461969U)));
                var_21 |= ((/* implicit */short) min((max((1174367116), (((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned short)17071))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)23493)) ? (((/* implicit */int) (unsigned short)24671)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0])), (var_0))))))) > (var_2))))));
            }
        } 
    } 
}
