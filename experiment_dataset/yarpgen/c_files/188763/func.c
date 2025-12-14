/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188763
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
    var_14 = ((/* implicit */short) min((((/* implicit */signed char) ((_Bool) var_12))), (var_11)));
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (arr_1 [i_0 - 1] [(unsigned short)11])));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_1 - 2] [i_2]))));
                    var_18 = ((/* implicit */unsigned short) arr_5 [i_2] [i_1] [i_2] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        arr_9 [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~((-(var_1)))));
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_1 - 2])) >> (((arr_5 [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2]) + (5847318805687810194LL)))));
                        arr_10 [i_1] [i_2] [i_2] [2ULL] &= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 3] [i_0 + 1]))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 3] [i_0 - 1])) > (arr_0 [i_3 - 1])));
                        var_21 ^= ((/* implicit */unsigned short) arr_2 [i_1 - 3] [i_0 + 1]);
                    }
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    arr_13 [i_0] [i_1 - 2] [16LL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [12LL] [i_4]))) + (((/* implicit */int) var_3))));
                    arr_14 [i_1] [i_4] = ((/* implicit */unsigned char) (!(((_Bool) var_9))));
                    var_22 = ((/* implicit */signed char) arr_1 [i_0] [i_4]);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [7U]))));
                    var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) 1602474544U)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_0] [(short)7] [(unsigned char)11]))))));
                }
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                {
                    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(var_2)))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [(signed char)1] [i_1] [i_6])))))), (((/* implicit */int) ((unsigned char) arr_2 [(_Bool)1] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (-((+(((((/* implicit */int) var_3)) / (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [(signed char)4]))))))));
                            arr_25 [i_6] = ((/* implicit */short) arr_16 [i_0] [i_1] [i_6 - 2]);
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0 + 1] [13ULL] [i_1 + 1] [i_6] [(short)17] [i_8]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [0] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) <= (((unsigned int) var_3))))) | (((/* implicit */int) arr_1 [i_6] [i_8])))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_7))))));
                            var_30 -= ((/* implicit */unsigned short) arr_5 [i_0] [i_1 - 2] [i_6] [i_7]);
                            var_31 = ((/* implicit */unsigned short) var_11);
                        }
                        arr_29 [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((_Bool) arr_26 [i_0] [i_1] [i_6])))))));
                        arr_30 [i_0 + 1] [i_0 + 1] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        arr_34 [(short)0] [i_6 - 2] [i_6] = ((/* implicit */unsigned short) var_13);
                        var_32 = ((/* implicit */unsigned short) var_13);
                    }
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [5U] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_1 - 3] [i_0 - 1]))))) ? ((+(((/* implicit */int) arr_4 [i_6 + 1] [i_0 - 1] [i_1 + 1])))) : (((/* implicit */int) ((signed char) ((signed char) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_6]))))));
                }
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) ((_Bool) arr_5 [i_0 + 1] [i_11] [i_11] [i_12]));
                        var_35 = ((/* implicit */long long int) ((signed char) arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_1 + 1] [i_11] [i_12]));
                        arr_40 [16LL] [i_1] = ((/* implicit */unsigned int) arr_35 [i_0 + 1]);
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [5U]))));
                        var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_1 - 3] [i_0 - 1]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) arr_31 [i_1] [i_14] [i_1] [i_0] [i_14] [i_0 - 1]);
                        var_41 = ((/* implicit */short) arr_38 [(unsigned short)3] [i_1 - 3] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                        {
                            arr_48 [i_0] [i_14] [i_15] [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18324589141183203588ULL)))));
                            var_42 = ((/* implicit */_Bool) var_2);
                            var_43 *= ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                        {
                            var_44 = min((((long long int) var_9)), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_26 [i_0] [i_1] [18LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_11] [i_11] [i_16])))), ((-(((/* implicit */int) arr_28 [i_0 + 1] [i_1]))))))));
                            var_45 = ((/* implicit */signed char) arr_51 [(unsigned char)4] [i_0] [(signed char)17] [i_11] [i_14] [i_16] [i_16]);
                            var_46 = var_3;
                            var_47 = ((/* implicit */_Bool) arr_27 [i_0] [i_1] [(signed char)10] [i_14] [i_16]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            var_48 = var_9;
                            var_49 = (signed char)-1;
                        }
                        var_50 = ((/* implicit */int) ((unsigned int) arr_54 [i_1 - 1] [i_0] [i_0 - 1] [i_1]));
                        arr_57 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_12));
                        var_51 = ((/* implicit */signed char) (-(((int) arr_49 [(unsigned short)0] [(unsigned char)9] [i_1 - 2] [i_11] [3LL]))));
                    }
                    var_52 = ((/* implicit */signed char) arr_11 [i_0] [(short)3] [i_11]);
                    arr_58 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [i_1 - 1] [(unsigned short)7])))));
                    var_53 -= (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [i_0] [i_0] [3ULL] [i_11]))))) ? (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1]))) : (arr_56 [i_0] [(unsigned char)9] [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_0 - 1] [i_0] [i_1] [i_1 + 1] [i_11]))))))));
                }
            }
        } 
    } 
    var_54 = ((/* implicit */int) ((short) (-(122154932526348027ULL))));
}
