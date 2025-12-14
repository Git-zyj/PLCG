/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186917
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) << (((max((((/* implicit */long long int) var_7)), ((~(-8485840291838609177LL))))) - (8485840291838609173LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 4179441209U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [(_Bool)1] [i_0])) != (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))) : (((((/* implicit */unsigned long long int) 2069191678)) - (var_10)))));
                    var_21 = ((/* implicit */unsigned int) max((max(((-(((/* implicit */int) (signed char)113)))), (((/* implicit */int) (signed char)103)))), (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1] [9] [9])) ? ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2 - 1]))))));
                    var_22 |= min((((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)(-32767 - 1))))) | (((/* implicit */int) ((((/* implicit */_Bool) 4179441201U)) && (((/* implicit */_Bool) 4179441209U)))))))), (((115526078U) << (((((unsigned int) -1850304555)) - (2444662738U))))));
                }
            } 
        } 
    } 
}
