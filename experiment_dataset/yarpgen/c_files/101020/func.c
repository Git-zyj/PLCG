/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101020
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967274U))))), ((unsigned char)223)));
                var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)124)));
                arr_6 [i_0] = min((((var_2) | (arr_2 [i_0] [3U]))), (((341232916356730664LL) - (((/* implicit */long long int) min((1020249590U), (((/* implicit */unsigned int) (short)13974))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_11);
    var_22 |= ((/* implicit */unsigned long long int) (-(var_11)));
}
