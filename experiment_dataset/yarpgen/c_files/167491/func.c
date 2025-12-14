/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167491
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
    var_13 = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_5)))))) & (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                var_15 ^= (~(((((/* implicit */_Bool) (short)30720)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (268369920U))) : ((~(4026597398U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_11))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))))) + ((~((-(((/* implicit */int) var_2)))))))))));
}
