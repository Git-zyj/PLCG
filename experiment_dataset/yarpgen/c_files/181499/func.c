/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181499
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
    var_11 = ((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))));
    var_12 = ((/* implicit */signed char) (((~((~(((/* implicit */int) var_7)))))) + (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) || (((_Bool) var_2)))))));
    var_13 = ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) (signed char)8))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(short)7] [i_1] [i_0] = ((/* implicit */long long int) (short)-18634);
                var_14 = ((arr_0 [i_0] [i_0 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 733676211)) && (((/* implicit */_Bool) (signed char)11)))))));
                var_15 ^= ((/* implicit */unsigned short) ((unsigned char) (~((~(((/* implicit */int) (unsigned short)29712)))))));
            }
        } 
    } 
}
