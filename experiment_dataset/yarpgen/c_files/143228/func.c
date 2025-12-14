/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143228
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3995680004U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)6048)))), (((/* implicit */int) (signed char)-62))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-11231))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11235))) : (min((var_4), (((/* implicit */long long int) 2417258325U))))))) : (((((/* implicit */_Bool) (unsigned char)173)) ? (((3146859325260957672ULL) << (((-2935130989815417241LL) + (2935130989815417296LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15599)))))));
                var_14 -= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) ^ (var_0)))));
                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) 15299884748448593962ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15591))) : (3146859325260957672ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)97)), (var_4))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (~(var_0)));
}
