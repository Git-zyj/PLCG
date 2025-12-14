/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135367
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(3961801823U)))), (15027416962102944390ULL))))));
                    arr_6 [i_2] [i_1] = ((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((unsigned char) min((((var_1) & (((/* implicit */long long int) 3961801826U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))));
}
