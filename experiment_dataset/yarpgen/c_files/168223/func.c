/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168223
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))));
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) >= ((~(((arr_1 [0U]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57230)))))))));
        var_17 = ((/* implicit */unsigned short) var_7);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((((/* implicit */_Bool) max((10U), (3116960028U)))) ? (((/* implicit */long long int) arr_4 [i_1])) : (max((((/* implicit */long long int) (signed char)2)), (arr_5 [i_1]))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)255))))))))))));
        arr_6 [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)8321)))) + (((/* implicit */int) (!((!(((/* implicit */_Bool) 1159155038U)))))))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (10U)))) ? (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) arr_3 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (~((~((~(arr_5 [i_1])))))));
    }
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 1019148321787129415ULL))));
}
