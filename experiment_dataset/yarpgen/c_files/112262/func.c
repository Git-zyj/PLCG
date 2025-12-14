/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112262
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (1073676288LL)));
    var_13 &= ((/* implicit */unsigned short) var_4);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) / (var_5))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned long long int) (unsigned char)8)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14686))) <= (5LL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned char) (~(((long long int) (unsigned char)255))));
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_11)));
    }
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        arr_7 [(unsigned short)16] &= ((((/* implicit */int) ((4655665376340452937LL) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))) << (((((/* implicit */int) arr_0 [i_2 - 1] [i_2])) - (14883))));
        arr_8 [i_2] &= ((/* implicit */int) (unsigned char)215);
        var_18 += ((/* implicit */unsigned short) ((((arr_1 [i_2 - 2] [i_2 - 2]) <= (var_0))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
    }
    var_19 |= ((/* implicit */long long int) var_7);
}
