/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111848
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) : (((7229483664122971760LL) / (((/* implicit */long long int) var_4))))))) ? (((/* implicit */int) ((arr_0 [i_0 + 2] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (-7229483664122971774LL))))))) : (((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                arr_4 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((unsigned int) var_18))))) * (((long long int) (unsigned char)0))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_3 [i_0 - 2]))))) ? (((/* implicit */int) ((short) ((short) arr_1 [i_1])))) : ((+((~(((/* implicit */int) (unsigned short)1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_3);
    var_22 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((var_12) + (5208071568587665941LL)))))))))));
}
