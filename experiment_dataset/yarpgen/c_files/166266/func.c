/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166266
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
    var_11 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-32652)), (var_0)))) ? (var_10) : (max((-679782514), (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)167)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_13 = var_4;
    }
}
