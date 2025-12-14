/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153479
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) < (var_3)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((short) (-(((((/* implicit */_Bool) 4964417219639698826ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)5048)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) var_7)) : (var_3))), (((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2 + 1] [i_2 + 1] [i_3])))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_2 + 2])), (min((arr_6 [i_0 + 2] [i_0 + 2] [12U] [i_3]), (var_10)))))))));
                        var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_2 [i_2 - 1]))))));
                    }
                } 
            } 
        } 
        var_17 ^= ((/* implicit */signed char) ((((unsigned int) arr_1 [(signed char)3])) % (((/* implicit */unsigned int) (-(-2147483647))))));
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(arr_14 [i_4]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [(_Bool)1] [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) -2147483647))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_6 + 1] [i_7] [i_8] = ((/* implicit */signed char) arr_10 [i_4] [i_6 + 2]);
                                arr_28 [i_4] [i_4] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_8)), (arr_1 [(unsigned char)17])))), (arr_26 [i_6 - 1] [i_6] [i_6 + 2] [i_6] [i_6 + 1]))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_21 [i_4] [i_5] [i_6] [i_7])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)28149))));
                        var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_29 [i_4] [i_5] [i_5] [i_6] [i_6] [(unsigned short)5])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 2147483642)) : (((unsigned int) var_8))))));
                        var_20 ^= ((/* implicit */long long int) ((int) (unsigned short)53402));
                    }
                    for (int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        var_21 = (-((-((-(((/* implicit */int) var_6)))))));
                        arr_34 [i_4] [i_4] [i_6 - 2] [i_10] = ((/* implicit */_Bool) arr_3 [i_10]);
                    }
                    var_22 = ((/* implicit */signed char) var_8);
                    var_23 ^= ((/* implicit */unsigned long long int) arr_30 [i_4] [i_6 + 1] [1] [i_6]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_42 [i_12 + 2] [i_12 + 2] [i_12] [i_13] [i_12]))));
                        arr_43 [i_13] = ((/* implicit */signed char) arr_30 [i_12 + 1] [i_12 + 1] [(short)4] [i_13]);
                        arr_44 [i_13] [i_12] [i_11] [i_11] [i_4] = ((/* implicit */unsigned long long int) arr_10 [8ULL] [i_11]);
                        arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_10 [i_4] [i_11]);
                    }
                    arr_46 [i_4] [i_11] [i_4] = ((/* implicit */short) (-(min((((((/* implicit */int) var_10)) + (arr_8 [i_4] [i_11] [(short)4] [i_11] [i_12 + 2] [i_4]))), (((arr_10 [i_4] [i_11]) / (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 8; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_50 [i_17] [i_16] [i_14]))))))));
                                var_26 = ((/* implicit */short) (+(max((arr_52 [i_15 + 2] [i_15 + 2] [i_15 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_17] [i_16] [i_15])) <= (((/* implicit */int) arr_13 [i_14] [i_14])))))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_20 [i_14] [i_15] [i_14] [i_17])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_38 [i_15 + 2] [7U])), (arr_31 [i_18] [3] [i_15 + 2] [i_15 + 1] [i_15]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_19 = 3; i_19 < 7; i_19 += 2) 
                    {
                        for (long long int i_20 = 2; i_20 < 9; i_20 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) arr_52 [i_20] [i_19 + 3] [i_14]);
                                arr_62 [i_14] [6U] [i_16] [i_15] [i_14] [i_14] = (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (((short) arr_16 [i_15] [i_19] [i_15]))))));
                                var_29 = ((/* implicit */short) ((signed char) ((arr_26 [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_15 + 2] [i_15]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_15 + 2] [i_15 + 1] [i_15] [i_15 + 2] [i_15]))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_26 [i_20] [10U] [i_20 - 2] [i_20] [i_20 + 1]))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_9 [i_14])) <= (var_7))))))))));
                            }
                        } 
                    } 
                    arr_63 [i_14] [i_15] = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (unsigned int i_22 = 1; i_22 < 8; i_22 += 3) 
                        {
                            {
                                arr_69 [i_14] [i_14] [i_15 + 2] [i_16] [i_21] [i_22 + 1] = ((/* implicit */signed char) var_9);
                                arr_70 [i_21] = ((/* implicit */short) ((((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)11626)) >= (var_12)))))))) > (((int) max((arr_18 [i_14]), (arr_35 [i_15] [i_15]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_71 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_3)))))) ? (arr_47 [(signed char)5] [(short)7]) : (((/* implicit */unsigned int) max(((+(var_12))), ((+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            for (long long int i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                {
                    var_31 += ((/* implicit */unsigned short) var_8);
                    arr_78 [i_14] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((((((/* implicit */_Bool) arr_40 [i_14] [i_23] [i_14])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_25 = 0; i_25 < 10; i_25 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */_Bool) arr_19 [(unsigned char)5] [i_25])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)11] [i_14] [i_25])))))), (((/* implicit */long long int) ((((unsigned int) arr_21 [i_14] [i_14] [i_14] [i_14])) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)23)))))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((signed char) arr_32 [5LL] [i_25] [i_25])))));
        }
        for (short i_26 = 1; i_26 < 6; i_26 += 4) /* same iter space */
        {
            arr_83 [i_26] = ((/* implicit */short) (-(((((int) 4294967295U)) + (((/* implicit */int) min(((unsigned short)60486), (((/* implicit */unsigned short) var_8)))))))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_14])) + (((/* implicit */int) (unsigned char)120))))))) ? (max((arr_17 [i_26] [i_14] [i_14]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6973949699407821241LL)) && (((/* implicit */_Bool) arr_5 [i_14] [i_14] [i_14]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned short) arr_16 [i_14] [i_14] [i_14])))))));
        }
        for (short i_27 = 1; i_27 < 6; i_27 += 4) /* same iter space */
        {
            arr_86 [i_14] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_27 + 1] [i_27 + 2] [i_27] [i_27 + 4])) ? (max((((/* implicit */int) arr_66 [i_14] [(short)0])), (arr_8 [i_27] [i_27 + 4] [i_27 + 1] [i_27 - 1] [i_27 + 1] [i_27]))) : (((/* implicit */int) arr_82 [(_Bool)1] [i_14] [i_14]))));
            var_35 -= ((/* implicit */signed char) arr_32 [i_14] [i_14] [i_14]);
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_41 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))));
        }
    }
}
