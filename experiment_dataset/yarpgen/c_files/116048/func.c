/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116048
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((2686809777U) - (((unsigned int) var_5)))))));
    var_14 = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) min((var_1), (((/* implicit */signed char) var_7))))) : ((-(var_5))))), (((/* implicit */int) (((+(var_3))) >= (((/* implicit */int) ((4294967284U) != (var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((min((((/* implicit */int) (signed char)-43)), (-2147483635))) | (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))))))));
        arr_4 [i_0] [14] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) max((arr_0 [i_0]), (((/* implicit */signed char) (_Bool)1))))))));
    }
}
