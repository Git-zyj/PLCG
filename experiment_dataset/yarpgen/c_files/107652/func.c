/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107652
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (~(max((max((var_0), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) arr_3 [(_Bool)0]))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((137952284U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))) >= (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_5)))))))))));
                var_19 = ((/* implicit */unsigned short) var_10);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))), (4157015011U)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_21 = ((/* implicit */unsigned int) arr_3 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((short) -9223372036854775807LL));
    var_23 |= ((/* implicit */unsigned long long int) var_3);
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_8))));
}
