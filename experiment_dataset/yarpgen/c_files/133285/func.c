/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133285
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
    var_20 |= var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((arr_0 [(unsigned short)11] [i_1 - 1]) <= (((/* implicit */unsigned long long int) 223051085U)))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19112))) : (1572864U))))));
                arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 12383196376954362312ULL)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 1])) <= (((/* implicit */int) (unsigned short)49425))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 1230480989U)))), ((!(((/* implicit */_Bool) 4293394437U)))))))));
            }
        } 
    } 
}
