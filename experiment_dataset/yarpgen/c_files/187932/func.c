/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187932
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
    var_19 = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19314))) & (12950537811340827355ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-3505)) < (((/* implicit */int) var_14))))) < ((+(((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)42019))))));
                var_20 = ((/* implicit */unsigned short) (((-(arr_3 [i_0] [(signed char)0] [i_1]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1023)))))));
                var_21 *= (+((+(((7753114051375105227LL) + (-7753114051375105227LL))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-((((+(((/* implicit */int) var_9)))) * ((+(((/* implicit */int) (unsigned short)1014))))))));
                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (((/* implicit */int) var_8)))) - ((+(((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
}
