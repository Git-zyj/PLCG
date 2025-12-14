/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120494
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) var_3)), (((/* implicit */int) var_7))))) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)164))))) ? (min((225050083), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_10)) : (var_8)))))));
    var_12 = ((/* implicit */_Bool) var_2);
    var_13 = ((/* implicit */unsigned char) (+(var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)81);
        var_14 = (signed char)16;
        arr_4 [i_0] = ((/* implicit */signed char) -31);
        arr_5 [i_0 + 1] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((int) (signed char)113);
        var_16 |= ((/* implicit */int) arr_6 [(unsigned short)10]);
        var_17 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)24904)) ? (var_0) : (var_3)))));
        var_18 = ((/* implicit */int) (+(arr_6 [21ULL])));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) arr_6 [i_2 + 1]);
            arr_10 [i_1] [i_1] [5] = ((/* implicit */short) arr_6 [(signed char)19]);
            var_20 ^= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [4] [i_1] = ((/* implicit */short) arr_11 [i_1] [i_1]);
            arr_16 [i_1] [i_3] = (+(((/* implicit */int) arr_8 [i_3 + 1] [i_3])));
            var_21 = -611547359;
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */int) arr_18 [i_1] [i_1]);
            /* LoopSeq 3 */
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
            {
                arr_21 [i_4] = ((/* implicit */int) arr_12 [i_1] [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) arr_8 [i_6 - 1] [i_6 - 1]);
                    arr_24 [i_4] = ((/* implicit */int) arr_18 [i_5 + 3] [i_1]);
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((signed char) 1608651820)))));
                    arr_25 [i_1] [i_4 + 1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)3376)))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_28 [(unsigned char)22] [(signed char)10]) : (var_6)))) ? (arr_11 [i_7 - 1] [i_4 + 1]) : (560003400)));
                        var_26 = ((/* implicit */unsigned short) arr_8 [i_7 - 1] [i_4 + 1]);
                        var_27 = arr_6 [i_1];
                    }
                    arr_30 [i_4] [i_5] [i_7 - 1] = ((/* implicit */unsigned char) arr_7 [i_5]);
                }
                arr_31 [i_4] [i_4] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((unsigned int) arr_29 [i_1] [i_1] [i_4 + 1] [i_4] [i_5 + 3])) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_32 [i_1] [i_4] = arr_12 [(unsigned short)6] [i_4];
            }
            for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) /* same iter space */
            {
                arr_35 [i_4] [7] [i_9 + 2] = ((/* implicit */unsigned short) ((arr_34 [i_9 + 2] [i_9 + 1] [i_9]) ? (((/* implicit */int) arr_34 [i_9 - 1] [(short)10] [i_9 - 1])) : (((/* implicit */int) (signed char)-119))));
                var_28 |= ((/* implicit */short) (+(var_0)));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 3; i_10 < 22; i_10 += 1) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61809))))) ? ((+(arr_7 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)62)) : (12))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) (-(-560003424)));
                        arr_40 [i_1] [i_4 + 1] [i_4] [i_4 + 1] [(signed char)4] [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_10 - 2] [i_4 + 1])) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) arr_29 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))));
                        arr_41 [i_4] = ((/* implicit */int) (+(arr_7 [i_9])));
                    }
                    /* LoopSeq 3 */
                    for (int i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        arr_44 [i_1] [12U] [(signed char)18] [(unsigned short)6] [i_12 - 1] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_12 - 2] [(_Bool)0] [i_9 + 1] [(_Bool)0] [i_1]))));
                        var_31 |= ((/* implicit */unsigned int) arr_39 [i_1] [(unsigned char)18] [i_1]);
                        var_32 = ((/* implicit */signed char) var_9);
                        arr_45 [i_4 + 1] [i_4] [i_10] [(unsigned short)13] = ((/* implicit */unsigned int) arr_42 [i_1] [(unsigned short)11] [14U] [i_1]);
                    }
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_33 = ((/* implicit */int) arr_20 [i_4]);
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((signed char) arr_9 [i_1] [i_4])))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_29 [i_1] [i_4] [i_4] [i_13] [i_13]))));
                        var_36 ^= ((/* implicit */int) var_4);
                    }
                    for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        arr_52 [i_4] [i_4] [i_4] [i_9] [i_9] [i_14] [6U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_9 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46328))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_1] [i_4 + 1] [(unsigned char)23] [i_10] [i_4] [i_10])))))));
                        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_9 + 2] [i_10] [i_10 - 2] [i_10 + 2] [i_14] [i_14]))));
                        arr_53 [i_4] = (-((+(((/* implicit */int) (signed char)56)))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10 - 3] [i_9 - 1])) ? (((((/* implicit */_Bool) arr_39 [i_9] [i_4] [i_4])) ? (15965394741800625287ULL) : (((/* implicit */unsigned long long int) 1608651843)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (arr_47 [(unsigned char)23] [i_1] [i_1] [(short)19] [i_4] [i_14]) : (((/* implicit */int) (short)3360)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_57 [i_4] [i_9] [i_9] [i_9] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_10])) ? (arr_6 [i_4 + 1]) : (((/* implicit */unsigned long long int) var_5))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned char)8] [i_10] [10ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_4 + 1] [i_9] [i_9]))) : (var_2)))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) var_4))))))))));
                        arr_58 [i_4] = ((((/* implicit */_Bool) arr_8 [i_9 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_56 [i_9] [i_9 + 1] [i_4] [i_9 + 1] [i_9 + 3])) : (560003418));
                        arr_59 [i_1] [i_1] [i_1] [i_4] [i_1] = ((((/* implicit */_Bool) arr_55 [i_10] [i_10] [i_10 + 1] [23] [i_10] [i_10 - 2])) ? (((/* implicit */int) arr_27 [i_10] [23U] [i_10] [23U] [i_10] [i_10 - 1])) : (((/* implicit */int) arr_27 [i_10] [i_10 - 2] [i_10 + 2] [i_10 - 2] [i_10 - 2] [i_10 - 1])));
                        var_40 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-15))));
                    }
                }
                var_41 = (+(((/* implicit */int) (signed char)-59)));
            }
            for (short i_16 = 2; i_16 < 22; i_16 += 4) 
            {
                var_42 = ((int) 642311993U);
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 4194303)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [(unsigned char)22]))) : (arr_20 [i_4])));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) -32))));
                    arr_64 [i_1] [i_1] [14] [i_16 + 1] [i_16] |= ((/* implicit */int) (short)-3360);
                }
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    arr_67 [17] [17] [i_16] [17] [i_4] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (560003418) : (var_5)))) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_4] [(signed char)5] [i_4] [(signed char)9])))))));
                    var_45 = ((/* implicit */unsigned short) var_7);
                }
            }
        }
    }
    for (unsigned char i_19 = 3; i_19 < 11; i_19 += 3) 
    {
        arr_70 [i_19 - 3] = var_9;
        /* LoopSeq 2 */
        for (short i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            var_46 = ((((/* implicit */_Bool) -2120373904)) ? (((/* implicit */unsigned int) -1608651823)) : (arr_46 [i_19] [(_Bool)1] [(_Bool)1] [i_19] [i_19] [i_20]));
            /* LoopSeq 1 */
            for (signed char i_21 = 2; i_21 < 13; i_21 += 2) 
            {
                var_47 |= ((/* implicit */unsigned char) (~((~((-(arr_6 [(signed char)16])))))));
                var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)14458)) ? ((+(((/* implicit */int) arr_42 [i_19 + 1] [i_19 + 1] [i_19] [i_19])))) : (((/* implicit */int) ((signed char) arr_9 [i_19 + 1] [i_21 + 1])))));
            }
        }
        for (int i_22 = 3; i_22 < 13; i_22 += 2) 
        {
            var_49 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_37 [i_19] [18])) ? (-2147483641) : (((/* implicit */int) arr_12 [i_19] [i_22]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_19 + 1] [i_22] [i_19]))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4070657005U)))) ? (max((((/* implicit */unsigned int) var_9)), (arr_66 [(unsigned short)12] [i_19 + 3] [i_22 - 1] [(signed char)4] [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_19] [i_19 + 1] [5])))))));
            var_50 = ((/* implicit */int) min((((/* implicit */unsigned int) 1608651794)), ((+(67108863U)))));
            var_51 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)63))))) ? (((((/* implicit */_Bool) (short)-21446)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [(unsigned char)4] [i_22]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (max((((/* implicit */unsigned int) 276112076)), (max((224310288U), (((/* implicit */unsigned int) arr_23 [(unsigned short)18] [i_22] [i_22 - 2] [i_22 - 3] [(short)18] [i_22 - 2]))))))));
            /* LoopNest 3 */
            for (unsigned short i_23 = 2; i_23 < 11; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        {
                            arr_86 [(_Bool)1] [i_25] [i_23] [(signed char)12] [i_22] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_84 [i_22] [i_22] [i_23] [i_23] [i_23] [i_25])), (arr_28 [i_22] [i_22]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_69 [i_19 + 3])))) ? (arr_36 [i_22 - 2] [i_19 - 2]) : (arr_47 [(short)18] [i_22 + 1] [i_22] [i_22] [i_22] [i_22])))));
                            arr_87 [i_25] [i_22] [i_22] [i_22] [i_19] = ((/* implicit */short) min((((/* implicit */int) max(((signed char)93), (arr_23 [i_19 + 3] [i_22] [i_22 - 2] [i_22] [i_23] [i_23 + 3])))), (max(((~(((/* implicit */int) (short)-13421)))), (var_5)))));
                        }
                    } 
                } 
            } 
        }
    }
}
