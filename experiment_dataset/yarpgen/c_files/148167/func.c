/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148167
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35751))) : (min((((/* implicit */long long int) (unsigned short)65517)), (-2540337759756260808LL))))))));
    var_16 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19)))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
        var_17 = ((((/* implicit */_Bool) -1)) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) != (2100707061U)))), (1946620052U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -550517794)) ? (min((((/* implicit */int) (unsigned short)65517)), (1821780290))) : (((/* implicit */int) (unsigned short)65533))))));
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_0 [i_0])))));
    }
}
