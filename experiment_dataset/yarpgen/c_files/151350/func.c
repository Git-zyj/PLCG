/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151350
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1975855826) : (((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))))), ((!(((/* implicit */_Bool) (-(1538303062U))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(short)19] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) >= (var_17));
                arr_7 [15LL] [i_1] [i_1 - 1] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) arr_0 [i_1 + 3] [i_1 + 2])), ((-(6599624499551409840ULL)))))));
            }
        } 
    } 
}
