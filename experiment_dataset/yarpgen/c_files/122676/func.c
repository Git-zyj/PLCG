/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122676
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) var_9);
        arr_2 [i_0] = ((/* implicit */unsigned char) 2147483647);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))));
    }
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((1361908499) > (((/* implicit */int) (unsigned char)237)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-100)), ((unsigned short)65535))))));
}
