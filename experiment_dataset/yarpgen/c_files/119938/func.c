/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119938
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) << (((4183817916U) - (4183817896U)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2147483647)))) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)209)) & (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) var_7)) ? (var_12) : (arr_6 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min(((((+(((/* implicit */int) (_Bool)0)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) var_11))))));
}
