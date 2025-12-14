/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171645
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1]))) : ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21357))) : (arr_3 [i_0]))))))))));
                var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(var_6))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                arr_6 [i_1] [i_0] [i_0 - 1] = ((/* implicit */short) var_15);
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) 12004029465189853158ULL);
    var_21 = var_5;
}
