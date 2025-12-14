/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118458
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
    var_20 = var_5;
    var_21 = ((/* implicit */_Bool) var_10);
    var_22 = ((/* implicit */short) (-(var_17)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_3))), (((long long int) arr_1 [i_0])))))));
                var_24 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (short)-29951)), (var_10))) + (((/* implicit */int) max(((unsigned short)49910), (((/* implicit */unsigned short) (short)256))))))))));
                var_25 ^= ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(arr_4 [16ULL] [i_1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-87))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_15)))))));
                arr_7 [9U] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((~(arr_4 [i_1] [i_0]))) : (((/* implicit */int) (signed char)-82))));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) (short)263)) || (((/* implicit */_Bool) var_18)));
}
