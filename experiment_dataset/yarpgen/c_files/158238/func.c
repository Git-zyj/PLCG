/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158238
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_8))) > ((+(((/* implicit */int) (_Bool)0)))))))));
                    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2 + 1] [i_2 + 1])))) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) (unsigned char)25)) - (23)))));
}
