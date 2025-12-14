/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104332
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
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))))))) ? (((/* implicit */int) (unsigned short)48743)) : (((((/* implicit */_Bool) arr_3 [(unsigned short)2])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) ((_Bool) var_1)))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_12), ((unsigned char)149)));
    var_13 ^= ((/* implicit */short) var_8);
}
