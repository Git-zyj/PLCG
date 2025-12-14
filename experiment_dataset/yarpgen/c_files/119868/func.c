/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119868
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) 2293287224U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))) : (2293287224U)))));
                    arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) min(((signed char)-59), (((/* implicit */signed char) (_Bool)1))))), ((-(((/* implicit */int) (unsigned short)4088))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : ((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))))));
    var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
}
