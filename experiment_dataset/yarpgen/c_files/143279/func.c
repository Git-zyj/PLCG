/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143279
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) -2147483644))))) : (((/* implicit */int) (_Bool)1)))), (max((1712626444), (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0 + 4] [i_0 + 1] = ((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_1 - 1])) ? ((((-(-4748848694561770786LL))) / (var_15))) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_1 + 2])));
                arr_7 [i_0 + 1] = ((/* implicit */long long int) var_2);
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 + 4] [i_0 + 1])))) : (var_15))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (signed char)107))));
    var_19 = (signed char)125;
    var_20 = ((/* implicit */_Bool) (unsigned short)3);
}
