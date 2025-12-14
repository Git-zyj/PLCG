/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158419
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
    var_10 -= ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-48)), ((unsigned char)89))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (signed char)12))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((short) (_Bool)1)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) 9251413348580206128ULL));
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-13))));
            }
        } 
    } 
}
