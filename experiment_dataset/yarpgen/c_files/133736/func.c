/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133736
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
    var_16 = ((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */int) (!(((/* implicit */_Bool) -1779238519)))))));
    var_17 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) - (((/* implicit */long long int) var_6))));
        arr_3 [i_0] = -1779238519;
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (1779238514)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)1531))))) : (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!((!(var_13))))))));
        arr_6 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (((var_6) << (((((/* implicit */int) (unsigned char)244)) - (221)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1]))) ? (((/* implicit */int) ((short) (-2147483647 - 1)))) : ((-(((/* implicit */int) (signed char)7))))))) : (((((/* implicit */_Bool) 1779238519)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((short) var_0)));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1779238498))));
        arr_7 [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_7)) ? ((+(1779238498))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_1 [i_1] [19U])))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1779238519)) ? (-1779238519) : (((((/* implicit */int) (signed char)87)) % (-2060256329))))) % (((/* implicit */int) (signed char)-87))));
        var_22 *= ((/* implicit */unsigned short) min((var_0), (var_1)));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_2]) << (((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (signed char)104))))) - (103)))))) ? (((int) ((((/* implicit */_Bool) (short)-19387)) ? (((/* implicit */int) (short)-4977)) : (((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (5043814988305466909ULL)))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_2])) >= (var_15))))))));
    }
}
