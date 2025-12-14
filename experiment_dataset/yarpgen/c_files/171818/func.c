/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171818
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 |= ((/* implicit */_Bool) arr_2 [i_0]);
        var_17 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (short)-1354)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (17592186044400LL)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_8))));
            var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_2]))));
            var_20 = arr_5 [i_2] [(short)4] [i_1];
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2]))));
        }
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_3] = arr_5 [i_1] [i_3] [i_3];
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                var_22 &= ((/* implicit */signed char) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_3])))));
                var_23 ^= ((/* implicit */_Bool) (-(var_7)));
                arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1] [i_4]))) / (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 - 1] [i_1] [i_1] [i_1]))) : (var_0)))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_1])))))));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            var_25 &= ((/* implicit */long long int) 2496730085U);
            var_26 ^= ((/* implicit */_Bool) (+(arr_3 [i_1] [i_5])));
            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_5] [i_5]))) : (-4275196725193489659LL)));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) var_7);
            var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1])) >> (((var_6) + (2288590533803885538LL)))));
            var_30 ^= ((/* implicit */signed char) var_6);
        }
        arr_21 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1]))))));
        arr_22 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4275196725193489658LL))))) >= (((/* implicit */int) arr_12 [i_1] [i_1] [2U] [i_1]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_31 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)98)) ? (-2111386537339389482LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_7])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_20 [(short)5] [i_7] [i_7])) + (((/* implicit */int) (signed char)11))))) : (((long long int) (signed char)53))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((((var_5) ? (((/* implicit */int) var_12)) : (arr_4 [10U]))) ^ (arr_3 [i_7] [i_7]))))))));
    }
    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */int) ((long long int) var_0));
        arr_30 [i_8] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((int) var_6))) & (4275196725193489649LL)));
        arr_31 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 + 3] [i_8]))) : (var_13)))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((~(arr_28 [i_8 + 3]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)53)) == (var_4))))))))))));
    }
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (-(((/* implicit */int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : ((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) var_2))))))))));
}
