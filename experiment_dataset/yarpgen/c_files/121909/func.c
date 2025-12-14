/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121909
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) ((unsigned int) var_10))))));
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32745))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) | (1554381787U))))) << (((int) arr_4 [i_0] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((int) min((max((((/* implicit */long long int) var_1)), (7050546673909496546LL))), (((/* implicit */long long int) ((var_4) == (var_4)))))));
}
