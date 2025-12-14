/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140515
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
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_4)) >> (((722296924) - (722296908)))))));
                    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) < (arr_8 [i_2]))))) ? (((/* implicit */long long int) arr_6 [(_Bool)1] [(_Bool)1])) : (((((arr_5 [i_0 + 2] [i_0] [i_0]) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) 722296924)), (arr_1 [(_Bool)1]))) - (722296924ULL)))))));
                    var_13 = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) >> (((((unsigned long long int) var_2)) - (73ULL))))) >> (((((((var_6) < (((/* implicit */int) var_7)))) ? ((-(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) var_8)))) + (28)))));
    var_15 += ((/* implicit */long long int) var_7);
}
