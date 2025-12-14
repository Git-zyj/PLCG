/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157974
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
    var_14 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0 - 2] = ((/* implicit */long long int) arr_1 [i_0 - 2]);
                arr_6 [i_0 - 1] = ((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((3405678132U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_9 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((arr_3 [i_0]), (arr_1 [i_1])))), (((arr_3 [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 6064614109307682505ULL)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [5ULL]))))), (-629181442939241289LL)))));
            }
        } 
    } 
}
