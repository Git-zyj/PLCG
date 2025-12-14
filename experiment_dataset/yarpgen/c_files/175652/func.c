/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175652
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)236))))) ? ((-((+(((/* implicit */int) var_2)))))) : (((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) var_10))))));
                var_20 -= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                arr_7 [(_Bool)1] [i_1] &= ((/* implicit */unsigned char) (~(max((((arr_2 [i_0] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))), (arr_2 [i_0] [i_1 - 2])))));
            }
        } 
    } 
    var_21 &= ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) + (((((/* implicit */int) (_Bool)1)) << (((var_1) - (1956715685279924151LL)))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (var_13) : (var_16))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (var_16)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1))))))));
    var_22 -= ((/* implicit */unsigned char) var_15);
    var_23 = var_9;
}
