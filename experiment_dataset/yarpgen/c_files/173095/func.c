/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173095
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
    var_19 = ((_Bool) min((((/* implicit */long long int) ((signed char) var_7))), (-6502822839527117667LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) var_13)))))));
                var_21 = ((/* implicit */_Bool) min(((~(arr_3 [i_0] [i_1] [i_1 + 4]))), (((var_13) ? (arr_3 [(_Bool)1] [i_1 + 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                var_22 = ((/* implicit */signed char) arr_0 [i_1 + 1] [i_1 + 1]);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_1 [i_0])))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) / (arr_1 [i_1])))), (((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_4 [i_1])))))))));
                var_24 = ((/* implicit */int) arr_0 [i_0] [i_1 + 4]);
            }
        } 
    } 
    var_25 = var_11;
}
