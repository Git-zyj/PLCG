/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148251
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = var_13;
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_0));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_5 [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) 2136782380775839843LL)) ? (1090259713677341376ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    var_17 = ((/* implicit */_Bool) ((unsigned char) 3055223588293573985ULL));
    var_18 = var_4;
}
