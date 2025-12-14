/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169581
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(1782097207675035982LL)))))) && (((/* implicit */_Bool) (unsigned short)28387))));
    var_14 = ((/* implicit */unsigned short) min((var_10), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (var_4)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 218890070)) || (((/* implicit */_Bool) 7585964320681764429ULL)))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)49152))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1765772801)))))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)691))) : (6911936644884828570ULL)))));
    }
}
