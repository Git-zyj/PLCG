/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135041
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = arr_1 [i_1 + 1] [i_1 + 2];
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [17] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -898307803)) & (5765108428503273781LL)))) ? (1973907962955872253LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))) : (var_6)));
                var_20 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0] [i_1 + 2])) ? (arr_3 [i_0 - 1] [(_Bool)1] [i_1 - 1]) : (arr_3 [i_0 + 2] [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_13))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1973907962955872265LL))), (var_8)));
}
