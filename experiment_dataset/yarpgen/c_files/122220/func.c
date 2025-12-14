/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122220
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
    var_11 = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 67108863LL)) : (max((((/* implicit */unsigned long long int) var_7)), (9168072970322219395ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (+(11505158095161787200ULL))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) 12))), (arr_3 [i_0] [i_0] [i_1])))) : (18446744073709551615ULL)));
                var_12 = ((/* implicit */int) 67108863LL);
            }
        } 
    } 
    var_13 = (+(((/* implicit */int) var_3)));
}
