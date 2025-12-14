/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123846
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)1) ? (248293245U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6278486163686937850LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))) : (min((((/* implicit */unsigned int) arr_1 [(unsigned short)13] [i_0])), (max((3228724930U), (((/* implicit */unsigned int) (short)16456))))))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */_Bool) var_2);
        var_18 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_5) - (1877354313U)))))) ? (((/* implicit */long long int) ((1066242333U) >> (((-64LL) + (90LL)))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) var_11)) : (-7454776950390868974LL))))));
        var_19 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1 + 1]))) ^ (3228724960U))), (((/* implicit */unsigned int) var_12))));
        var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) ((((/* implicit */_Bool) 13U)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
        arr_4 [(unsigned char)10] = ((/* implicit */unsigned char) max((((/* implicit */long long int) 644042388U)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (-7450841987611013731LL)))));
    }
    for (short i_2 = 3; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_2] [i_2 - 2])) : (((/* implicit */int) arr_1 [i_2] [i_2 + 1])))) + (21)))));
        var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_4))))) : (max((var_1), (((/* implicit */unsigned long long int) (short)-21140)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_2);
}
