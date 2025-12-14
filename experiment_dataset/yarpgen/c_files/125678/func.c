/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125678
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((7936U) != (7936U));
                    var_16 = ((/* implicit */unsigned int) arr_2 [i_2]);
                    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16032686789515581235ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1))));
}
