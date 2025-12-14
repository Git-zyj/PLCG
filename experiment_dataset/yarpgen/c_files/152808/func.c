/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152808
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
    var_17 = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) (short)32767)) ? (11628575214754050447ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((int) (unsigned short)23211))) ? (((int) (_Bool)1)) : (((/* implicit */int) ((signed char) 7915927227696760459ULL))))));
        var_20 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) max((var_15), (((/* implicit */short) var_1))))), (((((/* implicit */_Bool) (short)-26319)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_1 [2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3))))))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 1008806316530991104ULL))) ? (((unsigned long long int) ((unsigned long long int) (short)(-32767 - 1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) var_13)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))));
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (short)26323)), (-1LL))), (((/* implicit */long long int) min(((unsigned short)58624), (((/* implicit */unsigned short) (_Bool)1)))))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26318))) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))));
        var_23 += ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_1]), (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 16606208466570195314ULL)) ? (1879048192) : (1126263191))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6911)) ? (((/* implicit */int) (short)-11161)) : (((/* implicit */int) (signed char)-86))));
        var_26 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (12600909781223955670ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))));
    }
}
