/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150366
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)56)) ? (-7809961692694229259LL) : (((/* implicit */long long int) arr_2 [i_1])))));
                    var_11 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_2])) ? (arr_5 [i_1] [i_2 + 1] [i_2]) : (arr_5 [i_0] [i_2 + 1] [i_0]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) (((~(max((var_5), (((/* implicit */int) var_0)))))) + (((/* implicit */int) var_0))));
}
