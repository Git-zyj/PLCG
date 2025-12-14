/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107772
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))), (arr_8 [i_0] [i_1] [16LL]))))));
                    var_14 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 0LL))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (~(var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (0LL)))))));
}
