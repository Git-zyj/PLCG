/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145355
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8064))) : (18446744073709551615ULL))), (18446744073709551608ULL)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_0))));
                    var_16 = ((/* implicit */_Bool) max((18446744073709551615ULL), (18446744073709551615ULL)));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775797LL)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned long long int) max((3584ULL), (((/* implicit */unsigned long long int) (short)-16384))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 + 1] [4U]))) * (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (26ULL)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) / ((+(((arr_2 [i_0 - 1]) / (var_5)))))));
                                var_20 -= ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                                arr_24 [(short)5] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [1] [i_0]);
                                arr_25 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_8 [i_0] [i_0])), (134217727)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 1) 
                    {
                        var_21 -= ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_3] [5LL] [i_3] [(signed char)2])) ? (arr_2 [i_0 + 1]) : (arr_7 [i_7] [i_7] [i_4] [10]))) >= (((((/* implicit */_Bool) arr_15 [(short)8] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_17 [i_0] [i_3 - 3] [i_4] [i_7])) : (((/* implicit */int) (unsigned char)128)))))));
                        var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) (signed char)-32))));
                    }
                    arr_30 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_3 - 2] [i_4 + 2] [(short)3] [(short)9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_3] [i_3 - 3] [10U] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) 36028522141057024ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((25ULL) < (((/* implicit */unsigned long long int) 1023)))))) : (((arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_14 [i_0 - 1]))))) : (max((arr_14 [i_3 - 3]), (((/* implicit */long long int) arr_12 [i_3 - 3]))))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        arr_33 [11LL] = ((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) arr_29 [i_8 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (arr_2 [i_8])))) ? (arr_5 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8 + 2] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_23 = var_2;
            arr_37 [i_9] [(_Bool)1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_6 [i_8 - 2] [i_8 - 2] [i_8]), (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) arr_15 [i_9] [i_9] [i_8 + 1])) : (arr_7 [i_9] [i_9] [2] [i_8]))))))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) arr_20 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
            arr_40 [i_8 + 1] [i_10 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_8])))) ? (((((/* implicit */_Bool) arr_6 [9LL] [i_10] [i_8 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 + 2] [4ULL] [8ULL] [i_10 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 26ULL)))))))) && ((((!(((/* implicit */_Bool) arr_15 [i_10] [i_10 - 1] [i_8])))) && (((/* implicit */_Bool) arr_1 [i_8] [11ULL]))))));
            arr_41 [(signed char)9] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (max((arr_34 [i_8] [i_8] [i_10 - 1]), (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-6)))) ? (((/* implicit */unsigned long long int) ((arr_35 [i_8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))) : (var_1)))))));
        }
        for (short i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            var_25 = ((/* implicit */int) 511U);
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_28 [i_8] [i_8] [i_11] [i_11] [i_11 - 1]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 1) 
        {
            arr_47 [i_8] [(signed char)0] [i_12] = ((/* implicit */int) var_0);
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_46 [i_12 - 2])), (max((((/* implicit */unsigned long long int) var_14)), (arr_5 [i_8 + 1])))));
        }
    }
    var_28 = var_9;
    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_0))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
}
