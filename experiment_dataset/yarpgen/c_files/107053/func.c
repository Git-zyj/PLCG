/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107053
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_13 [i_4 + 4] [i_2 + 3] [i_0] [i_0 + 1] [i_0]))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_4 [i_3]))) << (((arr_4 [i_3]) - (17355626457351885236ULL))))))));
                                var_13 = ((/* implicit */unsigned char) arr_4 [i_0]);
                                arr_15 [i_2] [i_0] [i_2] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 1] [i_2] [i_3] [i_4 + 3]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] = ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (short i_7 = 3; i_7 < 18; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_14 += ((/* implicit */unsigned int) arr_14 [i_0 + 2] [i_6] [i_7 + 1] [i_7 - 1] [i_6]);
                            var_15 = (-(arr_9 [i_0]));
                            arr_28 [i_0] [i_5] [i_6] [18U] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_0 + 1]))));
                        }
                        arr_29 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_7)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_12] [i_11 - 1] [i_12] [i_11 + 2] [i_11]))))) ? (((/* implicit */int) min((arr_12 [i_12] [i_11 + 2] [i_11] [i_11 - 1] [(short)15]), (arr_12 [i_12] [i_11 - 1] [i_11] [i_11 - 1] [i_11])))) : (((((/* implicit */_Bool) arr_12 [i_12] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_12] [i_11 - 1] [i_11] [i_11 + 3] [i_12]))))));
                            var_17 = ((/* implicit */_Bool) ((unsigned int) (+(8258273704280094967ULL))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    arr_44 [i_9] [i_10] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_13] [i_13])) ? (arr_4 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))))) - (((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_10] [i_10])) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_10] [i_10] [i_13])))))));
                    var_18 = ((/* implicit */signed char) (-(min((((var_7) << (((2373747840U) - (2373747819U))))), (((/* implicit */unsigned long long int) arr_20 [i_9] [i_10] [i_13]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_19 = (-((+(arr_14 [i_15] [i_14] [i_15 + 1] [i_14] [i_15 - 1]))));
                                arr_50 [i_14] [i_14] [i_14] [i_13] [(unsigned char)5] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_47 [i_14] [i_15 + 1])))) ? (min((max((((/* implicit */unsigned long long int) var_5)), (5338600653554208396ULL))), (((/* implicit */unsigned long long int) arr_38 [i_13] [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_39 [i_15] [i_14] [i_15])), ((+(((/* implicit */int) var_1))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_15 - 1])) ? (((/* implicit */int) arr_30 [i_15 + 1])) : (((/* implicit */int) arr_39 [i_13] [i_14] [i_15])))))));
                                arr_51 [i_14] [i_14] [i_13] [i_13] [i_10] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_2)))) % (((((/* implicit */_Bool) arr_24 [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) arr_24 [i_15] [i_15 - 1])) : (((/* implicit */int) arr_24 [i_15 - 1] [i_15 - 1]))))));
                            }
                        } 
                    } 
                }
                arr_52 [i_10] = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)10] [(unsigned short)10]);
                /* LoopSeq 1 */
                for (unsigned short i_16 = 2; i_16 < 14; i_16 += 2) 
                {
                    var_21 = ((/* implicit */short) (+(arr_6 [i_16])));
                    arr_55 [i_9] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_16 + 2] [i_16 + 1]))) ^ (arr_26 [i_10] [i_16] [i_16 - 2] [i_16 - 2] [i_16]))));
                    var_22 += (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((unsigned long long int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        for (short i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_23 [i_16 + 2] [i_17] [i_16]), (((/* implicit */unsigned short) arr_37 [i_16 - 2] [i_10] [i_9]))))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((arr_5 [i_16 - 1] [i_16 + 2] [i_16 - 2]) < (arr_5 [i_16 + 2] [i_16 + 1] [i_16 - 2]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_9);
    var_26 = ((/* implicit */short) var_7);
}
