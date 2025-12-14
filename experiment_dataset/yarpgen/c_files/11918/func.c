/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11918
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
    var_11 = var_1;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3287432878U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [4LL] [i_1] [4LL])))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)15228)), (var_2))), (var_2))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_0)))) : (1927974124)));
}
