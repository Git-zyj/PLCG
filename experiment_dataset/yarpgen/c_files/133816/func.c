/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133816
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
    var_19 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)-1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)4)))) - (-1)));
                var_21 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)1)))), (min(((-(((/* implicit */int) (_Bool)1)))), (arr_2 [i_0])))));
                var_22 = arr_1 [i_0] [(unsigned char)7];
                var_23 -= ((/* implicit */_Bool) ((unsigned int) (signed char)-26));
            }
        } 
    } 
}
