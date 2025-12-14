/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155867
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((signed char) (-(12596039019166831380ULL))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) -2868843821613997833LL)) ? (arr_4 [i_1 - 3] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 1])))), ((~(arr_4 [i_1 - 2] [(signed char)7])))));
            }
        } 
    } 
    var_11 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) ^ (-2868843821613997828LL));
}
