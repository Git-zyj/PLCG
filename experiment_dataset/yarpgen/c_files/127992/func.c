/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127992
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
    var_10 |= ((/* implicit */_Bool) ((unsigned int) ((var_6) * (((/* implicit */unsigned long long int) (+(11U)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((4294967277U), ((-(4294967285U)))));
                    var_12 *= ((/* implicit */unsigned int) var_6);
                    var_13 = ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) == (min((((/* implicit */long long int) min((4294967287U), (4294967284U)))), (var_0))));
                    var_14 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
