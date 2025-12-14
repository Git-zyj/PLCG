/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145620
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
    var_17 *= ((/* implicit */short) var_8);
    var_18 = ((/* implicit */unsigned int) ((_Bool) 11985083749947964814ULL));
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 6461660323761586801ULL)) ? (((/* implicit */int) (short)18373)) : (((/* implicit */int) (unsigned char)184)))), ((~(127768585))))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */int) -3732137337775555888LL);
        var_20 = ((/* implicit */short) ((unsigned char) arr_2 [i_0]));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((unsigned char) (-(((/* implicit */int) var_0))))), (((unsigned char) min((var_5), (((/* implicit */unsigned long long int) (unsigned short)52579)))))));
        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) (unsigned char)163))))) << (((((/* implicit */int) (short)-2385)) + (2411)))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!((!(((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))))));
        var_23 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned short) (short)2032))))))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_24 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)163)))) ? (((unsigned int) (signed char)-107)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [3])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned short)23003)))))));
        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */int) ((_Bool) arr_10 [i_3 + 1] [i_3]));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    arr_21 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */signed char) var_10);
                    var_27 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)23003))), (((arr_14 [i_4 - 4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2033)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */int) var_5);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 4; i_9 < 12; i_9 += 4) 
                        {
                            arr_29 [i_9 - 2] [i_9 + 1] [i_9] [i_4] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_5 [i_9 - 4] [i_8 + 2])) : (((/* implicit */int) arr_12 [i_4 + 2]))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            var_30 = ((/* implicit */short) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_5 + 2] [i_4] [i_4] [2] [(signed char)4])))));
                            arr_30 [i_4 - 2] [i_4 - 1] [i_4] [(unsigned short)10] [i_4] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_5))));
                        }
                    }
                    arr_31 [(short)10] [i_5] [i_5] [(unsigned short)10] &= ((/* implicit */int) (unsigned char)184);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) min((arr_14 [i_10]), (((/* implicit */unsigned long long int) var_0)))))) + (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)52579))))));
                        arr_34 [(unsigned char)0] [i_7] [4U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11985083749947964814ULL)) ? ((+(((((/* implicit */unsigned long long int) arr_33 [i_4 - 2] [i_5 - 1] [i_5 - 1] [(signed char)0] [(signed char)7])) / (6461660323761586801ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)28793))) / (26967268U))) / (((/* implicit */unsigned int) ((arr_15 [8U]) / (((/* implicit */int) arr_26 [i_4 - 4] [i_4 + 1] [i_7]))))))))));
                        arr_35 [i_10] [8] [8] [i_4] &= ((/* implicit */unsigned char) arr_4 [(unsigned char)9] [(unsigned char)9]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 13; i_11 += 4) 
                    {
                        for (signed char i_12 = 2; i_12 < 12; i_12 += 2) 
                        {
                            {
                                arr_43 [i_4] = ((/* implicit */short) arr_25 [i_4 - 1] [i_5 - 1] [i_5 - 1] [i_7] [i_11] [i_12 + 3]);
                                arr_44 [i_5] [i_4] [(short)0] [(short)0] [(short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) arr_16 [i_4])) : (max((min((arr_14 [i_5]), (((/* implicit */unsigned long long int) arr_33 [(signed char)2] [i_5 + 2] [i_5 + 2] [i_11] [(signed char)9])))), (((/* implicit */unsigned long long int) (signed char)-25))))));
                                arr_45 [i_4] [i_11] [i_11 + 1] [i_12] [i_4] [(_Bool)0] [i_4] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)92)), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-31))))) ? (max((6461660323761586801ULL), (((/* implicit */unsigned long long int) (unsigned char)163)))) : (((/* implicit */unsigned long long int) (~(var_8))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    arr_50 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)10842)) * (((/* implicit */int) (unsigned char)208)))));
                    var_32 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_10)))));
                    arr_51 [i_4] [i_5] [i_13] = ((/* implicit */signed char) -422967045);
                    /* LoopSeq 4 */
                    for (int i_14 = 4; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_13] [i_4] [i_13] [i_4] [i_5 + 1])) | (((/* implicit */int) var_13))));
                        var_34 = ((/* implicit */unsigned char) var_11);
                        var_35 += ((/* implicit */short) (unsigned short)54694);
                    }
                    for (int i_15 = 4; i_15 < 13; i_15 += 2) /* same iter space */
                    {
                        arr_56 [i_15] [(signed char)2] &= (-(((11985083749947964815ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_4 - 4] [i_5 + 1] [i_13 + 2] [i_13 + 3] [i_15] [i_13 + 1]))))));
                        arr_57 [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_24 [i_15 + 2] [(unsigned char)11] [i_15] [i_13 - 1]) >> (((((/* implicit */int) ((signed char) var_16))) - (100)))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 14; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */int) (short)-27799);
                        var_37 += ((/* implicit */unsigned short) (-(arr_58 [i_5 + 2] [i_4 - 2])));
                        var_38 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        arr_62 [i_4 + 2] [i_5 + 1] [i_4] = ((/* implicit */short) (-(arr_25 [(unsigned short)14] [(unsigned short)14] [i_5] [i_5] [i_16] [i_16])));
                        var_39 = ((/* implicit */unsigned short) ((unsigned char) arr_36 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 1] [i_4]));
                    }
                    for (unsigned char i_17 = 3; i_17 < 14; i_17 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            var_40 &= ((/* implicit */unsigned long long int) var_6);
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_4])) ^ (((/* implicit */int) arr_11 [i_4]))));
                        }
                        for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 2) 
                        {
                            arr_72 [i_4] [i_4] [i_13] [i_13] [i_19] [i_13] [i_4] = ((/* implicit */int) arr_66 [i_4] [i_5] [(unsigned char)11] [i_17] [i_5]);
                            var_42 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_9 [(signed char)8] [(signed char)8])) - (((/* implicit */int) (unsigned short)12957)))));
                            var_43 = ((/* implicit */int) ((unsigned int) var_15));
                        }
                        for (unsigned char i_20 = 2; i_20 < 13; i_20 += 3) 
                        {
                            var_44 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4 + 1]))));
                            arr_77 [i_4 + 1] [i_4] [(short)0] [i_4 + 1] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_13 + 3] [i_13] [i_13 - 1] [i_13] [i_13])) == (((/* implicit */int) (unsigned char)182))));
                        }
                        var_45 = arr_19 [i_13 + 2];
                        var_46 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_4 - 4] [(short)8] [i_4 - 4]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        for (long long int i_22 = 3; i_22 < 14; i_22 += 4) 
                        {
                            {
                                arr_83 [i_13] [i_13] [i_13] [(_Bool)1] [i_21] [i_21] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)69)) != (((/* implicit */int) (unsigned char)219))));
                                var_47 |= ((/* implicit */unsigned char) arr_54 [i_21] [i_4 - 2] [i_13 + 2] [i_22 - 1]);
                            }
                        } 
                    } 
                }
                arr_84 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (short)13223))), (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((14196597295955489590ULL), (((/* implicit */unsigned long long int) ((short) arr_52 [i_4 - 3] [i_4] [i_4] [i_4])))))));
            }
        } 
    } 
    var_48 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (11985083749947964815ULL)));
}
