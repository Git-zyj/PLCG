/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161637
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) 0ULL))) ? (((/* implicit */unsigned long long int) 676513522U)) : (4315313228617563807ULL))) != (((/* implicit */unsigned long long int) max((0U), (3618453761U))))));
                var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 3609925049U)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_2 [i_0 + 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 2]), (4294967290U))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((((/* implicit */_Bool) 3606328453U)) ? (((/* implicit */unsigned long long int) var_6)) : ((~((-(var_2))))));
}
