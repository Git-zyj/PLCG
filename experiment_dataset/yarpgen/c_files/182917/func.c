/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182917
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
    var_11 = max((((/* implicit */unsigned short) ((_Bool) -7710403048695775882LL))), (var_3));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((_Bool) (-(var_4)))))));
                arr_7 [i_1] [7] [i_0 - 1] = (+(((arr_4 [i_1] [i_1] [i_0]) ? (((/* implicit */unsigned int) (((-2147483647 - 1)) | (((/* implicit */int) var_3))))) : (((var_10) ? (1406364798U) : (((/* implicit */unsigned int) arr_3 [(unsigned short)4])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4072))))) ? (((/* implicit */int) ((short) var_10))) : (max((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_3))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((short) var_8)))));
    var_15 = ((/* implicit */short) var_5);
}
