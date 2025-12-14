/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156145
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
    var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) : (var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_1])))));
                var_19 ^= ((/* implicit */short) (+(max((((/* implicit */int) min((((/* implicit */short) arr_2 [i_1] [(signed char)12])), (arr_4 [i_0])))), (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32762))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_0])))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_3))))));
}
