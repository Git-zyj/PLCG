/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109955
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = (unsigned char)231;
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 924392866640385948ULL))))) <= ((+(((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))));
                    var_13 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), (min(((+(((/* implicit */int) (_Bool)1)))), ((+(var_6)))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) (short)24502);
}
