/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132738
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 1])))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_0 [i_0 + 1] [i_2])))) : (((/* implicit */int) (!((_Bool)0))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_0 - 1])) * (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0 + 1])))) : (((/* implicit */int) max((arr_3 [i_0] [i_0 - 1]), (var_9))))));
                    var_18 |= ((/* implicit */long long int) ((arr_5 [i_2] [i_0 - 1]) == ((+(arr_5 [i_2] [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11263))) : (-4804647874872176093LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))));
    var_20 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((int) 4294967286U)))));
}
