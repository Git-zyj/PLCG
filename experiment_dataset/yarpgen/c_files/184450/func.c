/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184450
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (min((max((((/* implicit */long long int) var_8)), (var_0))), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_4 [i_1 + 1] [i_1] [i_0]) : (arr_5 [i_1 - 1]))), (arr_5 [i_1 - 1])))) ? ((+(arr_0 [i_1 + 1] [i_1 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                arr_6 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (max((arr_5 [i_0]), (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((978555817) - (978555791)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_0])))))));
                arr_7 [i_1] [i_1] = arr_2 [i_1 + 2];
            }
        } 
    } 
}
