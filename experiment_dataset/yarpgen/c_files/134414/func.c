/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134414
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
    var_14 = max(((!(((/* implicit */_Bool) 10412242018242932708ULL)))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) -1042600179)), (var_10)))))));
    var_15 = ((/* implicit */long long int) ((unsigned long long int) -1042600179));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) min((1974757784), (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)4]))))), (((/* implicit */unsigned long long int) (short)10617))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))))))))));
                var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((var_11) / (((/* implicit */int) var_4))))) : (((unsigned int) arr_1 [i_1]))))));
                var_17 *= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) ((signed char) 8034502055466618907ULL))))), (var_1)));
            }
        } 
    } 
}
