/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1425
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) -989280322);
                    var_14 += ((/* implicit */_Bool) ((unsigned int) min((((unsigned short) var_10)), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (~(var_2)));
}
