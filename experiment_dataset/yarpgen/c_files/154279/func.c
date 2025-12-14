/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154279
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) max((arr_2 [i_1]), (arr_6 [i_2] [i_1] [i_1] [i_0])));
                    arr_10 [i_0] = (i_0 % 2 == 0) ? (min((max((((var_3) + (arr_3 [i_0]))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))) : (min((max((((var_3) - (arr_3 [i_0]))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_3]);
                        var_23 *= min(((+(var_14))), (max((((/* implicit */unsigned long long int) 65532U)), (arr_1 [i_0]))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_11))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (3227981660819540959LL))) + (((/* implicit */long long int) (-(var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)48), (((/* implicit */signed char) arr_9 [16] [i_2] [16])))))) : (max(((-(var_13))), (var_13)))))));
                            arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (short)-27933)))))) ? (arr_3 [i_0]) : (((((/* implicit */long long int) var_5)) + (3227981660819540983LL)))));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                            arr_20 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)27932))));
                            arr_21 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_18 [i_5] [i_3] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)124)))))));
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) var_10);
                        }
                    }
                }
            }
        } 
    } 
    var_27 *= var_4;
    /* LoopSeq 1 */
    for (int i_6 = 4; i_6 < 10; i_6 += 3) 
    {
        arr_25 [i_6] [i_6] &= ((/* implicit */unsigned int) (signed char)-117);
        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_6]) : (((/* implicit */int) (unsigned short)24850))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) (~(-5872940052501588350LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)-54)), (var_6)))) >= (max((var_9), (((/* implicit */long long int) 2298597645U))))))) : (min((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_6])) : (var_6))), (((/* implicit */int) arr_17 [(short)14] [i_7] [i_7] [i_7] [i_6 + 2] [i_6] [(short)14]))))))));
            arr_29 [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */unsigned long long int) arr_4 [i_6] [i_7])) + (var_14))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)96)), (arr_23 [i_7])))))));
            var_29 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((var_18) >= (((/* implicit */int) var_7)))))))));
        }
        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (int i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_42 [i_8] [i_10 + 1] [i_11] [i_11] [i_11]))));
                            var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9]))) : (arr_4 [i_9] [i_6]))) ^ (((/* implicit */unsigned int) arr_40 [i_11] [i_8]))));
                        }
                        for (int i_12 = 2; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            arr_46 [i_6] [i_8] [i_9] [i_9] [i_12] = ((/* implicit */int) (-(((unsigned long long int) min((632045492), (((/* implicit */int) (_Bool)1)))))));
                            var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_6] [i_8]))));
                            var_33 *= ((/* implicit */short) arr_27 [i_12]);
                            var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_6] [i_6 + 2] [i_12 - 1] [i_12]) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_41 [i_12] [i_10] [i_9] [i_8] [i_6])), (arr_11 [i_12] [i_12] [i_6])))))))) ? ((-(((/* implicit */int) var_15)))) : ((~(((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_9] [i_8] [i_6]))))))))));
                            var_35 *= ((/* implicit */unsigned char) arr_32 [i_12]);
                        }
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (unsigned short)65516))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    {
                        arr_51 [i_6] [i_8] [i_13] [i_14] = ((((/* implicit */_Bool) ((unsigned char) 29360128))) ? ((~((~(var_11))))) : (((/* implicit */unsigned long long int) 5872940052501588356LL)));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            var_37 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((arr_39 [i_15] [i_13] [i_8] [i_6]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [i_6])))))))));
                            var_38 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_19 [i_6] [i_13] [i_14] [i_15])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_53 [i_6] [i_8] [i_13] [i_15] [i_15])) : (var_11))) : (((/* implicit */unsigned long long int) 2298597645U)))), (((/* implicit */unsigned long long int) arr_18 [i_15] [i_14] [i_15] [i_8] [i_6]))));
                        }
                        for (signed char i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            arr_58 [i_14] [i_13] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_49 [i_13] [i_6])), (min(((unsigned short)1015), (((/* implicit */unsigned short) arr_27 [0U])))))))));
                            arr_59 [i_13] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) -5872940052501588357LL)) ? (1019825207) : (arr_40 [i_8] [i_14])))) + (((var_0) + (((/* implicit */long long int) arr_38 [i_16] [(_Bool)1] [i_13] [i_13] [(_Bool)1] [i_6])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)40691)), (arr_35 [i_6] [i_8] [i_13] [i_16])))), (((((/* implicit */_Bool) (unsigned short)47832)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))))))))));
                            var_39 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_19 [i_16] [i_13] [i_8] [i_6])))) + (2147483647))) >> (((5872940052501588356LL) - (5872940052501588331LL)))));
                        }
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (7989618041569931602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27932)))))) ? (((/* implicit */int) max((arr_16 [2ULL]), (((/* implicit */short) (signed char)107))))) : (((/* implicit */int) ((_Bool) arr_41 [i_14] [i_13] [i_13] [i_8] [i_6]))))), (max((((/* implicit */int) (signed char)5)), (arr_24 [i_8]))))))));
                        arr_60 [i_6] [i_8] [i_13] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(min((arr_50 [i_8]), (arr_31 [i_8] [i_14])))))), (((((1073725440LL) / (-5872940052501588357LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_8] [i_13] [i_13] [i_13] [i_13] [0]))))))))));
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (((-(min((0ULL), (((/* implicit */unsigned long long int) (signed char)-123)))))) >> (((/* implicit */int) ((_Bool) arr_48 [i_6] [i_8] [i_13] [i_14]))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        {
                            arr_71 [i_19] [i_19] [i_18] [i_17] [i_8] [i_6] = ((/* implicit */unsigned char) var_6);
                            arr_72 [i_19] [i_19] [i_18] [i_17] [i_8] [i_8] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_70 [i_6] [i_6] [i_6] [i_6 - 3] [i_17] [i_17] [i_19])) && (((/* implicit */_Bool) (signed char)-107)))) ? (((unsigned long long int) arr_56 [i_19] [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56176)))));
                            var_42 = ((/* implicit */unsigned int) ((signed char) 1ULL));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_20 = 1; i_20 < 11; i_20 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) max((((((((/* implicit */_Bool) var_1)) ? (arr_32 [i_6]) : (arr_73 [i_6] [10U] [i_20]))) & (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_20] [i_20] [i_20] [i_20] [i_6] [i_6] [i_6]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((short) arr_44 [4U] [i_6] [i_6] [i_20] [i_20]))) : ((~(((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_6] [i_6]))))))))))));
            var_44 = min((arr_18 [i_20] [i_6] [i_20] [i_6] [i_6]), (((/* implicit */long long int) (unsigned short)2597)));
        }
        var_45 = ((/* implicit */unsigned short) arr_32 [i_6]);
    }
    var_46 = ((/* implicit */unsigned short) var_14);
}
