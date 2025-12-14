/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176918
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 1] [i_1 - 1] = ((/* implicit */short) max((max((48255019U), (3174794005U))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_7 [i_0] [i_0])))))))));
                var_19 |= ((/* implicit */unsigned short) (-(max((max((var_3), (((/* implicit */unsigned long long int) 4246712268U)))), (((/* implicit */unsigned long long int) var_9))))));
                var_20 -= ((/* implicit */short) max(((((!(arr_5 [i_0] [(unsigned short)17] [i_1 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_15)))), ((((!(((/* implicit */_Bool) 4246712285U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)20264)) ? (14053281576450957838ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63415)) ? (((/* implicit */int) (unsigned short)12553)) : (((/* implicit */int) (_Bool)1)))))))));
}
