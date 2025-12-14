/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144179
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_14 += ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
            var_15 = ((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1]);
        }
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_9 [i_0 - 1] [i_2] [i_3] = ((/* implicit */int) var_6);
                var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                arr_10 [i_0 - 1] [15U] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12)))))) != (((((/* implicit */_Bool) var_0)) ? (-558767376841803417LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                var_17 -= ((/* implicit */long long int) (+(arr_8 [i_3 + 1] [(unsigned short)6] [i_3 + 1])));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                arr_13 [(short)2] [i_2 + 2] [(short)2] [(unsigned short)4] = ((/* implicit */unsigned int) arr_8 [i_2 + 3] [i_2 + 3] [i_2 - 1]);
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [6LL] [6LL] [i_0])))) & ((-(4294967295U))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) >= (((/* implicit */int) arr_2 [i_0 - 1]))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_8))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4))));
            }
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((int) (signed char)55)))));
        }
        var_23 = ((short) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
        var_24 = arr_2 [i_0];
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)-2)) ? (3377699720527872LL) : (((/* implicit */long long int) 1578716522U)))) : (((/* implicit */long long int) arr_6 [i_6 - 1] [i_6 - 1] [(unsigned char)9]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-18621)) + (2147483647))) >> (((((/* implicit */int) (signed char)53)) - (38)))))) : ((~(((unsigned int) var_9))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) && (((/* implicit */_Bool) ((long long int) (signed char)-48)))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_1 [i_6]))));
    }
    var_28 = ((/* implicit */long long int) var_3);
    var_29 = ((/* implicit */unsigned int) max((var_29), (var_3)));
}
