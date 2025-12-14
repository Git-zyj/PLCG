/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155958
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = min((arr_0 [i_0]), (((int) -1)));
                arr_5 [i_1] = ((((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_0 - 1])) ? (arr_1 [i_1 - 1] [i_0 + 3]) : (var_9))) / (min((arr_1 [i_1 - 1] [i_0 - 1]), (arr_1 [i_1 + 1] [i_0 + 3]))));
            }
        } 
    } 
    var_13 = var_8;
    var_14 = max((((int) var_1)), (((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */_Bool) 2147483627)) ? (-931971598) : (2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
}
