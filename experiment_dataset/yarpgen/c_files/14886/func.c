/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14886
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_0 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)-5879)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)5890))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5879)) ? (5462399262073394927LL) : (((/* implicit */long long int) 780185557)))))));
    }
    var_13 -= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-5884)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_4))))))) ? (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8548373120506267383LL)) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5904)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_8 [i_1]))));
        var_16 = ((/* implicit */unsigned short) ((var_3) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_1]))))));
        var_17 *= ((/* implicit */unsigned char) arr_8 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_18 += ((/* implicit */_Bool) (signed char)-2);
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15949)) >> (((((/* implicit */int) var_1)) - (77)))));
    }
    for (int i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3])), (min((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_3 + 1]))))), (min((-123806367236735721LL), (((/* implicit */long long int) arr_13 [i_3]))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (unsigned char)79))))) <= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) & (8409887762123167083LL))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */int) arr_12 [i_3])) << (((((/* implicit */int) (unsigned char)255)) - (242))))) : (((/* implicit */int) arr_13 [i_3 + 2]))))) : ((-(1404360710U)))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 2])) ? (((/* implicit */int) arr_13 [i_3 - 1])) : (((/* implicit */int) arr_12 [i_3 - 1]))))) ? ((+(((/* implicit */int) arr_13 [i_3 + 2])))) : (((((/* implicit */int) arr_13 [i_3 + 2])) / (((/* implicit */int) arr_13 [i_3 - 1]))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (long long int i_5 = 4; i_5 < 15; i_5 += 1) 
            {
                {
                    var_21 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max(((signed char)2), (((/* implicit */signed char) (_Bool)1))))))) ? (((/* implicit */int) (!(arr_13 [i_3 - 2])))) : (((/* implicit */int) (!(arr_13 [i_5 + 1]))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)76)) ? ((~(((((/* implicit */_Bool) (unsigned char)163)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 - 2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5 - 3] [i_5 - 4])) ? (((/* implicit */int) arr_18 [i_5 + 2] [i_5 - 4] [i_3 - 2])) : (((/* implicit */int) (unsigned char)159)))))));
                    var_23 = ((/* implicit */_Bool) arr_16 [i_3] [i_5]);
                    arr_21 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) var_12);
}
