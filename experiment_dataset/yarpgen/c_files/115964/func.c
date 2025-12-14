/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115964
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
    var_10 = ((/* implicit */unsigned int) 956859607186462626LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (_Bool)1))));
                    var_12 ^= ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) var_4))))) : (((/* implicit */int) var_0))))), ((+(((unsigned int) (unsigned short)21820))))));
}
