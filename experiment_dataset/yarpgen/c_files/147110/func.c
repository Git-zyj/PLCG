/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147110
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_16))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_6);
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (~(max((((3572650949168798907ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_1 + 3]))))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_0 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (max((max((((/* implicit */unsigned long long int) (signed char)-64)), (3572650949168798907ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14282378902363743606ULL)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1864004757)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13794))) : (2199023255551LL))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
}
