/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137481
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
    var_12 = ((/* implicit */unsigned int) var_10);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)88)), (562949953421311ULL)))) ? (((/* implicit */int) (signed char)-122)) : (((int) (_Bool)1))))) ? (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_11))) : (max((562949953421311ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_14 = ((((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0])))))) < (max((124928216), (((/* implicit */int) var_2)))));
                    var_15 = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (var_8)))) + (((/* implicit */int) var_1))));
}
