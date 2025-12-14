/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182117
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
    var_12 += (~(((/* implicit */int) var_3)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((1713058420U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) arr_3 [i_0])), (var_4)))))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((12891060196355679ULL) >> (((((/* implicit */int) arr_2 [(unsigned short)13] [i_0])) + (7324)))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(short)11])))))))))));
        var_14 = ((/* implicit */unsigned long long int) ((signed char) 1713058413U));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_0 [i_0]) : (arr_0 [(unsigned char)16])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) / (arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((-3LL), (((/* implicit */long long int) 1713058420U))))) / (max(((+(arr_0 [i_0]))), (((((/* implicit */_Bool) 2581908876U)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 2581908877U))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_11 [i_0]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2 - 4]))) : (1713058425U)));
        }
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) ((arr_13 [i_3]) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58729)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6806))) : (arr_14 [i_3])))) ? ((+(arr_13 [i_3]))) : (((var_7) ? (arr_14 [7ULL]) : (arr_13 [i_3])))))));
        arr_15 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)58703)) ? (arr_14 [i_3]) : (arr_14 [i_3]))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58715))))))));
        var_20 = ((/* implicit */_Bool) (((+(var_2))) >> (((((((/* implicit */int) (unsigned short)58729)) / ((-(((/* implicit */int) (unsigned short)16578)))))) + (14)))));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [(signed char)23]), (var_6)))) ? (((int) arr_13 [i_4])) : (((/* implicit */int) arr_17 [i_4]))))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_14 [3ULL]) : (arr_14 [(unsigned short)18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)166))))) <= (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (arr_14 [6ULL])))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 24; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_17 [5LL])))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1713058426U) : (arr_13 [i_4])))) ? (((((/* implicit */unsigned long long int) arr_13 [i_6])) | (7ULL))) : (((/* implicit */unsigned long long int) 521370769))))))));
                        var_23 ^= ((/* implicit */unsigned long long int) min(((~(arr_13 [i_5 - 3]))), (min((((/* implicit */unsigned int) arr_19 [i_5 - 2] [i_5 + 1])), (arr_13 [i_5 - 3])))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15220563846516064124ULL))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) ((_Bool) var_7));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) (!(((((/* implicit */int) (!(arr_17 [i_4])))) == (((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_2) - (1622010882)))))))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_26 [i_4] [(unsigned short)16]))) ? (arr_26 [i_8] [i_8 - 2]) : (((/* implicit */long long int) arr_14 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_8 - 2] [i_8 + 2] [i_8 - 1] [i_8 - 1])) == (((/* implicit */int) arr_23 [i_4] [i_8 - 2] [i_8 - 1] [i_8 + 1]))))) : (((/* implicit */int) arr_29 [i_4] [i_4]))));
                                arr_35 [(unsigned char)0] [(unsigned char)0] [i_9] [i_4] [i_11] [20ULL] [i_10] &= ((long long int) (unsigned short)58730);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) arr_16 [7U]);
    }
    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
    {
        var_29 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_17 [(short)5])) : (((/* implicit */int) arr_29 [i_12] [i_12]))))), (((((/* implicit */_Bool) 0U)) ? (arr_25 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))));
        arr_38 [i_12] = arr_36 [i_12];
        var_30 = ((/* implicit */unsigned short) (-(((long long int) arr_28 [19LL] [i_12]))));
    }
    var_31 -= ((/* implicit */unsigned int) var_7);
    var_32 += ((/* implicit */short) (~(var_1)));
}
