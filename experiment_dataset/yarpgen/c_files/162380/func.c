/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162380
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
    var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)53803)))), (((((/* implicit */int) var_12)) >= (((/* implicit */int) var_18)))))))));
    var_20 ^= ((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_17)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_14)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = (short)30955;
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_1 - 1]) ? ((-(var_10))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_1]))))) ? ((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1])))) : ((~(((/* implicit */int) (unsigned short)23586))))));
                var_23 |= ((/* implicit */short) arr_0 [i_1]);
                arr_5 [i_1] = ((/* implicit */long long int) ((arr_0 [21]) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 2])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_10);
}
