/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105634
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((11U) % (((/* implicit */unsigned int) ((int) arr_0 [(short)18])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_1 - 2])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_21 += ((unsigned int) arr_2 [i_0] [i_1 - 2]);
        }
        for (signed char i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (+(3775344087U)));
            var_23 = ((/* implicit */int) (~(arr_2 [i_2 + 1] [i_0])));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_5 [(_Bool)1]);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_6 [(signed char)0] [i_2 + 1] [(signed char)0]) : (((/* implicit */int) var_5))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_8 [i_3 - 1]))));
            arr_10 [i_3] = ((/* implicit */unsigned int) ((int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]));
        }
        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) 14U);
            var_27 = ((/* implicit */long long int) ((signed char) arr_12 [20U]));
        }
        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) | (((/* implicit */int) (short)-28711))))) ? (((/* implicit */int) arr_11 [i_5 - 2] [i_7 - 1])) : (((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_29 += ((/* implicit */short) arr_22 [i_8] [i_6] [i_6] [i_6] [i_0]);
                            var_30 = ((/* implicit */signed char) arr_11 [i_0] [i_0]);
                        }
                        var_31 = ((/* implicit */_Bool) arr_8 [i_5 - 2]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                var_32 -= ((((/* implicit */_Bool) arr_25 [2LL] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_5] [i_5 + 1] [2LL])) ? (((/* implicit */int) arr_25 [16LL] [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_5] [i_5 - 2] [16LL])) : (((/* implicit */int) var_5)));
                /* LoopSeq 2 */
                for (short i_10 = 2; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1729291689)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)448))))) ? (((/* implicit */int) (signed char)-20)) : (((((/* implicit */_Bool) 150637667)) ? (-2129571520) : (((/* implicit */int) (_Bool)1))))));
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((unsigned long long int) ((arr_23 [i_0] [i_5 + 1] [9] [i_10] [i_5]) ^ (((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))))))));
                }
                for (short i_11 = 2; i_11 < 21; i_11 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) ((int) arr_6 [i_11] [i_5 - 3] [i_5 - 3]));
                    /* LoopSeq 4 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_36 -= ((/* implicit */short) ((arr_21 [i_12] [(signed char)17] [i_5 - 1] [2U] [i_5 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_11 - 1] [i_11 - 2] [i_5] [i_9 + 2])) ? (((/* implicit */int) var_3)) : (arr_6 [i_11 - 2] [i_5 - 3] [i_5])));
                        var_38 += ((/* implicit */signed char) ((arr_21 [i_0] [i_0] [i_9] [i_11] [i_12]) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_18)))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 34U)) ? (-1917457566) : (-2129571520)))) : (arr_16 [i_5] [i_9] [i_5]))))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) -2129571508))));
                        var_41 = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_5]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_43 [i_0] [i_5] [i_5] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
                        arr_44 [i_0] [i_11] [i_9] [i_5] [i_14] [i_5] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_9 + 1] [i_11 - 1])) ? (8314425282815605208ULL) : (((/* implicit */unsigned long long int) arr_36 [i_9 - 1] [i_11 + 1]))));
                    }
                    for (unsigned int i_15 = 4; i_15 < 20; i_15 += 2) 
                    {
                        arr_48 [i_0] [0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3)))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5])) % (((/* implicit */int) arr_35 [i_5 + 3] [i_5 + 2] [i_5 + 3] [i_5] [i_5 - 1] [i_5 - 2]))));
                    }
                }
            }
            for (short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            arr_57 [i_0] [i_5 - 3] [i_5] = ((/* implicit */int) var_2);
                            var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_5 + 2] [i_5 + 2] [i_5 - 1]))));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_18] [i_17] [2ULL] [i_5 - 3] [i_0])) ? ((-(((/* implicit */int) arr_37 [i_0] [(unsigned char)15] [i_16] [i_17] [i_18])))) : (((/* implicit */int) (signed char)-82))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_20 = 2; i_20 < 21; i_20 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((signed char) (~(var_0)))))));
                        var_45 += ((/* implicit */long long int) (+(arr_0 [i_20 - 2])));
                        var_46 = (+((+(((/* implicit */int) arr_37 [(signed char)18] [i_19] [i_16] [i_5] [i_0])))));
                        var_47 = 2507500915276644019LL;
                        arr_63 [i_0] [i_5] [i_16] [i_19] [8] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)29426)))) : (arr_33 [i_0] [i_5 - 3] [i_16] [i_0] [i_20 - 2])));
                    }
                    for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) ((arr_26 [i_5 - 2] [i_5 - 2] [i_5 - 2]) ? (159751337) : (((/* implicit */int) var_7))));
                        var_49 = ((/* implicit */unsigned int) ((short) (signed char)35));
                        var_50 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_21] [i_19] [i_16] [i_5] [i_21])) | (((/* implicit */int) arr_1 [i_0] [11]))))) ? (((/* implicit */int) arr_26 [i_21] [i_5] [i_0])) : (((((/* implicit */int) var_1)) << (((arr_32 [(unsigned char)21] [i_5] [i_19] [i_21]) - (7143183251419245015ULL)))))));
                        var_51 ^= ((/* implicit */unsigned long long int) ((2129571530) & (((/* implicit */int) var_1))));
                        var_52 = ((/* implicit */unsigned char) ((((1494129656) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_0]))) : (((/* implicit */int) ((signed char) -5103851406918077404LL)))));
                    }
                    for (int i_22 = 0; i_22 < 22; i_22 += 2) 
                    {
                        var_53 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_50 [i_0] [i_5] [i_22]))) - ((-(((/* implicit */int) (_Bool)0))))));
                        arr_68 [i_5] [13] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)3)))));
                        var_54 = ((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_16] [i_5] [i_22] [i_5]);
                    }
                    var_55 -= ((/* implicit */unsigned int) (_Bool)1);
                    arr_69 [(unsigned char)4] [i_16] [i_16] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)4)))) ? (((unsigned long long int) 14U)) : ((-(arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((unsigned int) arr_22 [(short)6] [i_5] [i_16] [(unsigned char)20] [i_19])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_5 - 2]))));
                        arr_72 [16U] [i_5 + 2] [i_0] [i_5] [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_35 [i_0] [i_0] [i_0] [i_5] [i_23] [i_23]);
                    }
                }
                for (short i_24 = 0; i_24 < 22; i_24 += 2) 
                {
                    var_58 = ((/* implicit */long long int) arr_4 [i_5] [i_16] [i_24]);
                    var_59 = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (int i_25 = 0; i_25 < 22; i_25 += 3) 
                {
                    var_60 -= ((/* implicit */signed char) ((arr_51 [2U]) ? (((/* implicit */int) arr_51 [6ULL])) : (var_6)));
                    /* LoopSeq 2 */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 3) 
                    {
                        var_61 = ((/* implicit */unsigned long long int) (-(arr_28 [i_5 + 2] [i_5] [(signed char)20])));
                        var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [i_0] [i_0] [i_5 - 2])) ? (((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (arr_38 [i_25] [(_Bool)1]))) : ((~(arr_2 [i_0] [i_5 + 3])))));
                        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) ((unsigned char) ((short) arr_16 [i_0] [i_0] [i_0]))))));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned int) ((int) arr_81 [i_5] [i_5] [9U] [i_5] [i_5 + 1]));
                        arr_83 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */int) ((unsigned long long int) 11U));
                    }
                    var_65 = ((((/* implicit */long long int) ((/* implicit */int) arr_79 [i_5] [i_5] [i_5]))) & (var_9));
                }
            }
        }
    }
    for (unsigned int i_28 = 0; i_28 < 22; i_28 += 1) /* same iter space */
    {
        arr_86 [i_28] = ((/* implicit */signed char) arr_61 [i_28]);
        var_66 = ((/* implicit */unsigned int) max((var_66), (((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_74 [10U] [(unsigned short)14] [i_28] [i_28])))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [(unsigned short)7] [i_28] [i_28] [i_28]))) * (arr_2 [i_28] [i_28]))), (((unsigned int) 1494129637)))) : (((unsigned int) max((var_17), ((short)6801))))))));
        var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_76 [8] [8] [i_28] [i_28] [i_28]), (980068285U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15685)) || (((/* implicit */_Bool) (short)4282)))))) : ((-(max((((/* implicit */unsigned long long int) (short)32747)), (14661651185444793625ULL))))))))));
        arr_87 [i_28] [i_28] = ((/* implicit */unsigned int) var_3);
    }
    var_68 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */int) (signed char)(-127 - 1))))) / (((/* implicit */int) var_5))))), (((3785092888264757990ULL) - (((/* implicit */unsigned long long int) 526268277))))));
}
