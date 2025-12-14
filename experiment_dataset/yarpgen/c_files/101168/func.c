/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101168
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_1 + 2]));
                arr_8 [i_1] = ((/* implicit */short) var_6);
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) var_2)))))));
    var_15 ^= ((/* implicit */unsigned int) -9073005845814482411LL);
}
