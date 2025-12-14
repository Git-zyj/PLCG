/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1583
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max(((~((-(-1662179337))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [2] [i_1]))))) / (1662179336)))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (14028392749031557818ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_0])))) : (arr_0 [i_0]))))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (min((var_5), (((/* implicit */unsigned long long int) var_11)))) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (min((var_3), (((/* implicit */unsigned int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned int) ((max((7625888250049298874ULL), (((/* implicit */unsigned long long int) var_1)))) >> (((min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_14))))) - (10150ULL)))));
}
