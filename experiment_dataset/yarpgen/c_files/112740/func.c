/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112740
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
    var_17 = (unsigned char)92;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 1459128710U)) || (((/* implicit */_Bool) var_7))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (unsigned char)84)))));
        var_19 = ((/* implicit */unsigned int) arr_2 [11ULL] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_20 = (-(((long long int) var_1)));
        var_21 |= ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_5 [i_1])))))))), (arr_5 [i_1])));
    }
}
