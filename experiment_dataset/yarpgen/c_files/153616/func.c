/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153616
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398442373120ULL)) ? (11396546784770744821ULL) : (11396546784770744827ULL)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [(_Bool)1])) ? (arr_3 [3U] [3U] [i_1]) : (var_9))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 11396546784770744823ULL)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_3)))))));
                var_12 = ((/* implicit */unsigned long long int) (((+(arr_2 [i_0 + 1]))) % (max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1])) < (((unsigned long long int) (signed char)-76))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (+(var_10)));
}
