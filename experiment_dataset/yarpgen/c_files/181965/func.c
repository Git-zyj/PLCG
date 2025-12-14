/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181965
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) arr_2 [i_1] [i_0]))))), (min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [(unsigned short)10])) ? (((/* implicit */unsigned int) var_2)) : (arr_1 [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
}
