/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104277
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
    var_15 = ((/* implicit */long long int) var_11);
    var_16 -= ((/* implicit */_Bool) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((_Bool)1), (arr_4 [i_0] [i_1 - 1] [i_1 + 1])))))), (((max((arr_6 [14ULL]), (var_7))) ? (((var_6) - (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_13))))))));
                arr_7 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1]))));
            }
        } 
    } 
}
