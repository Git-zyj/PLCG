/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107439
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [3ULL]))) / (arr_4 [i_1] [i_1] [i_1] [i_1]))))))));
                    var_12 = ((((arr_5 [i_0 + 1] [i_2] [i_0 + 1]) >= (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_1])))))))) : ((-(arr_3 [10ULL] [4ULL] [i_2]))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)18596)) : (((/* implicit */int) (unsigned short)18596))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))) : (var_6)))))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), ((-(((((((/* implicit */_Bool) arr_4 [i_2] [(short)10] [i_1] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_9))) >> (((var_2) - (14518617580070671645ULL)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65525))))) : (min((var_3), (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((((((/* implicit */unsigned long long int) var_6)) ^ (var_3))) - (2101597009727966531ULL))))))));
}
