/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154952
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) 14148075332925639678ULL));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61876))))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_0]) : (var_18))))) : ((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)54))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_14)))) : (((((/* implicit */_Bool) 49510959741289289LL)) ? (var_4) : (((/* implicit */long long int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26690)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_16)))) : (((unsigned long long int) var_13))))));
    var_21 = ((/* implicit */signed char) var_17);
}
