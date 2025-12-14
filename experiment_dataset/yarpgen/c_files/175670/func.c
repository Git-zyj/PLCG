/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175670
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) + (9223372036854775807LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) arr_3 [i_2 - 1] [i_1 + 1] [i_0 + 3])) * (((/* implicit */int) arr_7 [i_0 + 2] [i_1 + 2] [i_2 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 3] [i_2 + 1])))))));
                    var_21 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3] [i_2 - 1])) ? (arr_5 [i_1 + 3] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 3]))))), ((((!(((/* implicit */_Bool) 1039170941)))) ? (((((/* implicit */_Bool) arr_5 [(short)4] [i_2])) ? (var_16) : (3487710906233972534LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
