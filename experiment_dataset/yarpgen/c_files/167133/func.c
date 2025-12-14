/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167133
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((min((2569317155U), (2569317155U))), (((/* implicit */unsigned int) arr_0 [0U] [0U])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_16 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-32))))));
        var_17 = ((/* implicit */int) var_12);
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) ((((/* implicit */int) var_8)) > (((((/* implicit */int) (unsigned short)64174)) & (((/* implicit */int) (short)29012))))))))))));
    var_19 = ((/* implicit */long long int) var_10);
}
