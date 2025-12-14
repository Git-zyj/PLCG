/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102466
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
    var_11 = ((/* implicit */int) (-(min((var_1), (min((((/* implicit */long long int) (short)(-32767 - 1))), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 &= (~((+(min((((/* implicit */unsigned long long int) (signed char)0)), (arr_6 [i_0 - 1] [i_0 - 1]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) var_0);
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((short) arr_1 [i_1] [i_0])), (((/* implicit */short) var_6)))))) < (max(((+(arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_1]), (((/* implicit */short) (signed char)0)))))))));
                arr_9 [i_0 + 1] [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))))) ? (max(((+(((/* implicit */int) (signed char)8)))), (((/* implicit */int) min((arr_4 [i_1]), ((signed char)8)))))) : ((~(((/* implicit */int) arr_3 [i_1] [i_1])))));
            }
        } 
    } 
}
