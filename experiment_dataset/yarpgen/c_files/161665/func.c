/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161665
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
    var_16 = ((/* implicit */int) max((var_16), (((int) ((((/* implicit */int) var_14)) / (((/* implicit */int) ((signed char) var_7))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 -= ((/* implicit */int) min((((/* implicit */unsigned int) (!(arr_1 [i_0])))), (((unsigned int) arr_0 [(short)18]))));
        var_18 &= ((/* implicit */unsigned char) (~(min((arr_0 [(short)12]), (((/* implicit */long long int) var_3))))));
    }
    var_19 += ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) ((unsigned char) 15301107487599358523ULL))));
}
