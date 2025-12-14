/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106130
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (4294967295U)));
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)123))))) ? ((-(((/* implicit */int) arr_4 [(unsigned char)20] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)28398)) ? (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_4 [18LL] [i_1]))))));
                var_18 = var_7;
                arr_6 [(unsigned short)14] |= ((/* implicit */signed char) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))), (-7371796188719002620LL)))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_6)))));
}
