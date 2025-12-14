/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122476
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = (~(((unsigned int) arr_9 [i_1 - 1] [i_1 - 1] [i_0])));
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (5791612336565662480ULL) : (2299416785858645911ULL))), (((/* implicit */unsigned long long int) min((var_5), (var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 6416248464636910311LL)) : (12655131737143889142ULL)))))));
    var_17 = ((/* implicit */unsigned int) var_0);
}
