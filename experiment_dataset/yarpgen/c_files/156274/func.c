/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156274
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
    var_20 = var_19;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0]);
                arr_5 [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                arr_6 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)-117)))))));
            }
        } 
    } 
}
