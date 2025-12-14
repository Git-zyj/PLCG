/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179880
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((var_8) / (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))))) | (min((arr_1 [i_0]), (((/* implicit */long long int) var_14))))));
        arr_4 [i_0] [(short)10] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_6)) - (28276)))))) && (((/* implicit */_Bool) var_15))))) > (((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_0 [i_0])) + (6124)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_8 [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (~(var_2)))) % (var_15))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)256)))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_8) + (2147483647))) << (((((/* implicit */int) ((signed char) var_4))) - (89)))))) ? (((((((/* implicit */int) (unsigned char)7)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) (_Bool)1))))))))))));
        var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_4), ((signed char)-68)))) : (((/* implicit */int) var_0))))));
    }
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-85)) - (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_10)))) != ((+(((/* implicit */int) (signed char)81)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) >> (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) arr_5 [(_Bool)1])), (2723746485084468816ULL)))))));
        arr_11 [i_2 - 1] = ((/* implicit */short) (-(((int) var_6))));
        arr_12 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5991))) ^ (var_15)))) || (((4265670577235386890LL) > (arr_9 [i_2]))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) % (((/* implicit */int) ((short) var_7))))) <= ((+(((/* implicit */int) var_0)))))))));
}
