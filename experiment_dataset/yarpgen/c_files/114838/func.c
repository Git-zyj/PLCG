/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114838
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
    var_12 = ((/* implicit */unsigned short) var_3);
    var_13 = ((/* implicit */_Bool) var_0);
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_6 [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (var_6)));
                    var_16 = ((/* implicit */unsigned int) var_6);
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)37758);
                    arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_0] = ((/* implicit */int) var_10);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) var_4)), (var_7))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
