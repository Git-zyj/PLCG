/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179168
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
    var_19 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [(short)13] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-24))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 1921122516)) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32765)) || (((/* implicit */_Bool) arr_0 [i_1]))))))));
                var_20 = ((/* implicit */short) (~((+(min((2147483647), (-567831249)))))));
                arr_7 [i_1] [6] = arr_5 [i_0] [i_1] [i_1];
                var_21 = ((/* implicit */int) ((short) 621095548353609612LL));
            }
        } 
    } 
}
