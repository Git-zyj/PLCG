/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101672
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
    var_13 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (0)))) <= (min((72048797944905728LL), (3717890425848852881LL))))))));
    var_14 = ((/* implicit */signed char) (short)-11638);
    var_15 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)18237))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_16 = var_6;
        var_17 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [1U] [(short)2]), (((/* implicit */short) (unsigned char)142))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1]))) : (303750725U)))) & (var_12));
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [(_Bool)0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 3991216571U);
    }
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */short) (+(((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [7]))) : (-7492649949840012077LL))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [(unsigned char)0]))) + (1626761191U))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1 + 1] [(_Bool)1])))))));
    }
    var_20 = ((/* implicit */unsigned int) min((min((var_6), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_7))));
}
