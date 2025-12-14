/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178209
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
    var_20 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) var_16);
                    var_22 += min((((/* implicit */int) arr_2 [i_0])), (((arr_1 [i_2] [(unsigned short)3]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_12)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_23 |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))));
            arr_9 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)65535))));
        }
        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_0] [i_4] [i_0] [i_0]))));
                arr_14 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) arr_2 [i_5]);
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] [0] = ((/* implicit */int) arr_1 [i_4 - 1] [i_4 - 3]);
                var_25 = ((/* implicit */unsigned int) var_14);
                var_26 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_4 + 1]))));
            }
            /* LoopSeq 2 */
            for (long long int i_7 = 4; i_7 < 9; i_7 += 2) 
            {
                arr_21 [i_0] [i_0] [i_0] [(short)1] = ((/* implicit */signed char) arr_13 [i_7 + 2] [i_4] [i_4 + 1] [i_4]);
                var_27 = ((/* implicit */signed char) min((arr_5 [i_4] [i_4] [i_4]), (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_4 - 3] [i_4 - 3] [i_7 - 3]) : (arr_5 [i_4 - 3] [i_4 - 2] [i_7 + 2])))));
                var_28 -= ((/* implicit */unsigned char) arr_15 [4ULL] [i_0] [i_0] [i_0]);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_7 - 2])) ? (((((/* implicit */_Bool) min((arr_11 [(_Bool)1] [10ULL]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) max(((_Bool)1), (var_13)))))) : (((((/* implicit */_Bool) arr_17 [i_4 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_4 + 1] [i_7 - 2] [i_7] [i_7 - 2]))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_30 = ((/* implicit */signed char) arr_16 [i_0]);
                var_31 -= ((/* implicit */signed char) var_4);
                var_32 = ((/* implicit */signed char) arr_16 [i_0]);
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (unsigned char i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    for (short i_12 = 3; i_12 < 8; i_12 += 2) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned char) (~((-(((var_5) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [3LL] [i_0])) : (((/* implicit */int) var_4))))))));
                            var_34 += ((/* implicit */unsigned long long int) var_2);
                            var_35 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [8] [i_9])) / (((/* implicit */int) arr_17 [(unsigned char)2] [(unsigned char)2] [(short)4] [i_9]))))) ? ((~(6674018581806144779LL))) : (((((/* implicit */_Bool) (unsigned short)9111)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (7068977937408854733LL)))));
        }
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 3; i_14 < 16; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_14 - 1] [i_13] [(unsigned char)15])))))));
                    var_38 = var_5;
                }
            } 
        } 
        var_39 += ((/* implicit */signed char) -7068977937408854734LL);
        arr_43 [(_Bool)1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_37 [(unsigned short)2] [(_Bool)1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_13] [i_13] [(unsigned char)7]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_13])))))));
    }
    for (long long int i_16 = 2; i_16 < 20; i_16 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_18] [i_16 + 2] [i_16] [i_16 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) : (arr_51 [i_18] [i_18] [i_18] [i_18])));
                arr_54 [(signed char)7] [i_18] [i_18] [(unsigned char)21] = ((/* implicit */long long int) min((max((arr_44 [i_16 - 2]), (arr_44 [i_16 + 1]))), (max((var_11), (((/* implicit */unsigned int) arr_48 [i_16] [i_16 - 2]))))));
                /* LoopNest 2 */
                for (short i_19 = 2; i_19 < 21; i_19 += 2) 
                {
                    for (int i_20 = 3; i_20 < 20; i_20 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */short) var_18);
                            var_42 = ((/* implicit */int) (~((~(var_10)))));
                            var_43 += ((/* implicit */signed char) min((((/* implicit */long long int) min((min((((/* implicit */unsigned char) (signed char)-69)), (arr_48 [i_16] [(unsigned char)4]))), (((/* implicit */unsigned char) var_18))))), (min((((((/* implicit */_Bool) (signed char)34)) ? (-7068977937408854734LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(arr_51 [i_20] [i_20] [i_20] [i_20]))))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_55 [i_16] [i_20] [i_18] [i_19] [i_20 - 2] [(short)9]), (arr_55 [i_16] [i_17] [i_16] [i_19] [i_20 + 1] [i_19]))))) : ((-(((var_11) << (((/* implicit */int) arr_52 [i_19] [i_20]))))))));
                        }
                    } 
                } 
                arr_59 [i_18] [(short)5] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) (signed char)30))));
            }
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_63 [(unsigned char)19] [i_16 + 1] [(short)11] [i_21] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)50)), ((unsigned char)246)));
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) max((((/* implicit */int) (!(min((var_4), (arr_52 [i_17] [i_17])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_48 [i_17] [i_21])) : (((/* implicit */int) arr_52 [i_17] [(unsigned char)17]))))) ? (((((/* implicit */_Bool) arr_44 [i_17])) ? (((/* implicit */int) var_0)) : (var_19))) : (((/* implicit */int) var_12)))))))));
                /* LoopNest 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (long long int i_23 = 3; i_23 < 19; i_23 += 2) 
                    {
                        {
                            arr_70 [i_16] [i_16] [i_16] [i_22] [i_22] [(signed char)21] [i_16] = ((/* implicit */short) var_19);
                            var_46 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1)))) ? (262143) : (((((/* implicit */_Bool) ((arr_65 [i_16 - 2] [9LL] [i_16] [i_22] [i_23]) ? (arr_46 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_23])))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 22; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))), (var_13)));
                            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_16] [i_16] [i_16] [i_16] [i_26] [i_16 - 2]))) : (arr_46 [(_Bool)1])))))) ? (((((/* implicit */_Bool) arr_48 [i_16 - 1] [i_16 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_49 [i_16] [i_16 - 2])))) : (((/* implicit */int) arr_64 [i_17] [i_25])))))));
                            var_49 = ((/* implicit */int) min((var_49), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)252))))));
                        }
                    } 
                } 
                var_50 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_75 [(short)1] [i_17]))));
            }
            arr_80 [i_16] [2ULL] [i_16] = var_16;
            var_51 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_55 [i_17] [i_16 - 2] [i_16] [i_16] [(_Bool)1] [i_16 - 2])) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_74 [i_16 - 2] [i_17] [9U])))), (((/* implicit */int) var_12))));
            var_52 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_45 [i_17])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_53 [(_Bool)1] [(_Bool)1]))))));
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 22; i_27 += 2) /* same iter space */
        {
            var_53 += ((/* implicit */signed char) arr_75 [i_27] [i_27]);
            var_54 -= ((/* implicit */unsigned long long int) arr_52 [i_16] [i_16]);
        }
        var_55 = ((/* implicit */unsigned char) arr_74 [(signed char)11] [i_16] [i_16]);
        var_56 += ((/* implicit */unsigned int) var_17);
        var_57 = max((((((/* implicit */_Bool) arr_56 [i_16 + 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_84 [i_16 + 2])) ? (((/* implicit */int) arr_56 [i_16 - 1])) : (((/* implicit */int) arr_56 [i_16 - 1]))))));
    }
}
