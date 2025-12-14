/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106100
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
    var_15 = ((((/* implicit */_Bool) 8571167292660364130LL)) ? (max((6755399441055744LL), (((/* implicit */long long int) (signed char)-52)))) : (((/* implicit */long long int) var_10)));
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [5LL]))) : (max((arr_7 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) (signed char)-49)))))))));
                    var_18 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
