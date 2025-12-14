/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145452
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((int) 4294967295U))) || (((/* implicit */_Bool) ((1U) + (1U))))))), (var_12)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [10] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [14LL] [i_1])) : (-1736970635)))) && (((/* implicit */_Bool) max((arr_3 [i_1] [i_2] [i_1]), (arr_3 [i_1] [i_2 + 1] [i_1])))))))));
                    var_18 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (237657116) : (var_14)))) ? (max((((/* implicit */unsigned int) var_10)), (4204920493U))) : (((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_2 + 1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) var_1))) * (((((/* implicit */_Bool) 90046817U)) ? (((/* implicit */unsigned long long int) max((var_1), (var_0)))) : (((((/* implicit */_Bool) 4294967287U)) ? (3930371296726178576ULL) : (((/* implicit */unsigned long long int) -1659392547))))))));
}
