/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163131
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */long long int) ((arr_3 [i_0]) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [2]))) : (arr_2 [i_1])))) ? (min((((/* implicit */unsigned int) var_7)), (1174205139U))) : (min((((/* implicit */unsigned int) -913174633)), (arr_3 [i_0])))))));
                arr_6 [12U] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) -2147483636)) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) 0)) ? (var_0) : (-671724636192901056LL))))), (min((((/* implicit */long long int) var_8)), ((-(var_0))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_9);
}
