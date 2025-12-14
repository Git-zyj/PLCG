/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105109
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max(((+(max((arr_2 [i_0]), (((/* implicit */long long int) 3595276541U)))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [14U])), (4233479758U)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (-9036043057538524136LL) : (arr_2 [i_0])))))));
                var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)820)) ? (6953316219612149386LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4060)))))) ? (((arr_3 [i_0 - 1] [i_0 + 3]) % (arr_3 [i_0 + 4] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [4U]) : (((/* implicit */long long int) 2102121520U))))) && (((/* implicit */_Bool) arr_0 [(short)4]))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_2 + 1] [i_1] [i_0] = max((((/* implicit */long long int) (+(699690768U)))), (((long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [17LL] [17LL] [i_2] [i_0 + 1] [i_3])) ? (1754170680U) : (699690766U)))));
                            var_15 = ((/* implicit */short) min((min(((~(arr_2 [i_0]))), ((~(arr_2 [i_0]))))), (arr_2 [i_0])));
                            var_16 = ((/* implicit */long long int) (+((+(699690771U)))));
                            var_17 = ((/* implicit */long long int) min((var_17), (min((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)-22177)) ? (arr_7 [i_2] [i_3]) : (((/* implicit */long long int) 699690776U)))))), (max((((/* implicit */long long int) (short)22192)), ((+(4667739363426080822LL)))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] = 1733599221U;
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) (+(var_11)));
    var_19 = ((/* implicit */short) 3064633206U);
}
