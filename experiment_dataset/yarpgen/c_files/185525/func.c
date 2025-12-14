/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185525
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
    var_13 = ((/* implicit */short) ((unsigned short) ((unsigned short) var_10)));
    var_14 += ((/* implicit */int) var_6);
    var_15 *= ((/* implicit */unsigned char) ((var_5) ? (((((/* implicit */_Bool) var_3)) ? (max((140737486258176LL), (((/* implicit */long long int) -1847364294)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 13132388681653082919ULL)) ? (-116867382) : (((/* implicit */int) (short)4770)))) & (((((/* implicit */int) var_5)) >> (((var_1) - (13172086110693379978ULL))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_0 [i_0 + 1] [i_0 - 1]), (((arr_0 [i_0 + 1] [i_0 - 1]) + (-2060622290)))));
        arr_5 [i_0] = ((/* implicit */long long int) min((-116867382), (((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1]))))));
        var_16 = ((/* implicit */long long int) max((((/* implicit */int) var_8)), (max((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])), (arr_1 [i_0])))));
    }
}
