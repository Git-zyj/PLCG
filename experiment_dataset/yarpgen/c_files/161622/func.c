/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161622
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
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [(signed char)3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57025))) : (((unsigned int) arr_1 [i_0] [i_0]))))), (arr_4 [i_0] [i_0] [(short)16])));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)254);
            }
        } 
    } 
    var_14 = ((/* implicit */short) (signed char)-51);
}
