/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149788
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
    var_17 = ((/* implicit */short) max(((signed char)-38), ((signed char)-35)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0]))))) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) 469232870)) : (arr_3 [i_0] [i_1] [i_0]))))) ^ (((/* implicit */long long int) min((((((/* implicit */int) (signed char)84)) ^ (469232872))), (469232870))))));
                var_19 -= ((/* implicit */unsigned short) (~(469232872)));
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)108))));
            }
        } 
    } 
}
