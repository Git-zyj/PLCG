/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105568
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
    var_11 = ((/* implicit */unsigned char) 30LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) -31LL);
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 21LL)) ? (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1]))) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_4 [i_1 - 1] [i_1 - 1])))));
                arr_7 [i_0] [i_1] = 36LL;
            }
        } 
    } 
    var_13 = ((/* implicit */int) 9223372036854775807LL);
}
