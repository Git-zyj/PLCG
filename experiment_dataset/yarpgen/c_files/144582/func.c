/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144582
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), ((-(((1073741792U) - (3221225491U)))))));
                    var_16 ^= ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 32767))))) ? (max((((/* implicit */int) var_6)), (var_12))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_4)))))))), (((3486830747847072588ULL) + (((/* implicit */unsigned long long int) 1073741788U))))));
}
