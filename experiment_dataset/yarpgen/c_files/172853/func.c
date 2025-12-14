/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172853
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_7);
        arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) : (min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))))) == (var_7))))));
        arr_9 [i_1] = ((/* implicit */long long int) var_14);
        var_21 = ((long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) != (((/* implicit */int) arr_0 [i_1] [(signed char)15]))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2] [(unsigned char)12]))))) : ((~(9223372036854775785LL)))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned short)18404))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_8 [i_2] [i_2]))))) : (((unsigned int) arr_8 [i_2] [i_3]))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((int) 2560908663622865808ULL));
            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) arr_0 [i_2] [i_4])));
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(arr_10 [i_2])));
            arr_17 [i_2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_14))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_21 [i_2] [i_2] [i_5] = ((/* implicit */_Bool) 17931640143322154652ULL);
            arr_22 [i_2] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) (short)-8945)) : (((/* implicit */int) (unsigned short)8119))))));
            arr_23 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (var_1)));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_11))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (unsigned short)34704))));
            var_28 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)42932)) ? (((/* implicit */int) (unsigned short)21057)) : (((/* implicit */int) arr_24 [i_2])))));
            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) || (((_Bool) var_2)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (arr_3 [i_2]))))));
        }
        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((min((var_18), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))))));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
    {
        var_31 *= var_8;
        arr_29 [i_7] = ((/* implicit */int) (-(max((8811996868591577780LL), (((/* implicit */long long int) (!(var_2))))))));
    }
    var_32 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((var_1) - (828516910)))))), (var_14)))));
}
