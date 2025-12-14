/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175323
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
    var_15 = ((/* implicit */unsigned int) (-(((unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))) : (min((var_1), (((/* implicit */unsigned int) var_11)))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6)))))))))));
                    var_17 = ((unsigned int) max((var_7), (((/* implicit */unsigned int) var_6))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_10)))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2 + 3])))) : (((/* implicit */int) var_2))));
                    var_18 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (var_7) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) : (min((((/* implicit */unsigned int) var_2)), (var_7)))))));
                }
            } 
        } 
    } 
}
