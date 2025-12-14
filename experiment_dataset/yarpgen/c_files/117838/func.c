/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117838
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)-41))))));
                    var_16 = ((/* implicit */signed char) min((25ULL), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((17133509809968674235ULL), (((/* implicit */unsigned long long int) (signed char)74)))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)200)))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3079410400U))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1)))))))));
}
