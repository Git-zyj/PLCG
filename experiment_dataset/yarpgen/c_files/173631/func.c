/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173631
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [(unsigned char)6] = var_3;
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */long long int) ((var_5) ? (277523110U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        arr_4 [i_0 + 2] [i_0 + 1] = ((/* implicit */signed char) (unsigned short)65535);
        arr_5 [i_0] = ((/* implicit */signed char) var_2);
        arr_6 [i_0] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (var_13) : (var_13)))));
    }
    var_20 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) var_3))))), (var_8)))));
}
