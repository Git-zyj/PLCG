/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160042
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
    var_13 = ((/* implicit */unsigned int) 218830441353241233LL);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [0U] = ((/* implicit */short) ((((2147483647LL) > (((/* implicit */long long int) 4294967289U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)102)) | (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -323209379)) + (4294967295U)))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))))) : (((((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1)))) - (((unsigned long long int) (_Bool)1))))));
                arr_8 [i_1] [i_1] = ((/* implicit */int) 1299017306U);
                arr_9 [i_1] [i_0 + 1] [(signed char)11] = ((/* implicit */unsigned short) max((-8325636259158375168LL), (((/* implicit */long long int) (signed char)-37))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_4);
}
