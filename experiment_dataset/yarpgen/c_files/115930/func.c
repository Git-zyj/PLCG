/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115930
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
    var_10 = ((/* implicit */long long int) ((signed char) ((long long int) var_2)));
    var_11 |= ((/* implicit */unsigned short) var_2);
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_7))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_13 += ((/* implicit */signed char) arr_1 [i_0 - 3]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) <= (18155842359317483340ULL))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_5 [i_1] [i_1]))));
        var_15 = ((/* implicit */unsigned short) arr_5 [(unsigned short)7] [i_1]);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((long long int) arr_4 [(unsigned short)4])) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)8]))))))));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])))) && (((/* implicit */_Bool) max((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_12 [6LL] [i_3] [i_2] = ((/* implicit */signed char) ((arr_11 [i_2] [i_2]) & (((/* implicit */int) arr_4 [i_2]))));
            var_18 = ((/* implicit */signed char) arr_9 [17LL] [i_3]);
        }
        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((short) arr_8 [i_4 - 1] [2LL]));
            var_20 = ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2]);
        }
        var_21 |= ((/* implicit */unsigned char) ((unsigned int) arr_7 [i_2]));
        arr_15 [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_2]));
        arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2])) * (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_5 [i_5] [i_5]);
        var_22 = ((/* implicit */unsigned long long int) arr_9 [(short)8] [i_5]);
        var_23 = ((/* implicit */signed char) arr_4 [i_5]);
        var_24 = ((/* implicit */unsigned int) arr_9 [i_5] [i_5]);
        var_25 = ((/* implicit */short) ((unsigned short) arr_6 [i_5] [i_5]));
    }
}
