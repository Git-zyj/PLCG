/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176741
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)2] [i_0]))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_1]), ((signed char)-33)))) : (((/* implicit */int) (short)-27809))))));
                var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155)))))) & (min((var_9), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */long long int) var_9);
    var_15 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_0))));
}
