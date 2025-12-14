/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105690
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
    var_13 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) (+(((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) & (2013265920U)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_8)) % (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)1811))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (3821757535U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) && (((/* implicit */_Bool) var_9))))))), (max((((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (short)-1841)) : (((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) (signed char)-91))))))));
        var_16 = ((((/* implicit */unsigned long long int) arr_2 [(short)6])) >= (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)32759)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1811)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1293))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (max((arr_2 [10LL]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        arr_3 [i_0] &= ((/* implicit */_Bool) var_4);
        var_18 += ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (18446744073709551612ULL))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 979224578)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (signed char)125))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) / (18446744073709551593ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)-5117)) == (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32766))))));
        var_20 = ((/* implicit */unsigned char) var_0);
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) > (((/* implicit */int) arr_5 [(_Bool)1] [(short)14]))))) != (((/* implicit */int) (unsigned char)142))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [4LL])) >= (((/* implicit */int) var_7))))))));
    }
    var_22 |= ((/* implicit */unsigned short) var_7);
    var_23 = ((/* implicit */unsigned int) (signed char)34);
}
