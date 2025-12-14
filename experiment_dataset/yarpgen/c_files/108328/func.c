/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108328
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((_Bool)1) ? (0U) : (3594829910U))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_4))));
                    arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775782LL))))) : (((/* implicit */int) (unsigned short)28652)))))));
                }
            } 
        } 
    } 
}
