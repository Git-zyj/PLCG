/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113732
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_14))))) == (var_2)));
    var_19 &= ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)127)))) % (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) var_5);
        var_21 = (+(max((((/* implicit */int) var_14)), (8191))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [18U] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        var_22 = ((/* implicit */signed char) ((short) var_14));
        var_23 = var_14;
        var_24 = ((/* implicit */unsigned short) ((((_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)-96))))))) : (((long long int) 8191LL))));
        var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_1)))));
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) var_6);
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (unsigned char)237))));
        var_28 = ((((/* implicit */_Bool) (+(12ULL)))) ? (((((/* implicit */_Bool) var_17)) ? ((+(4271439208U))) : ((-(1780918848U))))) : (2348769377U));
        var_29 = ((unsigned short) (~((~(18446744073709551615ULL)))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (-((~(1274162381)))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        arr_11 [i_3] = arr_2 [i_3];
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? ((+((+(var_10))))) : (((/* implicit */unsigned int) var_7))));
        arr_12 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) arr_9 [i_3 - 1])))))));
    }
}
