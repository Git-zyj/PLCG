/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171603
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
    var_17 = ((/* implicit */long long int) var_16);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) var_7);
        var_19 += ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-71)), (min((arr_3 [i_0]), (arr_3 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) (short)-11200))))), (min((((/* implicit */long long int) (short)-11200)), (var_5)))))) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? (((/* implicit */int) arr_4 [i_1])) : ((-(((/* implicit */int) arr_7 [5U]))))))));
        var_22 = ((/* implicit */unsigned int) arr_7 [i_1]);
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        var_24 |= arr_10 [i_2] [i_2];
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_10 [i_2] [(signed char)22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11200))) : (17410652511633967499ULL)))))) ? (min((((/* implicit */unsigned int) (short)11202)), (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_8 [i_2 + 2] [i_2 + 2]))))) : (arr_8 [i_2] [i_2 - 1]))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) min((arr_10 [i_2 + 1] [i_2 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2])))))));
        var_26 = ((/* implicit */_Bool) (+(arr_9 [i_2] [i_2])));
        var_27 = ((/* implicit */unsigned int) arr_10 [i_2] [i_2 - 1]);
    }
    var_28 += ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13797050537164292968ULL)))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)-11196)), (var_11)))) : (max((var_5), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_1)), ((short)11973)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11196))) : (16656000242303590220ULL))) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(var_12)))), (var_0))))));
    var_29 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (min((var_6), (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
}
