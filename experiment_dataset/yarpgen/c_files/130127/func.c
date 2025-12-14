/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130127
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (5674438306159766812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */short) var_14))))))))) ? ((~((-(((/* implicit */int) (short)-4569)))))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) ((-1049998987) != (((/* implicit */int) (signed char)37))))) & (((((/* implicit */int) arr_0 [i_1] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)19))) < (((/* implicit */int) var_15))))));
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)19))))) ? (((/* implicit */int) (short)18295)) : ((+(min((((/* implicit */int) (signed char)62)), (-62467476)))))));
            }
        } 
    } 
}
