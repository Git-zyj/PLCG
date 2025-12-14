/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148759
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
    var_12 += ((/* implicit */_Bool) var_5);
    var_13 = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) ((signed char) var_2))));
    var_14 ^= ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned long long int) 3424329849U)))));
                    var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 16856099356067829002ULL)) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 3])) : (((/* implicit */int) var_1))))));
                    var_18 *= ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
}
