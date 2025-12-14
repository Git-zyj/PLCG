/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104550
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
    var_19 += ((unsigned long long int) ((((((/* implicit */int) (short)7046)) == (((/* implicit */int) (short)7024)))) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)));
    var_20 += ((/* implicit */unsigned int) var_17);
    var_21 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 4] [i_0 + 4] [i_2] [i_0] = ((/* implicit */short) (~(14968753095505401694ULL)));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(546309941U)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0 + 3])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 3])) == (((/* implicit */int) arr_1 [i_0 + 3])))))));
                }
            } 
        } 
    } 
}
