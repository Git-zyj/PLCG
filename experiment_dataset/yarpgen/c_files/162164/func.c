/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162164
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
    var_12 = ((/* implicit */short) max((var_2), (((/* implicit */unsigned int) (unsigned char)163))));
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned int) max((((/* implicit */int) (short)-2411)), (((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? ((~(((/* implicit */int) var_6)))) : (((arr_1 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)9)))) % ((~(arr_0 [i_0 - 1])))));
        arr_3 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-72))))) ? (((/* implicit */unsigned long long int) ((var_3) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) : ((+(arr_0 [i_0])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned int) (unsigned char)240);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61440))))) : (((/* implicit */int) var_10))))) ^ (((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (short)-1))))) ? (max((((/* implicit */unsigned int) var_10)), (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28563)))))));
    }
    for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)173)) ? (var_5) : (arr_8 [i_2 + 2]))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)11)) + (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_7 [i_2])) + (((/* implicit */int) var_8))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 9223372036854775807LL))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_7 [i_2]), (arr_7 [i_2])))), (((((/* implicit */_Bool) 4)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32752)))))))) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) var_10)))))));
    }
    var_22 &= ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (18446744073709551615ULL)))))) & (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38806))))) << (((max((var_1), (((/* implicit */long long int) (signed char)35)))) - (15LL)))))));
}
