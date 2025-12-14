/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130322
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : ((-(var_4)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) min((var_10), (var_10))))))) : ((+(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_1)))))))));
    var_14 = ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned char) var_1))));
    var_15 = var_8;
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) arr_1 [(signed char)7] [i_0 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))))) : (arr_0 [i_0 + 1])))));
        arr_4 [i_0 - 2] = arr_2 [i_0 - 2];
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((arr_6 [i_1 - 1]) + (arr_6 [i_1 - 1])));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2267920380U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [(unsigned char)12])) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) : (((/* implicit */int) var_6))))));
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */signed char) arr_5 [(signed char)4] [(unsigned char)16]);
        }
        for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_3 - 1]))));
            var_21 = ((/* implicit */unsigned char) var_12);
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1 - 1]))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_4) == (var_12))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [(unsigned char)13] [i_6 + 1] [i_6 - 1])))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_18 [i_1] [i_4 + 1] [i_5 + 2] [i_5] [i_5]))))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_5 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_17 [i_1] [i_4] [i_5] [i_5 - 1] [6ULL] [6ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1])))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_4 + 1])) == (((/* implicit */int) arr_5 [i_1 + 1] [i_4])))))));
            arr_19 [i_1] [(signed char)17] = ((/* implicit */signed char) (~(((arr_12 [i_4]) << (((arr_16 [i_1] [i_1] [i_4]) - (3429592699U)))))));
        }
        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) var_1))));
        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_1 - 2] [i_1 - 2]))));
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_7 - 1] [i_7 + 1])))))) ? (((unsigned long long int) arr_16 [i_7] [i_7] [i_7 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2593844343U)))))))))));
        var_30 *= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)181)) && (((/* implicit */_Bool) (signed char)-96))))), (arr_14 [i_7 - 1] [i_7]))));
    }
    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 3) 
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (var_12)));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 3) 
            {
                arr_31 [i_10] [i_9 - 1] [i_10 + 3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_10])) < (((/* implicit */int) arr_8 [i_9] [i_8]))))) >= (((/* implicit */int) arr_23 [i_9 - 1]))));
                var_32 = ((/* implicit */unsigned int) ((arr_9 [i_9] [i_10]) / (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8] [i_10 + 3] [i_10]))));
            }
            for (signed char i_11 = 3; i_11 < 10; i_11 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_33 [i_8 - 1])))), (((((/* implicit */_Bool) arr_11 [i_9] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [(signed char)13] [i_8] [i_8]))))) : ((~(((/* implicit */int) (signed char)127)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 1) 
                {
                    for (signed char i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        {
                            arr_40 [i_8] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) arr_12 [i_9]);
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_38 [(signed char)6] [i_11] [i_11 + 1] [i_11] [i_11 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)192))))) : (max((((/* implicit */unsigned int) var_5)), (arr_17 [i_8] [i_9] [i_11] [i_12] [i_13 + 1] [(signed char)14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) 34359738367ULL))))))))))))));
                        }
                    } 
                } 
                arr_41 [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2267920380U)))))) : (((((/* implicit */_Bool) arr_9 [i_9] [i_11 - 2])) ? (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9] [i_9])) : (17541192267067455120ULL))))))));
            }
            /* vectorizable */
            for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
            {
                arr_44 [(signed char)8] [i_9] [i_14] [i_9 + 1] &= arr_37 [i_8] [i_8] [i_9] [(unsigned char)6];
                var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
            }
            /* LoopNest 2 */
            for (signed char i_15 = 4; i_15 < 12; i_15 += 2) 
            {
                for (signed char i_16 = 1; i_16 < 11; i_16 += 4) 
                {
                    {
                        arr_50 [i_8] [i_9 + 1] [i_15] [i_16] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_8] [i_9 - 1] [i_9 - 1] [i_15 + 2] [i_16 + 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 2; i_17 < 13; i_17 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_38 [i_8 - 2] [i_8 - 2] [i_15 + 1] [i_16 - 1] [i_17 + 1]))))));
                            var_37 = (+(((((/* implicit */_Bool) max((arr_22 [i_9]), (((/* implicit */unsigned long long int) arr_23 [i_8 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (arr_15 [i_8] [i_8] [i_16 + 2] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_16] [i_17]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_18 = 2; i_18 < 13; i_18 += 1) /* same iter space */
                        {
                            arr_57 [i_18] [i_16] [2U] [i_16] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_18 + 1] [i_9 + 1] [i_15] [i_9 + 1] [i_18])) ^ (((/* implicit */int) arr_38 [i_18 - 2] [i_9] [i_18 - 2] [i_9] [i_18]))));
                            arr_58 [i_8] [i_16] [i_15] [i_8] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)172))))));
                            arr_59 [i_8] [i_16] [i_18 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3495983961U)) ? (10003195085329121767ULL) : (12ULL)));
                            var_38 = arr_45 [i_8] [i_8] [i_15 - 1] [i_18 + 1];
                            var_39 = ((unsigned char) arr_29 [i_9 + 1] [i_18 + 1] [i_8 - 1] [i_16 + 2]);
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 2; i_19 < 13; i_19 += 1) /* same iter space */
                        {
                            arr_64 [i_8] [i_15] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
                            var_40 = ((signed char) arr_62 [i_8 - 2]);
                            arr_65 [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_9 [i_8] [(signed char)3]))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) var_5))));
                            arr_66 [i_8] [i_9] [i_15] [i_16] [i_16] = ((/* implicit */signed char) arr_56 [i_9] [i_9] [i_9 + 1] [i_16 - 1] [i_16]);
                        }
                        arr_67 [i_8] [i_9 - 1] [i_16] [i_16 - 1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_36 [i_8] [i_8 - 2] [i_9] [i_15] [i_16 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_36 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1])) <= (((/* implicit */int) arr_36 [i_8 + 1] [i_8 + 1] [12U] [i_15] [i_16])))))));
                        var_42 = ((/* implicit */unsigned char) arr_12 [i_9 + 1]);
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) max((var_8), (var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_15] [i_9] [i_15])) ? (((/* implicit */unsigned long long int) arr_51 [i_8] [i_8] [i_15] [(unsigned char)3] [i_16])) : (var_7))))))) : ((((~(((/* implicit */int) arr_48 [i_8] [i_9] [i_15] [i_16 + 1])))) | (((/* implicit */int) arr_14 [14U] [i_15]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_20 = 2; i_20 < 10; i_20 += 1) 
            {
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) min((((signed char) arr_14 [i_8] [i_8])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_55 [i_8 - 1] [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_20] [i_20 + 2]))))))))));
                var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_51 [i_8] [i_9] [i_20 + 1] [i_9] [i_9 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)11]))) / (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8 - 2] [i_9 - 1]))))))));
                arr_70 [i_8 - 2] [i_9] [i_20] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_49 [i_8] [i_8] [i_20] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (arr_60 [i_8 + 1] [i_8 - 2] [i_9 + 1] [i_9] [i_9] [(signed char)6] [i_20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_6 [i_9])))) : ((+(arr_12 [i_8 - 1])))));
                var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) 4020623654U)), (15721208340908394561ULL))))));
            }
            arr_71 [i_8] = ((/* implicit */signed char) (((~(((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_8 - 2] [i_8 - 1] [i_9 + 1])) ? (arr_61 [i_8 - 2] [i_8] [i_9] [i_9 + 1] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_8] [(unsigned char)9] [i_9 - 1] [i_9 + 1])))))) : (arr_18 [i_8 + 1] [i_8 - 1] [i_8] [i_8] [i_9 - 1]))) - (237478640ULL)))));
            arr_72 [i_8] [i_9] [i_8] = ((/* implicit */signed char) arr_24 [i_9]);
        }
        arr_73 [i_8] = var_2;
    }
}
