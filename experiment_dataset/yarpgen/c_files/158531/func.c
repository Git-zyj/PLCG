/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158531
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((var_6) << (((/* implicit */int) var_5))))), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_6), (((/* implicit */long long int) var_3)))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_11)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) var_9)) >> (((((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)-79)), ((unsigned short)56694))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3899350163U)))))))) - (65451)))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)78)) && (((/* implicit */_Bool) (signed char)85))))), (var_1)));
                var_16 = ((/* implicit */short) ((max((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_6))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)88)) - (((/* implicit */int) (unsigned short)12056))))))) + (((/* implicit */long long int) (-(var_11))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_10))));
}
