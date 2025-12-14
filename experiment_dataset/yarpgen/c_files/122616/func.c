/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122616
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) (~(-1425195382)))) ? ((~(var_4))) : (var_4)))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned char)183))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-3642))))));
        arr_3 [i_0] = 1408541299662716527LL;
        var_15 = ((/* implicit */signed char) ((unsigned int) (signed char)24));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (unsigned short)65520)))));
    }
}
