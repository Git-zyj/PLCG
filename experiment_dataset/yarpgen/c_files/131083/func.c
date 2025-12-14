/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131083
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
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) (((!(((/* implicit */_Bool) 268434432)))) ? (-1226993851) : (((/* implicit */int) var_5)))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (31ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)8))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29106))) : ((-9223372036854775807LL - 1LL))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((unsigned char) arr_2 [i_0]));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [6ULL])) + ((-(((/* implicit */int) var_5))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)25)) : (var_7)))) ? ((-(var_7))) : (((/* implicit */int) arr_3 [i_0])))))));
                    arr_8 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) | (((arr_0 [i_1] [i_2]) * (((/* implicit */unsigned long long int) var_11))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((short) arr_5 [i_0] [(signed char)2])))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) : (var_3))) >= (((((/* implicit */_Bool) (short)27207)) ? (((/* implicit */int) arr_2 [(unsigned char)14])) : (((/* implicit */int) arr_3 [i_3]))))))) % (((/* implicit */int) arr_5 [i_3] [(unsigned char)2])))))));
        var_23 = ((/* implicit */signed char) var_14);
        arr_12 [i_3] [i_3] = ((/* implicit */int) var_2);
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431)) ? (33554431) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [(short)16]))))))) ? (((/* implicit */int) (unsigned short)56688)) : (((int) min((arr_0 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3]))))))))));
    }
}
