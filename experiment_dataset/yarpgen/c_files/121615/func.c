/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121615
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
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 3] [(short)16] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5944)) ? (-3050750737957313493LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10705)))))) && (((/* implicit */_Bool) var_10))));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                arr_6 [i_0] [i_0 - 2] [17] = ((/* implicit */short) ((278656838U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5944)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_5);
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_5))))), (((long long int) var_15))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_9)))))))));
}
