/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153921
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)205))))))) ? (min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_11)))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */short) ((unsigned char) var_8))), (var_5))), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-1))))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) var_6)))))));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (signed char)-38)), (((((/* implicit */long long int) ((((/* implicit */int) (short)-9158)) & (((/* implicit */int) (short)9164))))) | (var_9)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min(((-(max((-16777216LL), (((/* implicit */long long int) (unsigned char)20)))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-8)))))))))));
        var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)171))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)28)), (max((((/* implicit */long long int) (unsigned char)138)), (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_8);
        var_21 = (!((_Bool)0));
    }
}
