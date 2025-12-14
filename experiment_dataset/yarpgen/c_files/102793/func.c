/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102793
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 8; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)0])) >= (((/* implicit */int) (_Bool)0)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1831))) / (var_9)))));
        arr_3 [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (var_17) : (0U)));
    }
    for (short i_1 = 4; i_1 < 8; i_1 += 1) /* same iter space */
    {
        arr_6 [(unsigned short)9] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_14))))))) : (((((/* implicit */unsigned long long int) arr_5 [i_1])) + (((var_3) | (((/* implicit */unsigned long long int) var_17)))))));
        arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_1))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))) - (4294967273U))))));
    }
    var_18 = ((/* implicit */long long int) var_12);
    var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2]))) != (((/* implicit */unsigned long long int) arr_10 [i_2]))));
        arr_12 [i_2] = (~(arr_9 [i_2]));
    }
    for (short i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1799360889004026258ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)2047), (((/* implicit */unsigned short) var_2))))))))));
        arr_16 [(unsigned char)11] = ((/* implicit */unsigned short) (-(arr_15 [i_3])));
        var_22 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(283602510869420115LL)))) ? (((/* implicit */int) var_11)) : ((+(arr_15 [12])))))));
        arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) 7890191420986404292LL))), (((((/* implicit */_Bool) arr_15 [14LL])) ? (arr_14 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) 911210972))));
        var_23 = ((/* implicit */long long int) ((arr_13 [i_3] [9ULL]) | (((/* implicit */unsigned long long int) ((int) (unsigned short)63489)))));
    }
    for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((unsigned int) (unsigned short)14756))))) ? (((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_18 [15LL] [(unsigned short)20])))))) : (((((/* implicit */_Bool) var_4)) ? (((long long int) arr_20 [(unsigned short)21])) : (((/* implicit */long long int) -1716325397))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [(unsigned short)19]))) <= (16580582841864431375ULL)));
            arr_25 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_0))) <= (var_1)));
            arr_26 [0ULL] [(unsigned short)23] = ((/* implicit */signed char) (short)-10642);
            var_25 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)45)) | (((/* implicit */int) arr_18 [i_4] [i_5])))));
        }
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_29 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) >> (((67043328) - (67043316)))))))) ? (2147483647) : ((~(((/* implicit */int) (unsigned short)63489))))));
            var_26 = ((/* implicit */unsigned int) arr_22 [i_4 + 1] [i_6] [i_4]);
            arr_30 [i_4] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11045095906759697503ULL)) ? (2179351934604913286LL) : (283602510869420115LL)))) ? (33554432) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [(_Bool)1])))))))), (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_4 + 1] [i_6]) : (arr_19 [i_4 - 2] [i_6])))));
        }
        for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            var_27 = ((/* implicit */long long int) var_14);
            arr_34 [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((((var_10) + (9223372036854775807LL))) << ((((+((+(((/* implicit */int) arr_20 [i_4])))))) - (57601)))));
        }
        var_28 = ((/* implicit */int) 17592186044415ULL);
        arr_35 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_4] [(unsigned short)16] [(unsigned short)16])) ? (((/* implicit */int) (unsigned short)18340)) : (((/* implicit */int) (short)11170))))) >= (arr_22 [i_4 - 2] [i_4 - 1] [i_4 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_31 [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (7401648166949854113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    }
    var_29 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((-1720453451) <= (((/* implicit */int) var_5))))), (((unsigned long long int) var_14))));
}
