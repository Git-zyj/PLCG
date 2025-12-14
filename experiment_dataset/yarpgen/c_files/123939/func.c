/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123939
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_2 [i_1] [i_2]), (arr_2 [i_1] [i_2])))))))));
                    var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-7)))) && ((!(((/* implicit */_Bool) var_11))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    var_20 = var_10;
}
