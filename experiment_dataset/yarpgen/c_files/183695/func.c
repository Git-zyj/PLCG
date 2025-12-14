/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183695
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_11)))) : ((-(((((/* implicit */int) (signed char)85)) + (((/* implicit */int) var_13)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_16 = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(arr_1 [i_0]))))));
        var_18 = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            var_19 &= ((/* implicit */unsigned long long int) (-(-7790012700751846735LL)));
            var_20 -= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2 + 1] [i_2 + 1])) : (arr_7 [i_2 - 1] [i_2 + 1]));
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) ((arr_5 [10ULL] [i_3]) & (arr_10 [16] [22ULL] [i_3] [i_1])))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))))) ? ((+(558511208))) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4] [i_4 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        arr_15 [i_4] [i_3] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+(arr_6 [i_4] [i_4 + 1] [i_5 + 3])));
                        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)3] [i_4] [i_4] [i_3] [i_4] [i_1]))) : (arr_3 [i_4])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_24 += (+(arr_17 [i_4 + 1] [i_4 - 1] [i_1]));
                            arr_18 [i_1] [i_5] [i_4] [i_5] [i_6] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (134201344LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))))));
                            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_5 - 2])) ? (((/* implicit */int) arr_16 [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_5 - 2])) : (((/* implicit */int) arr_16 [(unsigned short)19] [i_4] [i_4 + 1] [i_4 - 1] [i_5 - 2]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((unsigned long long int) var_9)) + (var_8)))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_3] [i_3] [i_7] [i_1]))));
                            var_27 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) != (arr_9 [i_5]))))) & (((((/* implicit */_Bool) -558511208)) ? (arr_3 [(unsigned short)20]) : (((/* implicit */unsigned long long int) 4398046511103LL)))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((signed char) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                    var_29 -= ((/* implicit */short) 0ULL);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_7)))), (var_8)))) ? (((/* implicit */unsigned int) 1907149503)) : (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_17 [10ULL] [i_8] [(unsigned char)8]) : (((/* implicit */unsigned long long int) arr_21 [8ULL] [i_8] [i_8] [i_8]))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8])));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_30 [i_9] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_7)) - (var_6)));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) (~(arr_21 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((288225978105200640ULL) * (((/* implicit */unsigned long long int) -1646101136533699132LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11 + 2] [i_11 - 1] [i_11] [i_12 - 2] [i_11])))));
                            var_35 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_8] [19ULL] [(unsigned char)11])))) && ((!(((/* implicit */_Bool) var_7))))));
                            var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10] [i_8] [i_10] [(short)17] [i_10] [i_10]))) >= (var_8)));
                            var_37 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) | (arr_10 [i_9] [i_11 - 2] [i_9] [i_9])));
                        }
                        var_38 = ((/* implicit */unsigned short) var_12);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) min((arr_27 [i_13] [i_13] [i_13]), (((unsigned short) ((((/* implicit */_Bool) var_1)) ? (-993481346) : (((/* implicit */int) (unsigned short)49152)))))));
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_25 [i_13] [i_13]), (((/* implicit */unsigned long long int) (signed char)85))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1907149529))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (max((min(((-(15298352480411838503ULL))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (((+(var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_13)))))))))))));
            arr_44 [(unsigned char)4] |= ((/* implicit */short) min((max((((/* implicit */unsigned int) (((-2147483647 - 1)) | (((/* implicit */int) arr_41 [(unsigned char)12] [(unsigned char)12]))))), (((((/* implicit */_Bool) var_8)) ? (3197522985U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_13] [(unsigned short)20] [22ULL]))))))), (arr_4 [i_13])));
        }
    }
}
