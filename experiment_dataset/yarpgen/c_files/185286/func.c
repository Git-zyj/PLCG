/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185286
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((((0U) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_0 [i_0]), (var_13)))) : (((/* implicit */int) max((arr_2 [(unsigned char)4] [(unsigned char)4]), (var_1)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (short)-3916)))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) arr_2 [(unsigned short)0] [(unsigned short)0])) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) min(((short)3), ((short)3))))))))))));
        arr_3 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)20)) - (((/* implicit */int) (short)-23))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-58))));
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) >= (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_0)) - (23078)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) (signed char)-64);
            var_19 = ((/* implicit */signed char) var_6);
            var_20 -= ((/* implicit */unsigned long long int) (short)32767);
            var_21 -= ((/* implicit */unsigned short) var_4);
        }
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) arr_10 [i_1] [i_1 + 1] [i_1]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (signed char)-7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned char i_4 = 4; i_4 < 18; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] |= ((/* implicit */unsigned short) var_4);
        arr_16 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [(unsigned short)24] [i_4])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) ^ (arr_9 [i_4] [i_4] [0U])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) (short)-7)) | (((/* implicit */int) (unsigned short)32729))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_10))));
}
