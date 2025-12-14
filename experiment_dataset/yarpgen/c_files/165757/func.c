/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165757
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((8693398265763583214ULL), (18446744073709551613ULL))) % (9753345807945968401ULL)))) ? (var_13) : (((((/* implicit */int) (short)-1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_14)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((9753345807945968401ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))))));
        var_21 ^= ((/* implicit */unsigned char) (!(((var_16) >= (((/* implicit */unsigned long long int) var_2))))));
    }
}
