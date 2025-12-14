/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172562
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned char)0)))))) + (((/* implicit */int) ((unsigned char) var_10)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((unsigned char) 16606987731627621674ULL);
        arr_2 [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0 - 2]));
    }
    var_16 = ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (10287307823304005519ULL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)251)))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 5620406248905405515ULL)) || (((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)233))))))) : (var_11)));
}
