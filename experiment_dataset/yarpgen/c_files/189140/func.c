/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189140
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((((max((((/* implicit */int) (signed char)91)), (-527709094))) <= ((-(arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) (~(876827284)))) : (arr_0 [i_0]));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)94), ((signed char)-101)))) ? (((arr_1 [i_1 - 1]) - (arr_1 [i_1 - 1]))) : (((((/* implicit */int) (signed char)94)) - (((/* implicit */int) (unsigned char)94))))));
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (signed char)-95)))))))), (min((((/* implicit */unsigned long long int) -1520829664)), (arr_0 [i_0 + 1])))));
                var_22 = ((/* implicit */unsigned long long int) arr_2 [14] [i_1 - 1]);
            }
        } 
    } 
    var_23 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned long long int) max((var_11), ((signed char)120)))), (max((17984274703975183433ULL), (((/* implicit */unsigned long long int) (signed char)40)))))));
    var_24 = max((var_18), (var_10));
}
