/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181959
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = (+(486589029U));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) (signed char)0);
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_9 [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)10] [i_1] [i_2] [i_1 + 1])) ? (((/* implicit */int) arr_6 [(signed char)14] [(signed char)14] [(signed char)14] [i_1 + 1])) : (((/* implicit */int) (signed char)18))));
                arr_10 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_1 - 1]);
                var_14 += ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_1]);
                var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (arr_7 [i_1] [i_2]));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 170502625)) ? (arr_7 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [6U] [6U])))));
                var_17 *= ((/* implicit */unsigned short) ((10ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
            for (signed char i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [(signed char)13])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)1847))))));
                arr_17 [i_0] [i_1 - 3] [i_1] [14ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)2))));
                arr_18 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((6704511001700962345ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))));
                arr_19 [i_1] [i_4 + 3] = ((/* implicit */signed char) 1864011877U);
                arr_20 [i_4] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) (+(var_7)));
            }
            for (signed char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_5]))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)-28215)) : (((/* implicit */int) (short)28217))));
                arr_25 [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 18446744073709551604ULL)))) ? (((((/* implicit */_Bool) (short)28940)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)255)))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_5 + 2])) && (((/* implicit */_Bool) ((unsigned int) (signed char)100)))));
                            arr_31 [i_0] [i_6 - 3] [i_5] [i_0] = ((/* implicit */unsigned int) arr_22 [i_1 + 3] [i_6 + 1] [i_6 + 1] [i_6]);
                            arr_32 [(signed char)3] [i_1 + 1] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_12 [i_6])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                arr_35 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_4)) : (arr_26 [i_1 - 1] [(unsigned short)11] [i_0])));
                var_21 = ((/* implicit */unsigned long long int) 4294967290U);
            }
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_22 = ((/* implicit */int) var_10);
                arr_38 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_28 [i_9])) << (((((/* implicit */int) var_10)) - (9811)))))));
            }
            arr_39 [i_0] [i_0] = (signed char)25;
            var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (1044344366U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        }
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_0] = ((((arr_23 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) <= (3541530259U))))));
            /* LoopSeq 4 */
            for (int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
            {
                arr_46 [i_0] [(short)9] [i_11] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_43 [i_11] [i_11] [i_10] [i_0])))));
                var_24 = ((/* implicit */int) var_11);
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */signed char) var_3);
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1044344365U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
            }
            for (int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
            {
                arr_55 [i_0] [i_10] [i_0] [i_0] |= ((/* implicit */int) var_3);
                var_26 = var_3;
            }
            for (int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
            {
                arr_58 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((3175990483U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) != (2528620139U)));
                arr_59 [(signed char)9] [i_0] [i_10] [i_15] = ((/* implicit */unsigned int) var_9);
                arr_60 [i_0] [i_0] [15U] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [9U] [5U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) ((signed char) (unsigned short)5)))));
                var_27 = ((/* implicit */unsigned short) var_10);
            }
            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_0] [i_10] [i_10] [i_10])) <= (((/* implicit */int) arr_45 [i_16] [i_10] [i_10] [i_0]))));
                arr_64 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (2465120193153437228ULL)));
                var_29 = arr_11 [i_0] [i_10] [i_16];
            }
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned short) arr_23 [i_10])))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) ((var_0) << (((((/* implicit */int) var_1)) - (56644)))));
                        arr_69 [i_0] [i_0] [i_0] [i_10] [(unsigned short)15] [i_18] = ((/* implicit */unsigned long long int) var_0);
                        arr_70 [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4194302U))));
                        arr_71 [14ULL] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((3175990479U) >= (162578221U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) <= (var_7))))) : (((3175990478U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
        {
            var_32 = ((2385550633468857147ULL) << (((((/* implicit */int) var_5)) + (123))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]))));
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) : (72535895U))))));
            var_35 = ((unsigned long long int) arr_29 [i_0] [i_0] [i_19] [i_19] [15ULL] [i_19] [i_19]);
        }
        arr_74 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) : (arr_14 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_20 = 1; i_20 < 21; i_20 += 2) 
    {
        var_36 += ((/* implicit */short) ((((/* implicit */int) var_1)) << (((/* implicit */int) ((15980708409899529902ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))))))));
        arr_79 [i_20] = var_7;
    }
    for (int i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            for (int i_23 = 1; i_23 < 8; i_23 += 4) 
            {
                {
                    var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) arr_43 [i_21] [i_22] [i_22] [i_23])), (arr_5 [i_23] [i_22] [i_22]))) : (max((((/* implicit */unsigned long long int) arr_52 [i_21] [i_21] [i_21] [i_21])), (arr_22 [i_21] [i_22] [i_23] [i_23]))))) - (((/* implicit */unsigned long long int) ((arr_48 [i_23 + 1] [i_23 + 1] [i_23 - 1]) & (((/* implicit */int) var_6)))))));
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)44875)))))));
                    var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_26 [i_21] [i_21] [i_21]) >= (arr_26 [i_21] [i_22] [i_23 - 1]))))));
                    var_40 -= ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        var_41 = ((/* implicit */short) var_6);
    }
    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            for (unsigned int i_26 = 0; i_26 < 12; i_26 += 1) 
            {
                {
                    var_42 = arr_76 [(signed char)16];
                    var_43 = ((/* implicit */unsigned long long int) max((((max((var_7), (((/* implicit */unsigned int) (signed char)-78)))) << (((((/* implicit */int) ((unsigned char) arr_62 [i_24] [i_24] [i_24] [i_24]))) - (41))))), (((((/* implicit */_Bool) arr_43 [i_24] [i_24] [i_25] [i_26])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_25])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        for (signed char i_28 = 0; i_28 < 12; i_28 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) ((int) (~(arr_54 [i_25] [i_25] [i_25]))));
                                var_45 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6))))) >> (((/* implicit */int) arr_44 [i_24] [i_26] [i_27])))));
                                var_46 = ((/* implicit */unsigned int) arr_2 [13U]);
                            }
                        } 
                    } 
                    arr_101 [i_26] = ((/* implicit */unsigned short) (-(arr_89 [i_26] [i_25])));
                }
            } 
        } 
        var_47 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (14U)))) || (((/* implicit */_Bool) arr_48 [i_24] [i_24] [i_24])))) ? ((-(((/* implicit */int) arr_67 [(signed char)0] [i_24] [(signed char)0] [i_24] [i_24] [i_24])))) : (((/* implicit */int) arr_56 [i_24] [(unsigned char)5] [i_24]))));
        arr_102 [i_24] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) max(((signed char)-117), ((signed char)46)))) ? (arr_13 [i_24] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    var_48 &= ((unsigned short) 10246192192209074009ULL);
    var_49 = ((/* implicit */signed char) var_1);
}
