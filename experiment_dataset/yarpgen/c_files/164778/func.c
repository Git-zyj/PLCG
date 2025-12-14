/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164778
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
    var_19 = var_7;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43798)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 938663654U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1])))))) : (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((var_18) != (max((((/* implicit */unsigned int) arr_0 [i_0])), (3356303641U)))));
        var_21 |= ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3640516824U)));
        arr_3 [i_0] = ((/* implicit */unsigned short) 13548261348892659274ULL);
    }
}
