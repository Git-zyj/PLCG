/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136651
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
    var_10 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) ((((/* implicit */long long int) var_8)) > (var_5)))))) : (var_8));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)0)), (max((0U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                var_12 = ((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
