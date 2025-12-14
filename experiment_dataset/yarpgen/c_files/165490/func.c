/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165490
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
    var_16 = ((/* implicit */unsigned int) min(((!(((var_0) && (((/* implicit */_Bool) var_14)))))), ((!(((/* implicit */_Bool) (signed char)94))))));
    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) | (4440811388927906991ULL)))) ? (var_15) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(signed char)9] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) (+(14005932684781644624ULL)));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) var_8);
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    var_20 = ((_Bool) (unsigned short)26122);
}
