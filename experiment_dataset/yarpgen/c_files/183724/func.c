/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183724
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
    var_12 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_8)) < (((((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned int) var_7))))) ? (((unsigned long long int) 2147483136U)) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) (signed char)27)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) > (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 2147483136U))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (12234083948688668651ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((signed char) 18107371318270384641ULL))) : (((/* implicit */int) (signed char)127))));
    }
}
