/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10506
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 9604491259287836398ULL)) ? (8842252814421715200ULL) : (var_7))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((8842252814421715217ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (-(2905527678U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = max((((/* implicit */unsigned int) ((signed char) var_3))), ((-(4294967295U))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (arr_2 [i_0]) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (2305124453U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (68719472640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((_Bool) (unsigned char)43));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (max((var_14), (-2095803449))) : (((/* implicit */int) ((unsigned char) var_4))))))));
    var_18 = ((/* implicit */unsigned int) var_11);
}
