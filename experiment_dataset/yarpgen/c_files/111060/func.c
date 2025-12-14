/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111060
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (137026080U) : (3789303135U)))))))) : (var_7)));
    var_11 -= ((/* implicit */int) 3924445604U);
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = max((((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (137026083U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))))), (((/* implicit */unsigned int) ((arr_3 [i_1] [i_0]) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_1 [i_0] [(_Bool)1]))))))));
                var_14 &= ((/* implicit */short) ((unsigned char) arr_1 [(signed char)7] [(signed char)7]));
                var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 137026065U)) ? (-29850237) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)9)))))))));
            }
        } 
    } 
}
