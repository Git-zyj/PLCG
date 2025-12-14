/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107261
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) -1);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16331687493971929133ULL)) ? (((/* implicit */int) (short)14837)) : (((/* implicit */int) (short)14852))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((var_5) << (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))))));
    var_18 = ((var_4) - (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_16))))))));
}
