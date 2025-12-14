/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138792
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_2))))) | (var_13)))))));
    var_21 = ((((/* implicit */_Bool) (~(max((var_5), (17710399421061221249ULL)))))) ? ((-((~(var_16))))) : (((/* implicit */int) ((((var_4) && (var_14))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)41)), (var_18))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (arr_2 [(unsigned char)2])));
                arr_7 [0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-1132116272) & (-1132116263)))) ? ((~(((/* implicit */int) arr_6 [4LL] [i_1])))) : ((~(((int) arr_5 [4] [4]))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)24430)) & ((~(((((/* implicit */int) var_14)) + (((/* implicit */int) var_11))))))));
            }
        } 
    } 
}
