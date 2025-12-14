/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156516
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) 2287828610704211968ULL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [12] = (_Bool)0;
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25401)) ? (arr_4 [i_2]) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (2251662374731776LL)))))) ? (((((/* implicit */_Bool) var_5)) ? ((~(arr_7 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (517140428U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)65)), ((unsigned short)49981)))) ? (((((/* implicit */long long int) 1311299851U)) ^ (arr_4 [i_1]))) : (-7065713913725943593LL))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) arr_5 [(_Bool)1] [i_2]);
                arr_15 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_10 [i_1] [(short)5]))))) ? (((/* implicit */int) arr_10 [i_1] [4ULL])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_2]))))), (max((arr_8 [i_1] [(unsigned char)5] [i_3]), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3]))))));
                var_19 = ((/* implicit */unsigned long long int) ((0LL) | (arr_13 [i_1] [i_1] [i_2] [i_2])));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 4; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)126)), (0LL)))) ? (((/* implicit */int) max((((/* implicit */short) arr_14 [i_4])), (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((arr_7 [i_4] [12LL] [12LL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5 - 2] [i_4] [i_3] [i_2] [i_1])))))))) > (max((((/* implicit */int) (_Bool)1)), (2054128770)))));
                            arr_24 [i_2] [i_2] = ((/* implicit */unsigned short) min((((-1) * (((/* implicit */int) arr_10 [i_1] [i_1])))), (((/* implicit */int) max((arr_10 [i_5 - 2] [i_3]), (arr_10 [i_2] [i_2]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_27 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_1] [i_6])))) ? (max((((/* implicit */long long int) (_Bool)0)), (-12LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_2] [i_1]) <= (arr_5 [i_1] [i_1])))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned short) 18446744073709551615ULL))))) <= (((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6] [i_6] [i_2] [i_6])) ? (((((/* implicit */_Bool) (unsigned short)37347)) ? (((/* implicit */unsigned long long int) 3966423488U)) : (14288581102340370302ULL))) : (((/* implicit */unsigned long long int) 5LL))))))));
            }
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)-22209)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)960)) - (959))))), (((/* implicit */int) arr_22 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(9LL))) <= (arr_5 [i_1] [i_1]))))) : (min((arr_5 [(unsigned char)4] [i_2]), (1896697275208184003LL)))));
            var_23 = (_Bool)0;
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) > ((+(min((((/* implicit */unsigned long long int) 4294967295U)), (11903833928989405025ULL))))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_7] [i_7])) ? (((((/* implicit */_Bool) var_4)) ? (arr_25 [i_1] [i_1] [i_1] [i_1]) : (arr_25 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((int) arr_18 [i_1] [(unsigned char)24] [i_1] [i_7] [i_7] [i_7]))))))));
            arr_31 [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59576)) ^ (((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) <= (((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_8 [20LL] [i_7] [i_1]) : (arr_12 [i_7])))));
        }
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((long long int) (unsigned short)8198))))) ? (max((var_12), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57362)) / (((/* implicit */int) var_3))))))) : ((+(arr_25 [i_1] [i_1] [i_1] [i_1])))));
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) min((((/* implicit */long long int) var_10)), (min((arr_5 [i_1] [i_8]), (((/* implicit */long long int) var_15))))));
                        arr_40 [i_1] [i_10] [i_10] [i_10] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((16713842691470136859ULL) >> (((((/* implicit */int) (signed char)-120)) + (145)))))))) / (((((/* implicit */_Bool) arr_30 [i_10] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (arr_30 [i_9] [i_9])))));
                        var_29 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_37 [8U] [i_9] [i_9] [i_1]))) >= (min((var_9), (((/* implicit */long long int) var_10)))))), ((!(arr_38 [i_1] [i_8] [i_9])))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 2451013613U)) && (((/* implicit */_Bool) (signed char)64))))), (7LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (min((((/* implicit */unsigned int) (signed char)-44)), (1033595657U)))))))))));
}
