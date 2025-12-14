/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152591
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
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (7605247774385586530LL))), ((+(-7605247774385586513LL)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_10)))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(var_7)))) + ((((~(7605247774385586555LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)28799)), (7605247774385586562LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (7605247774385586548LL)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) - (7605247774385586573LL))) + (9223372036854775807LL))) >> (((-7605247774385586537LL) + (7605247774385586583LL))))))));
    var_17 = ((/* implicit */unsigned short) var_9);
}
