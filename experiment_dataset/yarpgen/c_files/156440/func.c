/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156440
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
    var_10 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1428420241U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2866547055U)) <= ((~(var_7)))))))));
    var_11 *= ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1428420254U)))))));
        var_12 = ((/* implicit */_Bool) 1428420240U);
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */unsigned long long int) 2866547055U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) + ((~(var_2))))))))));
    }
}
