/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11297
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))), (max((((/* implicit */unsigned char) arr_0 [i_0] [i_1])), (arr_3 [i_0] [i_0] [i_1])))));
                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((((short) arr_1 [(_Bool)1])), (((/* implicit */short) ((_Bool) var_7)))))) == (((/* implicit */int) ((((_Bool) arr_3 [i_0] [(unsigned short)13] [i_1])) || (((/* implicit */_Bool) ((unsigned short) -1808277571))))))));
                arr_5 [i_1] = ((/* implicit */signed char) 1152921504606846975LL);
                var_12 *= ((/* implicit */signed char) arr_2 [i_1]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (-(((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [1LL] [i_1]))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56159)) ? (((unsigned long long int) arr_8 [i_3 + 1] [8LL] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23)) && (((/* implicit */_Bool) (signed char)127))));
                            var_16 += ((/* implicit */unsigned short) ((max((arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]), (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3]))) * (((((/* implicit */_Bool) 917638312)) ? (arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65496)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_17 -= ((/* implicit */long long int) ((unsigned short) ((unsigned char) arr_13 [i_4] [i_5 - 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [(unsigned char)7] [i_5])) / ((+(((/* implicit */int) ((unsigned short) 14387907441029347753ULL)))))));
                                var_19 = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_7]))) < (arr_15 [i_5] [i_7] [i_5]))))) == (6505312006458909155LL)))), (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)54620)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_16 [i_4])) | (2147483647))) - (2147483638)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 3; i_10 < 18; i_10 += 4) 
    {
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_36 [6ULL] [i_12] [(unsigned short)18] [(unsigned char)6] [(signed char)6] &= ((/* implicit */long long int) var_7);
                        arr_37 [i_10] [i_11 - 1] [i_12] [10U] = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)96))))))) ? ((((-(12360051828304362590ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56159)) << (((((/* implicit */int) (unsigned short)2048)) - (2042)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_24 [i_13 + 1] [i_10 - 3] [i_10]))))));
                        arr_38 [i_12] [i_13] &= ((/* implicit */unsigned short) arr_21 [i_10] [i_10] [i_10] [i_10] [i_10]);
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)33527), (((/* implicit */unsigned short) (signed char)-75))))) ? ((+(((/* implicit */int) arr_10 [i_10 + 1] [i_11 - 1] [i_13 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (arr_22 [i_10] [12ULL] [i_11] [i_11 - 1] [i_11 - 1] [(unsigned short)18] [i_11]))))));
                            arr_42 [i_14] [i_10] [i_12] [i_10] [i_10] = (unsigned short)35;
                            var_23 = ((unsigned short) (unsigned short)0);
                        }
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            arr_45 [i_10] [i_10] [14LL] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) arr_22 [i_15] [i_13 + 1] [i_13 + 1] [i_12] [i_11] [(unsigned short)22] [i_10]))));
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (unsigned short)19563)))));
                            var_25 = ((/* implicit */unsigned char) min((max((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_10)))), (((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [i_10] [i_10] [(unsigned char)22] [i_10]))));
                        }
                        arr_46 [4LL] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */_Bool) (((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_12])), (var_10)))))) + ((-(((/* implicit */int) arr_21 [i_10 - 2] [i_11 - 1] [i_12] [i_13 + 1] [i_13]))))));
                    }
                    for (unsigned char i_16 = 3; i_16 < 15; i_16 += 4) 
                    {
                        arr_51 [i_12] [i_11 - 1] &= ((/* implicit */unsigned long long int) arr_49 [i_10] [i_11 - 1] [i_10] [i_11] [i_12] [i_16 - 2]);
                        var_26 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_7 [i_16 - 2] [i_16 + 1] [i_16 - 1])));
                        arr_52 [i_10] [i_11] [i_12] [i_16] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_14 [i_12] [i_10])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)68)), ((unsigned short)27)))) ^ (((((/* implicit */int) arr_3 [i_10] [(unsigned char)13] [i_10])) % (arr_20 [i_11] [(unsigned char)11] [i_16 - 2] [i_11]))))))));
                            var_28 = arr_13 [i_11] [i_11];
                            var_29 = ((/* implicit */_Bool) max(((~(max((((/* implicit */unsigned long long int) arr_24 [i_12] [i_11 - 1] [i_10])), (10500771980634451730ULL))))), (((/* implicit */unsigned long long int) arr_30 [i_10 - 1] [i_11] [i_16 + 1]))));
                            var_30 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((unsigned char) (signed char)127))), ((+(((/* implicit */int) arr_23 [i_10] [i_10 + 1] [i_10] [i_10]))))))));
                            arr_55 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) (unsigned char)141))), (((((/* implicit */_Bool) (unsigned short)32809)) ? (2565139062927982911LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10 + 1] [i_11 - 1] [i_12] [i_12])))))));
                        }
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)63487), (((/* implicit */unsigned short) arr_3 [i_12] [i_11 - 1] [i_10 - 3]))))) ? (((((/* implicit */int) arr_23 [i_10] [i_10 + 1] [i_11 - 1] [i_16 + 4])) + (((/* implicit */int) arr_23 [i_10] [i_10 + 1] [i_11 - 1] [i_16 + 3])))) : (((/* implicit */int) arr_16 [i_11 - 1])))))));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 4) 
                    {
                        var_32 &= ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (_Bool)1)))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (arr_47 [i_10] [i_11] [i_12] [i_18])));
                        arr_60 [i_10] [i_10] [i_11 - 1] [i_10] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -5661162939319794964LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)25261)) > (((/* implicit */int) arr_40 [i_10] [i_10] [i_11 - 1] [i_12] [i_18]))))) : ((+(((/* implicit */int) (unsigned char)223))))))));
                        var_34 &= arr_30 [i_10] [i_12] [i_18];
                        arr_61 [i_10] = arr_8 [i_10] [i_11] [i_12];
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_19] [i_11 - 1] [i_10 - 1] [i_10 - 3] [i_10 + 1]))))) ? (((((/* implicit */int) arr_64 [i_10 - 1] [i_11 - 1] [i_11] [i_10 - 1] [i_10 - 1])) % (((/* implicit */int) (unsigned char)131)))) : (((/* implicit */int) ((unsigned short) (unsigned short)65533))))))));
                        arr_65 [i_10] [i_12] [i_10] [i_10] |= ((/* implicit */_Bool) (-(0)));
                    }
                }
            } 
        } 
    } 
    var_36 &= var_7;
}
