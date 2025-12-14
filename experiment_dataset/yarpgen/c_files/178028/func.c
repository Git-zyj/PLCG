/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178028
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(-7366260234842456560LL))))));
        var_18 = ((/* implicit */int) max((var_18), (1833983727)));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_19 &= ((/* implicit */int) ((unsigned long long int) 991684909));
        arr_5 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (18014398509481983LL) : (9223372036854775807LL)));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 34359738367LL)) ? (((/* implicit */unsigned long long int) 7964885940018758011LL)) : (1152921504606846975ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8048448945009778909ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 134217696)), (var_7))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 17182095072225851050ULL)) && (((/* implicit */_Bool) 2147483627)))))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8048448945009778899ULL)) || (((/* implicit */_Bool) var_16))));
}
