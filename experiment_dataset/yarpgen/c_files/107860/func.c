/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107860
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
    var_10 *= ((/* implicit */unsigned int) var_8);
    var_11 -= ((/* implicit */unsigned int) (signed char)64);
    var_12 &= ((/* implicit */unsigned char) ((((_Bool) (!(((/* implicit */_Bool) var_7))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (max((108086391056891904ULL), (max((13ULL), (arr_2 [i_0] [(short)0])))))));
        var_14 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [9U] [9U] = 203510573109273659ULL;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) 13ULL);
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (arr_5 [8U])));
    }
}
