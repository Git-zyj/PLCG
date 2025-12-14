/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142443
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
    var_10 = ((/* implicit */unsigned short) ((((unsigned long long int) var_7)) | ((+(((unsigned long long int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(arr_0 [i_0]))));
        var_11 = min((17381838515499993698ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)19)) >= (((((/* implicit */_Bool) -1059330442442118417LL)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned char)205))))))));
    }
}
