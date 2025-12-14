/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130789
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
    var_10 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_7))))))));
    var_11 = ((var_2) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_7), (var_7)))) : (((/* implicit */int) ((short) var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((549755813887LL) / (((/* implicit */long long int) arr_0 [i_1 + 2] [i_1 + 2])))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])))))))))));
                arr_7 [i_0] [3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31692)) % (((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
