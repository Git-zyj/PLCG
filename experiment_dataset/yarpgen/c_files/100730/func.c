/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100730
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((219640965U) << (((9223372036854775807LL) - (9223372036854775781LL)))));
                var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [2U] [2U])) || (((/* implicit */_Bool) ((int) (short)-32755)))));
                var_13 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)75)))) : (((/* implicit */int) arr_3 [i_1])))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min(((((((~(((/* implicit */int) (unsigned short)56386)))) + (2147483647))) >> ((((~(var_6))) - (1089090840U))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_8)))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) min((((unsigned char) (signed char)127)), ((unsigned char)232)))))))));
}
