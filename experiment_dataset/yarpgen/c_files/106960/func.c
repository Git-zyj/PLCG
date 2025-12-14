/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106960
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (4573939137010507756LL))), (var_8))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)1])))));
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (short)32739))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) max((arr_0 [i_0] [i_0 - 1]), ((short)-32747))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [12ULL])) << (((var_9) - (2193659350U)))))));
    }
    var_19 = ((/* implicit */long long int) var_9);
    var_20 = ((/* implicit */int) (unsigned short)10238);
    var_21 = ((/* implicit */short) var_6);
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-32754)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3411824184702436142LL)) ? (((/* implicit */unsigned long long int) -4573939137010507750LL)) : (5225655809202717373ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-32747), ((short)-32740))))) : (var_7)))));
}
