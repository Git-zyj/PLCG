/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101082
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
    var_15 = (+(28719925U));
    var_16 += min((28719920U), (var_8));
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 28719925U)) ? (1103357119U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3125260854U)) || (((/* implicit */_Bool) 2892255391U)))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4025211810U))))) << (((((((/* implicit */_Bool) 3833996104U)) ? (var_7) : (var_9))) - (3474462923U)))))) < (((((/* implicit */_Bool) var_6)) ? (var_2) : (460971186U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_2]), (var_6)))) && (((/* implicit */_Bool) min((arr_1 [i_0 - 1] [i_1 - 1]), (arr_5 [i_0] [i_1 - 1]))))));
                    var_20 *= ((((/* implicit */_Bool) arr_6 [i_2])) ? (max((arr_3 [i_0] [i_0 - 1] [i_2]), (460971191U))) : (max(((~(var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967267U))))))));
                }
            } 
        } 
    } 
}
