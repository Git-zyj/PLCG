/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188266
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_2);
                var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((arr_1 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1757121355)) ? (((/* implicit */int) ((signed char) ((var_9) | (var_7))))) : (((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)-1))))));
    var_14 = ((/* implicit */_Bool) min(((-(min((((/* implicit */unsigned long long int) 1757121367)), (22ULL))))), (((/* implicit */unsigned long long int) var_6))));
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
}
