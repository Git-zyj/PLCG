/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115104
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
    var_14 = (-(max((max((((/* implicit */unsigned long long int) var_6)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)23))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) 1012522326)) : (5U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_0]), ((short)-29505)))) < (((/* implicit */int) arr_0 [i_0])))))) : ((~(((9223372036854775789LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((-644266043) + (2147483647))) >> (((var_1) - (7505063119701692212LL))))), ((-(((/* implicit */int) arr_0 [i_0]))))))) ? (674100946) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */int) (short)-15)) + (43))) - (22)))))) ? (((/* implicit */int) (signed char)6)) : ((~(((/* implicit */int) (short)-4))))))));
        arr_2 [2LL] = (!(((/* implicit */_Bool) arr_0 [i_0])));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 674100968)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1])), (arr_4 [i_1 + 2] [i_1 + 1])))))))));
        var_17 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_4 [i_1] [i_1 - 2])))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) min(((~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2])))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))) != (var_7)))) >> (((-2147483625) + (2147483640)))))));
    }
    var_18 += ((/* implicit */signed char) max(((!(((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_6))))))), ((!(((((/* implicit */int) (unsigned short)41696)) <= (((/* implicit */int) var_6))))))));
}
