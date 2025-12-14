/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127970
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((unsigned int) ((arr_0 [i_0 - 3] [i_0]) ? (((/* implicit */int) arr_1 [(unsigned short)3])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))), (((/* implicit */unsigned int) min((arr_1 [i_0 + 1]), (arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) ((unsigned int) 4757071047051899130ULL))) ? (min((((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0])))), ((~(2467423007U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (6197194037528315443ULL)))))))));
}
