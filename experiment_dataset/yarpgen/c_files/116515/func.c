/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116515
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (short)-29467)) > (((/* implicit */int) max((max(((unsigned short)46609), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) var_1)))))));
    var_14 = ((/* implicit */_Bool) (unsigned short)47708);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (max((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned short)17820)))), (((/* implicit */int) arr_6 [i_0] [i_1])))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((18070126272362248589ULL), (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((/* implicit */int) var_10))))));
            }
        } 
    } 
    var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (3913583979786128692ULL)))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 3312449303U))));
}
