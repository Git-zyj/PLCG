/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174764
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((21U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) || (((/* implicit */_Bool) var_0))))) | (min((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)78)) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */int) (unsigned char)5)) : (-1082946331)))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2])) ^ (((/* implicit */int) var_12)))) >> (((((/* implicit */int) ((unsigned short) var_12))) - (119)))));
            }
        } 
    } 
}
