/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165325
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((min((arr_2 [10]), (((int) arr_2 [i_0])))) >> (((max(((+(1040210811))), (min((arr_3 [i_0] [i_1]), (arr_1 [i_0] [i_1]))))) - (1040210799))));
                var_19 = ((/* implicit */int) max((var_19), (max(((+(((((/* implicit */_Bool) arr_3 [i_1] [5])) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_1]))))), (min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [7])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (arr_1 [i_0] [i_0 - 1])))))));
            }
        } 
    } 
    var_20 = var_16;
    var_21 += max((((/* implicit */int) ((1040210811) >= (1040210803)))), (((int) -1040210811)));
}
