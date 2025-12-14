/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145873
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
    var_20 ^= ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_1)))));
    var_21 *= var_17;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((var_4) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
        var_23 *= ((/* implicit */unsigned short) var_14);
        arr_3 [i_0] = ((/* implicit */short) (((+((+(((/* implicit */int) var_11)))))) << (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) != (((((/* implicit */_Bool) (unsigned short)40537)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))));
    }
}
