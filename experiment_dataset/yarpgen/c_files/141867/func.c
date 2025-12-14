/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141867
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
    var_14 |= ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) >= ((+(((6433084770511211184ULL) * (((/* implicit */unsigned long long int) 1152921504606846975LL)))))));
                    var_16 *= ((/* implicit */_Bool) max((var_4), (max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */int) (signed char)15))))));
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_2] [i_2]);
                }
            } 
        } 
    } 
}
