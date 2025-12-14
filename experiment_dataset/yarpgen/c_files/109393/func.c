/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109393
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
    var_19 = ((/* implicit */_Bool) (signed char)75);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) 11291610429413913514ULL);
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 24576U);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) -1949010160);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_22 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 637769379U)), (max((7155133644295638101ULL), (((/* implicit */unsigned long long int) (unsigned char)132)))))), (((/* implicit */unsigned long long int) (signed char)-40))));
}
