/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15525
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [(short)10] [11LL] = ((/* implicit */long long int) min(((+(arr_2 [i_1] [i_0] [i_0]))), (((arr_2 [i_0] [(unsigned char)13] [i_0]) - (arr_2 [i_1] [(unsigned short)11] [i_0])))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    arr_10 [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10726)) ? (var_10) : (((/* implicit */int) arr_3 [i_0]))))) ? (max((((/* implicit */long long int) (unsigned short)54833)), (arr_0 [i_0] [(_Bool)1]))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)54797)), (var_3))))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_2])) ? (arr_7 [i_0] [i_2 + 1] [i_2]) : (arr_4 [i_0] [i_2 + 1] [i_2 - 2])))) ? (((/* implicit */int) (unsigned short)54809)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10724)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8644))) : (arr_9 [i_0] [8ULL] [i_0])))) || (((/* implicit */_Bool) var_5)))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)384)))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */int) ((((arr_0 [i_0] [i_3]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_3] [i_1] [(signed char)0] [i_0])) + (66)))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)409)) ^ (var_7)))) < (((arr_5 [i_0] [(_Bool)1] [i_3]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-432)))))));
                    var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0]))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    arr_19 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10728)) ^ (((/* implicit */int) (signed char)-7))));
                    arr_20 [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_9 [i_0] [i_1] [i_4])));
                    var_16 = ((/* implicit */unsigned short) arr_18 [i_0] [i_4]);
                    var_17 = ((/* implicit */signed char) ((arr_7 [i_0] [i_1] [i_4]) != (((/* implicit */int) arr_16 [i_1] [i_0]))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (-(((arr_4 [i_5] [8U] [i_5]) | ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_5 + 2])) : (((/* implicit */int) (unsigned short)54810))))))));
        var_20 = ((/* implicit */unsigned int) (unsigned char)2);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [i_6] [i_6]) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) arr_26 [i_6] [(short)7]))))) ? (((/* implicit */int) var_8)) : (((arr_26 [i_6] [i_6]) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) arr_26 [i_6] [i_6]))))));
        var_22 = ((/* implicit */short) (unsigned short)61919);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_5))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_23 [i_6] [i_6]) & (arr_23 [(signed char)14] [i_6]))) - (((((/* implicit */_Bool) (short)396)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9173))))))) && (min((arr_24 [i_6] [i_6]), (arr_26 [i_6] [i_6])))));
        arr_27 [(short)4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3584)) ? (222716895) : (222716895)));
    }
    var_25 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14885733604053434281ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))), (max(((short)9172), ((short)23544)))));
}
