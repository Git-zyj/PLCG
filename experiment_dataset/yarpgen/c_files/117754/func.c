/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117754
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) arr_1 [i_0 + 1]))))))) ? (((int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_4 [i_0] [i_0 - 1] [i_2]) : (arr_4 [i_0] [i_0 - 1] [i_0])))));
                    var_17 = ((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_2 + 2] [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-25))));
                                var_18 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_3]);
                                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_4 + 2] [(unsigned short)0] [i_4 + 2] [i_1 - 2] [i_2 + 2])))))));
                                var_20 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_2 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) var_6);
        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)12]))))) && (((/* implicit */_Bool) ((int) arr_10 [i_5] [i_5] [(unsigned char)6] [i_5]))))))));
    }
    var_23 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 + 1] [i_6 - 1]))) <= (((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 1])) ? (arr_16 [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 1])))))));
        arr_18 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_16 [i_6 + 1]) + (9223372036854775807LL))) >> (((arr_16 [i_6 - 1]) + (6229547059127299605LL)))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_16 [i_6 - 1]) : (arr_16 [i_6 + 1]))) : (min((arr_16 [i_6 - 1]), (arr_16 [i_6 - 1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_23 [i_6] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((((arr_16 [i_6 - 1]) + (9223372036854775807LL))) << (((((arr_16 [i_6 - 1]) + (6229547059127299592LL))) - (12LL)))));
                var_25 = ((/* implicit */unsigned int) ((arr_20 [i_6]) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6]))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            arr_28 [i_6 - 1] [i_7] [i_8] [i_7] [i_7] [i_6 + 1] [i_6 - 1] = ((/* implicit */int) var_10);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)26035)) ? (524284U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57)))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_4)))) <= (arr_26 [i_7 - 1] [i_6] [i_6 + 1])));
                arr_29 [i_6] [i_7 + 1] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_6] [i_7 + 1] [i_7 + 1] [i_8])) / (var_12))) * (((/* implicit */int) arr_27 [i_6] [i_6 + 1] [i_7 - 3] [i_8] [i_7 - 2]))));
            }
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                arr_32 [i_6] [1ULL] [i_11] = ((/* implicit */_Bool) var_14);
                var_28 = ((/* implicit */int) arr_27 [i_6 - 1] [i_6] [i_6] [i_6] [i_7 - 2]);
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_16 [i_6])) * (arr_26 [i_6] [i_7] [i_6 + 1])));
            }
            arr_33 [i_7] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_7] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_24 [i_6] [i_7] [i_6] [i_6] [i_6 + 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 3])))));
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            arr_46 [i_14] [i_6] [i_13] [i_14 - 2] [i_15] [i_15] [i_14] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned short) arr_20 [i_15])), (arr_44 [i_14] [i_14] [i_15] [i_14] [i_14] [i_14]))));
                            arr_47 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] = ((/* implicit */unsigned short) max((arr_30 [i_12] [i_12] [i_14 + 2] [i_12]), (max((arr_30 [i_13] [i_13] [i_14 + 1] [i_14]), (arr_30 [i_12] [i_12] [i_14 + 1] [i_15])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) arr_36 [i_6 + 1] [i_12] [5U]);
            }
            arr_48 [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_20 [i_6]))))))) ? (((/* implicit */int) ((arr_24 [i_6 + 1] [i_12] [i_12] [i_6 - 1] [i_6 - 1]) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 1])))))))) : (((((/* implicit */_Bool) ((arr_26 [(unsigned short)16] [i_6 + 1] [i_6 - 1]) << (((/* implicit */int) arr_30 [i_12] [i_12] [i_12] [i_12]))))) ? (((/* implicit */int) arr_35 [i_6] [i_12] [i_12])) : ((-(((/* implicit */int) arr_41 [i_6 + 1] [i_12] [i_12] [i_12]))))))));
            arr_49 [i_6] [i_12] [i_12] = ((/* implicit */unsigned short) min((((long long int) (~(arr_37 [i_6] [i_6] [(signed char)22])))), (((/* implicit */long long int) (-(arr_45 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_12]))))));
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (long long int i_17 = 2; i_17 < 22; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_41 [i_6] [i_17 - 2] [i_17] [i_18])) != (((/* implicit */int) arr_41 [i_16] [i_17 - 2] [i_16] [i_16])))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */int) arr_50 [i_12] [i_18]))))) ? (((/* implicit */int) arr_35 [i_16] [i_12] [i_6])) : ((-(((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_19 = 1; i_19 < 23; i_19 += 1) /* same iter space */
    {
        arr_60 [i_19] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((arr_30 [i_19 + 1] [i_19 + 1] [i_19] [i_19 + 1]) ? (((/* implicit */int) arr_59 [i_19] [i_19 + 1])) : (((/* implicit */int) arr_25 [i_19])))), (((/* implicit */int) ((short) arr_36 [i_19] [i_19] [i_19])))))), ((~(arr_19 [i_19 + 1] [i_19 + 1])))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) | (-443796833)));
    }
    /* vectorizable */
    for (unsigned short i_20 = 1; i_20 < 23; i_20 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            var_34 *= ((/* implicit */long long int) arr_42 [i_20] [i_20 + 1] [i_20] [i_20 + 1] [i_20 - 1]);
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                for (unsigned long long int i_23 = 2; i_23 < 23; i_23 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_20 - 1] [i_23 - 2] [11] [i_23 - 2])) ? ((-(var_8))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_8)))));
                        arr_71 [13ULL] [13ULL] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((arr_45 [i_23] [i_23 - 1] [i_23 - 1] [i_20 - 1] [i_20]) / (((/* implicit */int) ((signed char) var_14)))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_36 [i_23] [i_23 + 1] [i_20 - 1]))));
                        arr_72 [5] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_20] [i_20 - 1] [i_20] [i_23 - 2]));
                        arr_73 [i_23 - 2] [i_21] [i_21] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((signed char) arr_56 [i_20] [i_21] [i_21] [i_21] [i_22] [(unsigned char)11] [i_23])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_24 = 3; i_24 < 21; i_24 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) arr_31 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]))));
            arr_76 [i_24] [i_24] = ((/* implicit */int) ((unsigned long long int) arr_67 [i_20 + 1]));
            arr_77 [i_24] [i_24] [i_24 + 3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_57 [i_20 - 1]));
        }
        arr_78 [i_20] = ((/* implicit */unsigned short) arr_27 [i_20 - 1] [i_20 - 1] [i_20] [i_20 - 1] [i_20 + 1]);
    }
    for (unsigned long long int i_25 = 2; i_25 < 21; i_25 += 1) 
    {
        var_38 += ((/* implicit */_Bool) min((((/* implicit */int) arr_65 [i_25 + 2] [i_25 + 2] [i_25 + 2])), (((((/* implicit */int) arr_50 [i_25 - 1] [i_25])) % (((/* implicit */int) arr_50 [i_25] [i_25 - 1]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) /* same iter space */
        {
            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1152780767118491648ULL) : (((/* implicit */unsigned long long int) 1655583445))));
            var_40 = arr_81 [i_25 - 1];
        }
        for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (arr_37 [i_25 - 1] [i_27] [i_27]))))));
            var_42 &= ((/* implicit */long long int) var_12);
            arr_87 [i_27] [i_27] = ((/* implicit */int) (-((((-(-123190491117999605LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)48)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_56 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_91 [i_25 - 1] [i_27] [i_25 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_27])) ? (((/* implicit */int) arr_35 [i_25] [i_27] [i_25])) : (((/* implicit */int) arr_67 [i_27])))));
                var_43 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_80 [i_28] [i_25])) ? (arr_84 [i_25]) : (arr_31 [i_25] [i_25] [i_25] [i_25])))));
                var_44 = ((/* implicit */signed char) (-(((unsigned long long int) arr_42 [i_25] [i_27] [i_25] [i_27] [i_27]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                for (long long int i_30 = 0; i_30 < 23; i_30 += 2) 
                {
                    {
                        arr_98 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_70 [i_25 + 1] [i_25 + 1] [i_30])) ? (((/* implicit */int) arr_90 [i_25] [i_25] [i_25])) : (((/* implicit */int) arr_44 [i_25 - 2] [i_25 - 2] [i_25 - 2] [i_30] [i_30] [15ULL]))))))));
                        var_45 = ((/* implicit */_Bool) var_11);
                        arr_99 [i_25] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (int i_31 = 0; i_31 < 20; i_31 += 2) 
    {
        var_46 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_93 [i_31] [i_31] [i_31])) ? (((/* implicit */int) arr_67 [i_31])) : ((+(((/* implicit */int) ((short) var_3)))))));
        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((unsigned short) arr_38 [i_31] [i_31] [i_31] [i_31])))));
        arr_103 [i_31] [i_31] |= ((/* implicit */unsigned int) arr_67 [i_31]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_32 = 0; i_32 < 24; i_32 += 1) 
    {
        var_48 += ((/* implicit */_Bool) (-(((arr_55 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_32] [16U] [i_32] [i_32] [i_32] [i_32] [i_32])))))));
        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) arr_31 [i_32] [i_32] [i_32] [i_32]))));
    }
}
