/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178449
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
    var_11 = ((/* implicit */int) var_2);
    var_12 = ((/* implicit */long long int) ((unsigned short) var_7));
    var_13 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 += ((/* implicit */int) (((~(((((/* implicit */long long int) arr_0 [0])) ^ (var_5))))) % (min((((/* implicit */long long int) var_7)), (arr_1 [i_0] [i_0])))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((max((((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)64512)) - (64512))))), (var_6))), (var_8))))));
    }
    for (unsigned int i_1 = 1; i_1 < 6; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_3))))) ^ (var_1)));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((((/* implicit */long long int) 1551503968)), (-730402269538657911LL))) : (((/* implicit */long long int) ((arr_3 [i_1 + 1]) / (arr_2 [i_1 + 4]))))));
    }
}
