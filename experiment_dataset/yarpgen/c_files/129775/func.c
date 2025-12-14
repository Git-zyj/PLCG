/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129775
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [5LL] [i_1] = ((/* implicit */unsigned char) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))));
                    var_11 = ((/* implicit */long long int) min((var_11), ((-(arr_2 [i_0 + 1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */int) 18446744073709551615ULL);
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((((unsigned int) arr_12 [i_3] [i_4 - 1] [i_5 - 2])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [(_Bool)1]))) ? (arr_11 [i_3]) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                        arr_19 [i_5] [i_5 + 2] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_13 [i_6] [i_5 + 3] [i_3])))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3080295261U)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_10 [i_4])))))));
                        var_13 ^= ((/* implicit */unsigned int) (-(var_2)));
                        arr_20 [i_3] = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            arr_21 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_13 [i_3] [i_4] [i_4]), (arr_12 [i_3] [i_4] [i_4])))) ? ((~(arr_18 [i_3] [i_4 + 1] [i_3] [i_3] [i_3]))) : (((/* implicit */int) ((signed char) arr_11 [i_3]))))), (arr_13 [i_4] [i_4 - 1] [(_Bool)1])));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_3] [i_4 - 1] [i_7] [i_8])) ? (arr_15 [i_3] [i_4] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_18 [i_3] [i_4] [i_8] [i_8] [i_8]) : (((/* implicit */int) var_8))))) ? ((~(arr_26 [i_3] [i_4] [8LL] [i_8]))) : (((/* implicit */unsigned long long int) arr_13 [i_4 - 1] [i_4 + 1] [i_4]))))));
                        var_14 -= ((/* implicit */signed char) max((max((((/* implicit */long long int) max((2147483647), (arr_18 [i_3] [i_4] [(unsigned short)1] [i_8] [i_4 - 1])))), (arr_22 [i_3] [i_3] [i_7] [i_4 - 1]))), (((/* implicit */long long int) (~(arr_18 [i_4 + 1] [i_4 + 1] [i_7] [i_4 + 1] [i_7]))))));
                        arr_29 [14ULL] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (-2147483647) : (((/* implicit */int) var_1)))))));
                        arr_30 [i_3] [i_4] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (((-(((long long int) 9002801208229888LL)))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1680878624U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2097068633U))))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) -2052868001)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) : (var_10))))), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_7])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_9])) ? (var_10) : (((/* implicit */unsigned long long int) arr_13 [i_3] [i_9] [i_3]))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_3] [i_3] [i_3] [i_3]))) ? (((((/* implicit */_Bool) 2052868000)) ? (((/* implicit */int) (signed char)-36)) : (2147483647))) : ((+(((/* implicit */int) (unsigned char)15))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((unsigned char) min(((!(((/* implicit */_Bool) arr_37 [i_3] [(unsigned char)4] [i_11])))), (var_5))));
                    var_19 = ((/* implicit */long long int) var_1);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (-5250727539397612726LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_32 [i_3] [i_10] [i_11])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    arr_44 [i_3] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_35 [i_3] [i_12 - 1] [i_13])), (((var_5) ? (((/* implicit */long long int) 3124035116U)) : (var_2)))))) ? (arr_13 [i_3] [i_12] [i_13]) : (((((/* implicit */_Bool) min((var_9), (arr_9 [i_3])))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) min((arr_34 [i_13] [i_3]), (((/* implicit */unsigned char) (_Bool)1))))))));
                    arr_45 [i_3] [i_3] [i_3] [2] = ((/* implicit */long long int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)24))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)5))))))));
}
