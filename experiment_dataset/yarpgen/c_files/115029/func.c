/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115029
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
    var_12 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((-4531869512259313951LL) == (-6658224381976151267LL)))))) + (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) (~(var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11650))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_6), ((~(((var_6) >> (((18049942732455512887ULL) - (18049942732455512887ULL)))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (var_2) : (((/* implicit */unsigned int) ((int) var_6)))))) && ((!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))))));
                var_16 = ((/* implicit */long long int) 14826589397731005877ULL);
            }
        } 
    } 
}
