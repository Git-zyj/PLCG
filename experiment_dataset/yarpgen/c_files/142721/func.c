/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142721
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7)))))) < (((((/* implicit */unsigned long long int) var_16)) | (1324991463646406904ULL)))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_21 = ((/* implicit */unsigned char) var_0);
    var_22 = ((/* implicit */int) (((_Bool)0) ? (1324991463646406904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6))))));
}
