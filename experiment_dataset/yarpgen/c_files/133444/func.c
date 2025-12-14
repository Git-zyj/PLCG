/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133444
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
    var_12 -= ((/* implicit */short) ((signed char) (signed char)-121));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((unsigned long long int) (signed char)120)))) != (((/* implicit */int) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (signed char)-45)) + (70)))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))) || (((/* implicit */_Bool) ((signed char) (((_Bool)0) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)119)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)86))));
}
