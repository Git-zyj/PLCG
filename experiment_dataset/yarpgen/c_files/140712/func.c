/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140712
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
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */short) (-(((/* implicit */int) (short)18942))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 2] = ((/* implicit */short) ((arr_1 [i_0 - 2]) != (arr_1 [i_0 - 1])));
        arr_3 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ^ (14733516560585067296ULL)));
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (1073741824)));
            var_21 = ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])));
            arr_7 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) 2097151))) ? (((/* implicit */int) ((short) arr_0 [i_1]))) : (((/* implicit */int) (signed char)-76)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 133955584))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1]))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) (unsigned short)29109))))));
        var_23 |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (829281581))));
        /* LoopSeq 3 */
        for (short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2])) : (((/* implicit */int) (unsigned char)32)))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3337205576U)) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (-1073741825)));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_15 [i_2] [i_4] = ((/* implicit */short) (signed char)80);
            var_25 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2 - 2]))));
        }
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_18 [i_2] [i_5] = ((/* implicit */unsigned long long int) ((arr_16 [i_2 - 1] [i_2 - 1] [i_5]) > (((/* implicit */int) (unsigned char)127))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (arr_5 [i_2 + 1]) : (7673565777885330184ULL)));
            arr_19 [i_2 + 1] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)0)))) > (9963361170877337818ULL)));
        }
        arr_20 [i_2] [i_2] = arr_1 [i_2];
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
    {
        var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_22 [i_6 + 1])))) ? (((/* implicit */int) arr_21 [i_6 - 1])) : (((int) (unsigned char)255))));
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_6]))));
    }
}
