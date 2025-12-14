/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187483
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (min((((((((/* implicit */_Bool) (short)7168)) || (((/* implicit */_Bool) (short)7168)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), ((short)-7169))))) : (arr_3 [i_1] [i_1 + 2]))), (((/* implicit */unsigned long long int) min((max((((/* implicit */short) arr_4 [i_0])), ((short)-31666))), (((/* implicit */short) (signed char)-28)))))))));
                arr_7 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                var_12 = ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_6)), (((unsigned short) var_1))));
}
