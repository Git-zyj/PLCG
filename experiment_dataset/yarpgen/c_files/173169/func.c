/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173169
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
    var_11 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32752)), (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) (short)32760))));
                    var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_2 - 2] [i_0])))) ? (max((((/* implicit */int) (short)32760)), (arr_5 [i_0] [i_0] [i_0] [i_2 + 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((716972029), (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_0]))))))))));
                }
            } 
        } 
    } 
}
