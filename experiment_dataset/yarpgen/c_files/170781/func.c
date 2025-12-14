/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170781
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((var_7) << (((var_7) - (561969973389401678LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [(signed char)8] [i_3] [i_0] [i_3] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (signed char)82)))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_9))));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7168823729727983020LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (320266347U))) : (((/* implicit */unsigned int) -1935175447))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [4U] [i_2] [i_1] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (var_11))), (((((/* implicit */_Bool) var_10)) ? (7168823729727983020LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)0]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_0))));
    var_17 = ((/* implicit */signed char) var_6);
    var_18 = ((/* implicit */unsigned long long int) var_11);
}
