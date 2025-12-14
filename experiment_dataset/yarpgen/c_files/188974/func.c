/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188974
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
    var_19 = ((/* implicit */unsigned int) ((_Bool) max((((_Bool) (unsigned char)233)), (min(((_Bool)0), ((_Bool)0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) (signed char)24))), (((5634881840538676774ULL) << (((((/* implicit */int) (signed char)-24)) + (74)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)8), (((/* implicit */short) (unsigned char)233))))) && (((/* implicit */_Bool) (unsigned char)233))))), ((+(0U)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && (((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)207)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_3);
}
