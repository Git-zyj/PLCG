/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11328
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
    var_14 = (unsigned short)0;
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 2])) / (var_3)))) ? ((~(((/* implicit */int) arr_4 [i_2 + 1])))) : ((-(var_4)))));
                    var_17 = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6)))))))));
}
