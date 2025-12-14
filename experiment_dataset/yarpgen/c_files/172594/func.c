/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172594
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
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) var_9)), (var_6))))), (114262346U)));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) 0U))), (((3754857557062915566LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (max((var_5), (((unsigned long long int) 18446744073709551615ULL)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) (~(-2907287923229602996LL)))) ? ((-(-1245571003))) : (((/* implicit */int) (unsigned short)6554))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (arr_4 [i_1] [i_1]))));
        var_18 = ((/* implicit */signed char) 1072132306U);
    }
}
