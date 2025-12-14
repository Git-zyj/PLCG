/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136346
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                var_19 = ((/* implicit */unsigned char) arr_0 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)20863)) : (((/* implicit */int) (_Bool)1))));
}
