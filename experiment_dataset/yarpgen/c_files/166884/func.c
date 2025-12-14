/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166884
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
    var_15 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-103)) ^ (((/* implicit */int) (signed char)-27))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) : (3231854592320846664ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [i_0 + 1] [(unsigned char)2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0 - 4] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2ULL]))))), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_1 + 1] [i_0 - 3])))));
                arr_7 [i_0] [7U] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) != (((/* implicit */int) (signed char)-63))));
            }
        } 
    } 
}
