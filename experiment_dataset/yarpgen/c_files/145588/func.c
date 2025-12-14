/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145588
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) >= ((+(((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_11)))))));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((_Bool)1) && ((_Bool)1))) ? (((/* implicit */int) (signed char)24)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-28049)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((arr_0 [i_0]) != (var_8))) ? (-2041118178026312913LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (_Bool)1)))))));
        arr_2 [(signed char)7] = arr_0 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned short) var_15);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)2])) ? (((/* implicit */int) (unsigned short)41787)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((-2412577271521360182LL) ^ (var_11))))))));
        var_20 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_2])) <= (((/* implicit */int) ((short) arr_0 [i_2]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
        arr_12 [i_2] [i_2] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (5111496985570871097LL)))) ? (var_2) : ((+(arr_0 [i_2]))))) : (((((/* implicit */_Bool) (short)-5253)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (max((9223372036854775807LL), (var_6)))))));
    }
    var_21 = ((/* implicit */signed char) var_14);
}
