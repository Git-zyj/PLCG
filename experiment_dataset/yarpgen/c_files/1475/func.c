/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1475
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [(_Bool)1] [i_1] |= ((/* implicit */unsigned short) ((((arr_1 [(short)2]) || (arr_1 [2ULL]))) ? (max((var_0), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [(_Bool)1]), (arr_1 [2U])))))));
                    var_10 -= ((signed char) var_4);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) var_9);
    var_12 -= ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_5)) ? (4294967295U) : (var_9))))) % (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 0U)))))))));
}
