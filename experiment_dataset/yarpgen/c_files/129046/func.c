/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129046
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
    var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_5), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), ((((+(((/* implicit */int) arr_0 [i_0] [i_1])))) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0]))))))))));
                var_17 = ((/* implicit */unsigned short) arr_2 [i_0]);
                var_18 = ((/* implicit */_Bool) arr_0 [i_1] [14]);
                arr_6 [8] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (arr_5 [i_1]) : ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)38484)) : (((/* implicit */int) (unsigned char)94))))))));
            }
        } 
    } 
}
