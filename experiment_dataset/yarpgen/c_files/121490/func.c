/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121490
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) min((0U), (((unsigned int) ((var_8) % (((/* implicit */long long int) 23U)))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) 28U);
    var_14 = min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_1)))))) / ((-9223372036854775807LL - 1LL)))));
}
