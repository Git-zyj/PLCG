/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148256
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-39))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_4))) : (((/* implicit */unsigned long long int) var_8))))) ? (var_7) : (max((((/* implicit */int) ((var_14) > (var_8)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-39))))) ? (max((max((((/* implicit */unsigned int) arr_1 [(signed char)18] [9ULL])), (arr_0 [i_0]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [(short)19]))))) : (((/* implicit */unsigned int) ((int) min(((signed char)38), ((signed char)-39)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)9))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39)))))) : (max((((/* implicit */unsigned int) var_14)), (arr_0 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2090820454)) ? (((/* implicit */int) (short)-10532)) : (((/* implicit */int) (signed char)21)))))))), (770621333)));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) (~(18446744073709551615ULL)));
        var_20 -= ((/* implicit */int) (unsigned short)11);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) var_14)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1358)))))));
        var_21 = ((((/* implicit */int) ((short) (signed char)-21))) | (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1 - 1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) (+(((((((/* implicit */_Bool) (short)-534)) ? (var_13) : (((/* implicit */unsigned int) 383147049)))) + (((/* implicit */unsigned int) arr_6 [i_1 - 1] [i_1 + 1]))))));
    }
}
