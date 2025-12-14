/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16885
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
    var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) & (min((((/* implicit */long long int) var_0)), (var_14)))))), (11612158545499325427ULL));
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4953125230192523088LL)))) ? (((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((arr_7 [(_Bool)1] [(unsigned short)2] [i_1] [i_1] [(unsigned short)2] [(unsigned short)2]), (((/* implicit */long long int) ((unsigned short) var_16)))));
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_2] [i_3 + 1]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)120)) <= (((/* implicit */int) arr_5 [i_3])))))))) ? (max((var_10), (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)-120))))))) : (((((((/* implicit */int) (signed char)-118)) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (var_0)))) - (17942)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-127)))) | (max((((/* implicit */unsigned long long int) var_1)), (arr_9 [i_1] [(_Bool)1] [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_0);
    var_23 = ((/* implicit */long long int) min((((short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_3)))), (var_7)));
}
