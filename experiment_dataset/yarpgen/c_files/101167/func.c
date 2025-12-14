/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101167
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
    var_20 -= ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_1] [i_1 - 1] [i_1]);
                var_21 = ((unsigned char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (~((~(arr_3 [i_1] [i_1])))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned char) arr_3 [i_4] [i_1 - 1]);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(2147483636))))));
                                arr_12 [i_1] [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_2 + 3] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_16 [i_5] [i_5] [i_5] [i_5] [(unsigned short)12] [i_5] |= arr_15 [(unsigned char)10];
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_5] [i_2] [4]))));
                    }
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_1 [i_6]))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1974820574)) ? (((/* implicit */long long int) 909437179U)) : (5558627373835289763LL)));
                    arr_21 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */int) ((unsigned char) arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 1]));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) var_15);
                        arr_27 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (unsigned char)128);
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (unsigned short)64580))));
                        var_30 -= var_7;
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (4294967282U)));
                        var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_26 [i_7 + 1] [i_1 - 1] [i_1 - 1] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(signed char)10] [i_0])))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((1974820573) >= (((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) > (((/* implicit */int) (unsigned char)128))))))))));
                        arr_31 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_34 = ((/* implicit */int) (~(3385530116U)));
                        var_35 *= ((/* implicit */int) var_19);
                    }
                    for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                    {
                        var_36 ^= ((/* implicit */signed char) 2082746404U);
                        var_37 *= ((/* implicit */unsigned char) arr_2 [i_11] [i_11] [i_11]);
                        var_38 = ((/* implicit */int) var_10);
                    }
                    for (short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_42 [i_0] [i_1] [i_0] [i_7] [i_12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 + 1] [i_1] [i_7 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)188))))) : (((/* implicit */int) arr_29 [i_7 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0]))));
                            arr_43 [i_1] [i_0] [i_13] [i_0] [i_0] [i_0] = arr_18 [i_1 + 2] [i_1 + 2] [i_1] [i_7 + 1];
                            arr_44 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((long long int) var_7))));
                            var_39 += ((/* implicit */unsigned char) (!(arr_5 [i_1 + 2] [i_12] [i_1 - 1])));
                        }
                        for (int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            var_40 = ((/* implicit */_Bool) min((var_40), (((((/* implicit */int) min((arr_17 [i_1 + 2] [i_14] [i_14] [i_1 - 1]), (((/* implicit */unsigned short) var_18))))) == (((/* implicit */int) arr_15 [i_14]))))));
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2082746404U)) ? (arr_18 [i_0] [i_1] [i_1] [i_7 + 1]) : (arr_18 [i_0] [i_1] [i_1] [i_7 + 1]))) ^ (((/* implicit */int) var_19))));
                            var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2])) > (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        }
                        arr_47 [i_12] [i_12] [i_1] = (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])));
                    }
                    var_43 = ((/* implicit */int) min((var_43), (arr_18 [i_7] [i_7] [(unsigned short)0] [i_7])));
                    arr_48 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned char) (~(909437179U)));
}
