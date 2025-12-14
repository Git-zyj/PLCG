/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135484
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
    var_10 &= ((/* implicit */short) ((var_8) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_6)))) ? (((var_4) / (((/* implicit */int) (short)-32119)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32118))))))))));
    var_11 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((9223372036854775805LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (short)32110))))))));
    var_12 -= ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)32109))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (-1659880168)))))) >= (((/* implicit */long long int) (((+(((/* implicit */int) var_7)))) >> (((min((4033216969U), (((/* implicit */unsigned int) var_0)))) - (76U))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17153)) ? (4033216947U) : (((/* implicit */unsigned int) 1424220972))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) -1424220973);
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_14 &= ((((((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 + 4])) || (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 2])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (short)6281))))) >> (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_1 [i_1] [i_1 + 3]))) - (57168U))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [i_1 + 2]) + (2147483647))) << (((((/* implicit */int) var_0)) - (107)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1659880168)), (4033216974U)))) ? (((((/* implicit */_Bool) -1007939594)) ? (((/* implicit */long long int) 1659880179)) : (5161561711029987178LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)12] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))))))));
    }
}
