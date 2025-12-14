/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15365
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)28)), (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58075))) : (-1349139043168904569LL)))));
    var_18 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((unsigned long long int) ((((/* implicit */_Bool) -1034770176)) ? (((/* implicit */long long int) -1034770176)) : (arr_4 [i_0 + 2])));
                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_1]))))) / (arr_1 [i_1] [i_0 - 1])));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((arr_1 [i_0 + 2] [i_0 + 1]) == (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -1034770176))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (1034770176) : (((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
}
