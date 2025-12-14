/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116708
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = arr_0 [i_0] [i_0];
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_14 = min((((/* implicit */unsigned int) (_Bool)1)), (((((arr_0 [i_0] [i_0]) - (var_6))) >> (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_11))));
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_5 [i_2 + 3]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2] [i_2 - 1])) * (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 2])) != (((/* implicit */int) arr_7 [i_2 + 3] [i_2] [i_2] [i_2 - 2])))))));
                            arr_16 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [i_5] = ((/* implicit */unsigned short) ((_Bool) arr_8 [i_2] [i_2] [i_2] [i_1]));
                            var_18 *= (((-(arr_8 [i_5] [i_1] [i_1] [i_1]))) > ((~(((1469450704U) >> (((((/* implicit */int) arr_14 [i_0] [i_1] [i_2 + 1] [i_4] [i_4])) - (13819))))))));
                            arr_17 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 4] [i_1] [i_4] [i_5])) | (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((~(arr_4 [i_0] [i_0] [2ULL]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((arr_4 [i_1] [i_2 - 2] [i_2]) + (3041650706246922633LL)))))))))));
                            arr_20 [i_0] [i_0] [i_2 - 1] [i_2] = ((unsigned int) ((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((((/* implicit */int) arr_11 [i_2] [i_0] [i_0] [i_2])) >> (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 2] [i_4] [i_6] [i_0])))) : (((/* implicit */int) var_8))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_0] [i_0]))) ? (((arr_12 [i_6] [i_2] [i_0] [i_2] [i_0]) >> (((/* implicit */int) arr_18 [i_0] [i_2 + 3] [i_2] [i_2] [i_0] [i_4] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_2] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)29894)) & (((/* implicit */int) var_9)))));
                            arr_25 [i_0] [i_1] [i_1] [i_0] [i_2] [i_7] [i_7] = arr_8 [i_0] [i_2] [i_4] [i_7];
                            var_20 = ((/* implicit */int) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_2 - 2] [i_1] [i_0])))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_3 [i_2] [i_7]))));
                            var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) != (arr_5 [i_1]))) ? (((((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_4])) >> (((arr_4 [i_0] [i_0] [i_0]) + (3041650706246922648LL))))) : ((~(1960988208)))));
                        }
                        var_23 ^= ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_4]);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_0] [12U] [i_2] [i_2] [i_9] = ((/* implicit */long long int) arr_10 [i_2 + 4] [i_2] [i_2] [i_2] [i_2 + 3] [i_2 + 3]);
                            arr_32 [i_9] [i_2] [(_Bool)1] [i_2 + 4] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_2] [i_2] [i_2] [i_2 - 2])) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_8] [i_2] [i_1] [i_0] [i_0]))) & (16735226657655616706ULL)))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((1960988208) >> (((arr_4 [i_0] [i_1] [i_2]) + (3041650706246922642LL)))))) * ((~(arr_23 [i_0] [i_8] [i_2] [i_2 + 4] [i_0] [i_0] [i_0])))));
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_2 + 3] [i_2])) ? (((((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [i_1])) & (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_9))));
                    }
                    var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4240478446100352483LL)))))) > (max((-4240478446100352500LL), (-4240478446100352481LL))))))));
                    var_27 = ((/* implicit */int) arr_0 [i_2 + 1] [i_1]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
    {
        arr_36 [i_10] &= ((/* implicit */unsigned short) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_28 = ((/* implicit */unsigned int) arr_14 [(unsigned char)4] [i_10] [i_10] [i_10] [i_10]);
        arr_37 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_13 [i_10] [i_10] [i_10] [i_10]))))));
        var_29 = ((/* implicit */unsigned long long int) ((int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10]));
    }
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 645961352)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)63)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_12] [i_11])))))));
                    var_32 = ((/* implicit */unsigned int) (((((~(2405486246985705063ULL))) & (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551609ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (unsigned int i_15 = 3; i_15 < 13; i_15 += 4) 
            {
                for (unsigned int i_16 = 1; i_16 < 12; i_16 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_33 -= ((/* implicit */unsigned int) arr_45 [i_14 + 1] [i_16]);
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_15 - 3] [i_15 - 3] [i_16 + 3] [i_15 - 3] [i_14 + 1])) ? (((/* implicit */int) arr_22 [i_15 + 1] [i_15 - 1] [i_16 + 2] [i_17] [i_14 + 1])) : (((/* implicit */int) arr_22 [i_15 + 2] [i_14] [i_16 + 1] [i_16 + 3] [i_14 + 1])))) >> (((min((((/* implicit */int) (signed char)-123)), ((-(((/* implicit */int) var_0)))))) + (24765)))));
                            var_35 = ((/* implicit */unsigned int) arr_30 [i_17] [i_11] [20ULL] [i_11] [20ULL]);
                        }
                        arr_56 [i_11] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)57791)))) * ((-(1419868778U)))))) ? (9856780047904529950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)411)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
    {
        arr_60 [(unsigned short)8] = ((/* implicit */_Bool) (unsigned short)7739);
        arr_61 [i_18] = ((/* implicit */unsigned short) var_5);
    }
    var_36 &= ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
}
