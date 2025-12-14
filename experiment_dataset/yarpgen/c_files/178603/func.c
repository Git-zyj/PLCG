/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178603
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)13));
    var_16 = ((/* implicit */_Bool) (-(var_7)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((arr_2 [i_0] [i_1]) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]))) : (arr_3 [(_Bool)1]))) : (((/* implicit */unsigned long long int) 1761062764U))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((min((min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) 2533904532U)))), (((/* implicit */unsigned long long int) 1761062795U)))))));
                var_18 ^= ((/* implicit */_Bool) 7442131968290758954ULL);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -1821547128);
            }
        } 
    } 
    var_19 *= min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)246)) : (-26220751)))))), (var_14));
}
