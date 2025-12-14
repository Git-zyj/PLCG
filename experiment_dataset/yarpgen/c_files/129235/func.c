/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129235
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_0);
        var_20 += ((/* implicit */unsigned char) min((((unsigned short) var_7)), (min((var_1), (((/* implicit */unsigned short) var_18))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (var_9)));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (short)10773))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (+((~((+(((/* implicit */int) var_8))))))));
        arr_9 [i_2] = var_18;
    }
    var_23 = ((/* implicit */unsigned int) var_14);
    var_24 = ((/* implicit */unsigned char) min(((-(var_16))), (((/* implicit */long long int) var_9))));
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((/* implicit */int) var_11)), (min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_6)))))))));
}
