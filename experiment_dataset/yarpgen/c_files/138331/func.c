/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138331
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [14] [i_1 + 3] [15LL])))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1 + 3] [(unsigned short)3]), (arr_2 [i_0] [i_1 + 3] [3])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) arr_2 [i_0] [i_1 + 3] [(short)1])))))));
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(signed char)0] [i_0]))) * (max((arr_0 [i_1 + 1] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
