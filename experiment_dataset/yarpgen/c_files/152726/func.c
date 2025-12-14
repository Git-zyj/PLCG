/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152726
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
    var_20 = ((/* implicit */unsigned short) var_19);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) max((((/* implicit */short) arr_0 [10] [10])), ((short)13962))))))))));
                    var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((signed char) 2147483647)))))), (max((max((((/* implicit */unsigned long long int) var_14)), (493494708762307832ULL))), (((unsigned long long int) var_10)))));
                }
            } 
        } 
    } 
}
