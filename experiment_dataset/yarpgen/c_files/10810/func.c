/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10810
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) min((var_16), (((/* implicit */unsigned char) var_3))))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (var_13)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_7) > (((/* implicit */int) var_14)))))))) : (max(((~(var_9))), (var_9)))));
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9744088728171543865ULL)) ? (9744088728171543865ULL) : (((/* implicit */unsigned long long int) -129100091))))));
                arr_5 [i_0 + 1] = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1]))))) >= (max((((var_0) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (unsigned short)44923)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)0])))))));
            }
        } 
    } 
}
