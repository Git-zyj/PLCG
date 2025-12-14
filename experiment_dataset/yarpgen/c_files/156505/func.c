/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156505
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
    var_13 |= var_2;
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((int) var_10)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_10)), (var_5))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 + 2] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (555318842) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */unsigned int) var_8);
}
