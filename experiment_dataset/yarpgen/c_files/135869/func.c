/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135869
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */int) var_4)))), (((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (short)24185))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13288)))))));
    var_11 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (short)21291))) & (-7276519918433664384LL))), (((/* implicit */long long int) (unsigned char)164))));
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [5]);
                var_13 += ((/* implicit */short) max((((/* implicit */long long int) ((short) arr_0 [i_1]))), (min((((/* implicit */long long int) ((short) arr_5 [i_0] [(signed char)9] [i_1]))), (max((arr_4 [(short)8]), (((/* implicit */long long int) arr_3 [6LL]))))))));
            }
        } 
    } 
}
