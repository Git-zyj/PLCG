/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136340
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
    var_18 = ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) (!((_Bool)0)))) : ((-(((int) (unsigned short)29869)))));
    var_19 = ((/* implicit */_Bool) (unsigned short)29869);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)14546))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5225251720085469989LL)) ? (((/* implicit */long long int) ((unsigned int) 3612474738U))) : (((((/* implicit */_Bool) 18289623683956583259ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1325839866256906814ULL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-71))))) : (min((7359438820832958191LL), (((/* implicit */long long int) (signed char)110))))))));
            }
        } 
    } 
}
