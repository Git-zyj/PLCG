/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160826
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((short) 6U))) : (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21264)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24712))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) 1905613328)))))))));
        var_12 = ((/* implicit */_Bool) ((((arr_1 [8LL] [i_0]) <= (arr_1 [(signed char)6] [i_0]))) ? (((((/* implicit */int) var_3)) - (arr_1 [i_0] [i_0]))) : ((+(60257862)))));
        var_13 = max((((/* implicit */int) (_Bool)0)), ((((-(((/* implicit */int) (short)-24727)))) + ((-(arr_1 [(unsigned short)3] [i_0]))))));
        var_14 = ((/* implicit */int) (unsigned char)132);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4565)) ? (((/* implicit */int) arr_4 [i_1])) : ((~(((/* implicit */int) (_Bool)0))))));
        var_16 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_3)))) - (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)101))))));
        var_17 = ((/* implicit */unsigned long long int) ((((var_9) || (((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-6LL)));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((3275945110U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127)))))))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_2]) >> (((((/* implicit */int) max((arr_4 [i_5]), (((/* implicit */unsigned char) arr_3 [(unsigned char)9]))))) - (96)))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (arr_16 [i_6] [i_6] [i_3] [i_6] [(unsigned char)12] [7U]) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) 65631337))))));
                            arr_19 [i_2] [i_3] [(unsigned short)4] [i_5] [i_6] [i_5] [i_2] = ((/* implicit */_Bool) (short)22191);
                            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_10 [i_6] [i_5] [i_2]))))));
                        }
                        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5])) && (arr_8 [i_4])))), (arr_6 [i_4])));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) arr_6 [(_Bool)1]);
                            var_22 = ((/* implicit */long long int) max((((((var_7) | (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) ((arr_6 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)2)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                            arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4] [i_5] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [(unsigned char)13] [i_5] [i_5] [(unsigned char)5] [i_3] [i_2])))) : (2077448828U)));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_5] [i_8]))));
                            var_25 = ((/* implicit */unsigned char) ((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_4] [i_5] [i_8])) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_5] [i_8] [i_5]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) var_0);
                            var_27 += ((/* implicit */unsigned long long int) ((((arr_29 [i_2] [i_3] [i_5]) != (((/* implicit */unsigned long long int) 3366017362U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) (signed char)3))))) : (((/* implicit */int) arr_20 [i_5] [i_3] [i_5] [i_5]))));
                            var_28 = ((/* implicit */unsigned char) arr_21 [i_9] [i_5] [i_4] [i_3] [i_2]);
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) max(((+(var_2))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305843009213693951LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))) : (983778619U)))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [(signed char)10] [i_2] [(_Bool)1] [i_2] [i_2]))) / (5ULL))))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    {
                        arr_35 [i_2] [i_3] [i_10] [i_11] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [(unsigned short)5] [(short)2])) || (((/* implicit */_Bool) arr_20 [i_2] [1LL] [i_2] [i_2])))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_22 [i_10])) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */int) ((unsigned char) arr_22 [i_11]))) : (((/* implicit */int) ((((/* implicit */_Bool) 11889441149460844289ULL)) || (((/* implicit */_Bool) (short)24712)))))));
                        var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_28 [i_2] [i_2] [12] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) arr_21 [i_2] [i_3] [i_3] [i_10] [i_11]))))) && (((/* implicit */_Bool) ((unsigned char) -940044145))))) ? (((/* implicit */int) var_4)) : (((((((((/* implicit */int) (short)-24683)) ^ (((/* implicit */int) (unsigned char)11)))) + (2147483647))) >> (((arr_18 [i_2]) - (2067569944017245825ULL)))))));
                        arr_36 [i_2] [i_3] [i_10] [(unsigned short)4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_11] [i_3] [i_10])) + (((/* implicit */int) arr_30 [i_2] [i_3] [i_10]))))) ? ((+(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_2] [i_3] [i_10] [i_11])) ? (((/* implicit */int) arr_30 [(unsigned char)5] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_2])))) >= (((/* implicit */int) max((var_5), (((/* implicit */signed char) var_9)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_12] [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_12] [i_2])) : (arr_31 [i_2] [i_2] [i_2] [i_2])));
            var_33 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_12])) : (((/* implicit */int) arr_11 [i_2] [i_12] [i_12]))));
        }
        arr_39 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) | (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (arr_9 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_2])) ? (((/* implicit */int) arr_23 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) max((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_21 [i_2] [i_2] [i_2] [(unsigned char)0] [i_2])))) : (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned char)234))))));
    }
}
