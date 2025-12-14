/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10445
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_13 = ((signed char) arr_1 [i_0 - 1] [(short)3]);
            arr_4 [i_0 + 3] [i_1] [(short)0] = ((/* implicit */unsigned int) (signed char)-1);
            arr_5 [i_0 + 3] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))));
            arr_9 [(short)1] [(short)0] [i_2] = ((/* implicit */unsigned long long int) (signed char)-9);
            arr_10 [i_0 + 1] [(short)6] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [12ULL]);
            arr_11 [i_0] [i_0 + 3] [i_2] = ((/* implicit */unsigned char) max(((short)-14044), (var_11)));
        }
        var_15 = ((/* implicit */unsigned char) (+(max((9U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) var_11)) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 1])))))) ? (((/* implicit */int) (short)14049)) : ((-(((/* implicit */int) (signed char)114))))));
        arr_13 [i_0 + 2] = ((/* implicit */unsigned char) (-(11ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (short)-23819)) : (((/* implicit */int) (unsigned char)246))))));
        arr_18 [i_3] = ((((/* implicit */_Bool) (unsigned char)197)) ? (6753665556451637805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) arr_15 [i_3] [(short)2]))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14049)) + (((/* implicit */int) (signed char)105)))))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)10))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20222)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)0))))) ? (arr_20 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-25968)) || (((/* implicit */_Bool) (short)9714))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_22 [i_4])) ? (12538834408668167430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(signed char)2]))))))))));
        arr_23 [i_4] = arr_22 [i_4];
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_7))))))));
            var_21 *= ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (1328473879U));
            var_22 ^= ((/* implicit */unsigned char) var_4);
        }
    }
    for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        var_23 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)122)) > ((+(((/* implicit */int) arr_22 [i_6 + 2])))))))) % ((~(18446744073709551612ULL)))));
        var_24 -= max((min(((short)25), ((short)21583))), (var_4));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (short)12038)) : (((/* implicit */int) (short)-25091))))) ? (((((((/* implicit */_Bool) 18446744073709551575ULL)) ? (18446744073709551615ULL) : (4418182724049135104ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 1]))))) : (((/* implicit */unsigned long long int) (+(2497923663U))))));
    }
}
