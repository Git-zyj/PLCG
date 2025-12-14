/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171404
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
    var_15 = var_11;
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551606ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2ULL))))))) : (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) max((var_7), (arr_0 [16ULL] [i_0]))));
        arr_2 [19ULL] [(unsigned char)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    }
}
