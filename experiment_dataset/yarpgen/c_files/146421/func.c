/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146421
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6071363296579629878LL)) ? (8438036254177000637LL) : (-6876078065901489290LL)))) & (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)19918)))))), (((/* implicit */unsigned long long int) min((arr_1 [(signed char)18]), (((/* implicit */short) max((var_12), (var_6)))))))));
        var_19 = ((/* implicit */int) var_12);
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1799840216)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) >= (((var_7) + (((/* implicit */unsigned long long int) var_4))))))) >= ((+(((/* implicit */int) var_9))))));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * ((-(var_17))))) * (min((min((((/* implicit */long long int) var_13)), (var_16))), ((-(var_16)))))));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)99))))))))));
        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))))) : (((/* implicit */int) var_10))))));
    }
    var_24 = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)167)), (var_1)))))))));
    var_25 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) ? (2097151) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) (short)19144)))) : (arr_0 [i_2] [i_2])));
        arr_10 [i_2] [10] = ((((/* implicit */_Bool) 2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-22417))))) : (((var_17) - (((/* implicit */long long int) ((/* implicit */int) var_2))))));
        arr_11 [(_Bool)1] = ((arr_8 [i_2]) != (arr_8 [i_2]));
    }
    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) ((((arr_14 [i_3 - 1]) >= (arr_14 [i_3 - 1]))) ? (min((((/* implicit */unsigned long long int) -4501852060270361355LL)), (arr_14 [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65531))))));
        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3])))))));
        var_29 &= ((/* implicit */unsigned int) (short)-8986);
    }
}
