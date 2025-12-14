/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153081
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (unsigned char)0)), (arr_2 [i_0 - 3] [i_0]))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (0ULL)))) * (((/* implicit */int) var_6))))));
                arr_7 [i_0] = ((/* implicit */int) var_12);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)11248)))), (((/* implicit */int) var_6))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                arr_15 [i_2] = (+(((/* implicit */int) ((((unsigned long long int) var_14)) <= (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                arr_16 [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(-1808721599)))), (((unsigned int) min((((/* implicit */int) arr_14 [i_3])), (var_7))))));
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)48453)))) - (((/* implicit */int) min((var_5), (var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 17154712737375937735ULL)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (short)0)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_0))))))));
}
