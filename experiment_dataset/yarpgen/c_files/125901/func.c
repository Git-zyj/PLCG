/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125901
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
    var_14 = ((var_13) & (var_10));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1152921504606845952LL)) || (((/* implicit */_Bool) (unsigned short)65515)))) ? (4000425013757072022LL) : (((((/* implicit */_Bool) 4374696372751062557ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3744401757904504615LL)))))) - (var_11)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8766552596242663057LL)) ? (-1536284347408927127LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35702)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6397670152748069582LL)) ? (-8766552596242663055LL) : (9223372036854775807LL)))) : (((((/* implicit */_Bool) (unsigned short)49984)) ? (14072047700958489084ULL) : (8380524036076379342ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) == (2017612633061982208LL))))));
        var_16 = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)65535))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_17 &= ((((((/* implicit */unsigned long long int) -5877997696414526660LL)) & (0ULL))) & (((/* implicit */unsigned long long int) -7331996312268858153LL)));
            arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)65535)) << (((492581209243648ULL) - (492581209243641ULL)))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((1116892707587883008LL) | (-3978618222768194311LL)))) ^ (12346274412433368616ULL)));
        }
        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -13LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4001))) : (-7331996312268858163LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((492581209243657ULL) > (((/* implicit */unsigned long long int) 8258894736837455053LL)))))) : (6625692663151168079ULL)));
    }
}
