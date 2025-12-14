/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124322
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [6LL] [i_1] [i_0])) || (((/* implicit */_Bool) arr_4 [i_1] [i_0])))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [17] [i_1]) : (arr_3 [i_1] [i_1] [i_0]))) <= (min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1996564505U)) ? (321525756U) : (((/* implicit */unsigned int) 1171576639)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_12))))) * ((~(((/* implicit */int) var_7))))))));
}
