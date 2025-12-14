/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148599
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0 + 1]))) : (1U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 1])) | (((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 1])))))));
                arr_6 [i_0] &= min((min((2025973621), (((/* implicit */int) (_Bool)1)))), (max((((int) (_Bool)1)), (((((/* implicit */_Bool) 117440512)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) -610994374);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((signed char) (signed char)-77));
}
