/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130912
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)100)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_14)))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_2))))), (min((arr_4 [i_0]), (((/* implicit */short) var_15)))))))));
                var_18 = ((/* implicit */signed char) -1);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_3);
    var_20 = ((/* implicit */signed char) max((var_1), (max((((/* implicit */long long int) (_Bool)1)), (5519277564529861664LL)))));
    var_21 = ((/* implicit */unsigned char) var_7);
}
