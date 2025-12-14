/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110916
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
    var_19 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_0 [i_3 - 2]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [(unsigned char)12] [(_Bool)0] [i_2]))))))))));
                            var_21 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                arr_10 [i_0] = ((/* implicit */int) arr_6 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_12 [i_4])) - (20628)))))) & (((arr_11 [i_4]) ^ (-625675827383281828LL)))))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5 - 1]))))) >> (((((4743617409875801176LL) % (-4743617409875801177LL))) - (4743617409875801167LL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((max((4743617409875801176LL), (((/* implicit */long long int) var_12)))) == (((/* implicit */long long int) (((~(((/* implicit */int) var_15)))) ^ (((int) var_9)))))));
                        var_27 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_17)) : ((+(((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))))))));
                    }
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                            var_29 = arr_26 [i_4] [i_4] [i_4] [(short)15] [(_Bool)1] [i_8];
                            arr_28 [i_4 + 1] [i_5] [(unsigned char)12] [(unsigned char)18] [i_9] &= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) 4743617409875801176LL)) ? (4743617409875801172LL) : (-4743617409875801177LL))))), (((/* implicit */long long int) min((arr_12 [(short)17]), (arr_27 [(short)9] [i_8] [(short)15] [i_4 + 2] [i_9] [i_6 - 1] [i_9]))))));
                            var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_5 + 2] [i_6 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_19 [i_4 - 1] [i_5 + 4] [i_6 - 1] [i_8 + 1])) : (((/* implicit */int) arr_19 [i_4 + 2] [i_5 - 1] [i_6 - 1] [i_8 - 1])))), (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4 - 1] [i_5 + 3] [i_6 - 1] [i_8 - 1]))))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_25 [(unsigned char)9] [i_5 - 1] [i_5 + 4] [i_5 + 4] [4]))) * (((/* implicit */int) ((var_17) && (arr_14 [(_Bool)1] [16U] [i_4]))))));
                        }
                        arr_29 [i_4 - 1] [10U] [i_6] [i_6] &= ((/* implicit */unsigned long long int) ((short) (unsigned short)32));
                        var_32 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_15 [i_4])))) & ((~(((/* implicit */int) arr_15 [i_4]))))));
                        var_33 &= ((/* implicit */short) (~(((/* implicit */int) var_9))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                arr_41 [i_4] [i_4 + 2] [i_4 + 1] [i_4] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [(short)22] [5ULL] [i_13])))) ? (((arr_11 [i_4]) / (arr_11 [i_4]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_34 = ((/* implicit */short) 4743617409875801189LL);
                                arr_42 [(unsigned char)1] [(unsigned char)1] [i_11] [(unsigned char)1] [i_11] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 3; i_15 < 20; i_15 += 3) 
                        {
                            {
                                arr_48 [i_4] [i_4] [i_4] [1LL] [i_11] [i_14] [i_15] = ((/* implicit */unsigned long long int) var_10);
                                var_35 *= ((/* implicit */signed char) ((((/* implicit */int) var_9)) == (((/* implicit */int) ((((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)14336)))))) > (((arr_13 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-4743617409875801177LL))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_38 [i_4] [i_10] [i_10] [i_11] [i_11]) && (arr_38 [(unsigned char)16] [i_4 - 1] [(_Bool)1] [i_10] [i_11]))))));
                    var_37 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440))) > (7070110070073278124ULL))))) == (min((((/* implicit */unsigned long long int) var_12)), (arr_21 [i_4] [i_4] [i_11] [i_11] [i_4]))))))));
                    var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_20 [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1])) * (((/* implicit */int) var_17))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_16 = 3; i_16 < 17; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (short i_17 = 2; i_17 < 17; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                {
                    var_39 = ((short) ((var_2) && (((/* implicit */_Bool) var_18))));
                    var_40 = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_20 [(signed char)10] [i_17] [i_18] [16LL]))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-14337)))))));
                    var_42 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)34136))));
                }
            } 
        } 
        var_43 *= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_44 = (i_16 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_16] [6ULL] [i_16])) >> (((((/* implicit */int) arr_20 [i_16] [(short)7] [i_16 + 1] [i_16])) + (24940)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_16] [6ULL] [i_16])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_16] [(short)7] [i_16 + 1] [i_16])) + (24940))))));
    }
    var_45 = ((/* implicit */unsigned long long int) var_12);
    var_46 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) var_16)))) : (((/* implicit */int) var_7))))) > (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1)))))))));
}
