/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10590
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) (unsigned char)64)) ? (((/* implicit */int) min(((unsigned short)21892), ((unsigned short)43643)))) : (((/* implicit */int) (unsigned short)7))))) ? (min((((/* implicit */int) (unsigned short)43627)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)43644)) : (1548162792))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (-577122205))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_7)))))))));
    var_17 = ((/* implicit */unsigned char) 240U);
    var_18 -= ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (+(((1548162792) >> (((/* implicit */int) (_Bool)1))))));
                    var_19 ^= ((/* implicit */unsigned short) (unsigned char)4);
                }
            } 
        } 
    } 
}
