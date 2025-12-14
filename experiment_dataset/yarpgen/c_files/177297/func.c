/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177297
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((var_1) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */unsigned long long int) var_3))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (((var_0) ^ (((/* implicit */int) var_8)))) : (var_0)));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_1 + 1])))) ? (arr_0 [i_1]) : (((/* implicit */int) ((unsigned short) ((((-1349581749) + (2147483647))) << (((((/* implicit */int) arr_1 [i_1])) - (164)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((var_2) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83)))));
        var_19 = ((/* implicit */unsigned char) ((var_13) << (((arr_10 [i_2 + 1]) - (2932959857U)))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (1ULL) : (18446744073709551614ULL)));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 12201258668464258515ULL)) ? (2066456128032271585ULL) : (((/* implicit */unsigned long long int) 2293627852U))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-45)) ? (2001339443U) : (((/* implicit */unsigned int) 1517277959))));
                arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_3] [(signed char)10] [i_4 - 1]))) * (arr_5 [6U])));
            }
            arr_18 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_10 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_2 + 1])))))));
            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_2 + 1] [i_5] [i_2 + 1]))));
            arr_21 [i_2] [(unsigned short)1] [(unsigned short)1] = arr_8 [i_2 + 1] [i_2 + 1];
        }
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) + (arr_0 [(signed char)14]))) : (arr_9 [i_2 + 1]))))));
    }
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 = ((/* implicit */short) var_8);
    var_28 += ((/* implicit */unsigned int) (!(var_14)));
}
