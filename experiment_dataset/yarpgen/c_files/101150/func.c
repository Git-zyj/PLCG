/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101150
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(arr_1 [i_0 - 1])))), (arr_4 [i_2 - 1])));
                    arr_12 [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) ((arr_5 [i_2 - 1] [i_2]) - (min((((/* implicit */int) (short)4032)), (arr_5 [i_2 + 1] [13ULL])))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) (short)-17731)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7082547048479002281LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_1))))) : (((/* implicit */int) var_0)))));
}
