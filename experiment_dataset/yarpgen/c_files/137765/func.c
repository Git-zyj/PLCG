/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137765
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
    var_16 = ((/* implicit */short) var_3);
    var_17 = ((/* implicit */unsigned long long int) (signed char)124);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [(_Bool)1] = ((((/* implicit */int) arr_5 [(_Bool)1] [i_1])) == (max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_5 [14LL] [14LL])) * (((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2]))))) | (((/* implicit */int) min(((!(var_2))), (((var_1) || (((/* implicit */_Bool) arr_2 [i_1]))))))));
            }
        } 
    } 
}
