/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104253
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                var_18 ^= ((/* implicit */unsigned short) arr_5 [i_0 + 3] [i_0] [i_0 + 3]);
                arr_7 [i_1] [i_0 - 1] = ((/* implicit */unsigned short) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)241))))) && (((/* implicit */_Bool) var_7))))))));
            }
        } 
    } 
}
