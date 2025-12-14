/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184085
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */long long int) (unsigned char)40)))), (((/* implicit */long long int) (unsigned char)216))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) ^ (((((/* implicit */_Bool) (short)-1)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-15))))))));
        var_10 = min(((~(12290740106111795482ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == ((+(arr_2 [i_0] [i_0])))))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 13197746131178241493ULL)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1 - 4] [i_1]))))));
        arr_6 [1ULL] = ((/* implicit */long long int) arr_1 [i_1 + 1] [i_1]);
    }
    for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_12 [i_3 + 2] [i_2 - 1] [i_2 - 3]))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_2 - 2] [i_3 - 2]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_2 - 3] [i_3 + 2])))) : (((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_3 + 1])) - (var_6)))));
        }
        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_12 [i_2] [i_2 - 2] [i_4 - 1])) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 2])) && (((/* implicit */_Bool) var_1)))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-7)))), (((((/* implicit */_Bool) arr_15 [1LL] [i_4] [1LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_4] [i_4] [i_2]))))))), (((((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))))) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1]))))))))));
        }
        var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (short)8483)), (10791561099615298844ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_8 [i_2])) + (126))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -515567002706066379LL))) ? (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_2 - 1] [i_2 - 2]) : (arr_14 [i_2 - 2] [i_2 - 2]))) : (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
        arr_16 [i_2 - 2] = ((/* implicit */unsigned short) var_2);
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((var_2) << (((max((var_7), (((/* implicit */long long int) var_3)))) - (3271975703197235552LL)))))))))));
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (short)(-32767 - 1)));
    var_21 = ((/* implicit */unsigned long long int) -3992497851976413814LL);
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
