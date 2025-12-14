/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182927
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_1])) == (((/* implicit */int) arr_0 [i_0]))));
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) ^ (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 3]))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 16123594851028182214ULL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) 16123594851028182196ULL);
}
