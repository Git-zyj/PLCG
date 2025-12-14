/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152168
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 &= ((/* implicit */short) max((((((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)-30)))) ? (var_5) : ((-2147483647 - 1)))), (2147483647)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1])))) : (((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                arr_4 [i_0] [(unsigned short)4] = max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)(-127 - 1))))), (max(((-2147483647 - 1)), (2147483630))));
            }
        } 
    } 
}
