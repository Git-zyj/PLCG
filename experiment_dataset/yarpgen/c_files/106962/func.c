/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106962
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
    var_20 *= min((((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_0))) <= (((/* implicit */int) (short)-1))))), (min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2939441792507124072LL))))))));
    var_21 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */int) max(((unsigned char)130), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_22 = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_18))) == (2939441792507124071LL)))));
        arr_2 [i_0] [(signed char)6] = ((/* implicit */unsigned short) ((_Bool) var_2));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_23 = ((signed char) (signed char)91);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
            /* LoopSeq 4 */
            for (signed char i_2 = 4; i_2 < 11; i_2 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) (unsigned short)0);
                arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (70368743915520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_25 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) arr_7 [i_0])));
            }
            for (signed char i_3 = 4; i_3 < 11; i_3 += 3) /* same iter space */
            {
                arr_13 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_3 - 2]))));
            }
            for (signed char i_4 = 4; i_4 < 11; i_4 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)13)))))))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_28 = ((/* implicit */int) var_4);
                    arr_19 [i_4] = 1032546436U;
                }
                var_29 = ((/* implicit */signed char) var_10);
            }
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_23 [(signed char)11] [i_1] |= ((/* implicit */unsigned short) 3262420860U);
                var_30 = ((unsigned char) ((unsigned short) arr_17 [i_6] [i_6] [i_1] [(unsigned char)1] [i_0] [i_0]));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_16 [(short)2] [i_6] [(short)2]) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6])))))))));
                    var_32 = (unsigned char)182;
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_33 = ((/* implicit */long long int) ((var_3) < ((~(2120444384U)))));
                    arr_35 [i_10] [i_9] [i_8] [i_8] [i_0] [(unsigned char)11] = ((/* implicit */signed char) arr_16 [4U] [(unsigned short)8] [4U]);
                    arr_36 [12LL] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) arr_25 [i_10] [i_9] [i_8] [i_0]);
                }
                var_34 = ((/* implicit */unsigned char) min((var_34), (((unsigned char) (~(-131072))))));
                var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9]))));
            }
            for (unsigned short i_11 = 3; i_11 < 9; i_11 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)-48)))) * (((/* implicit */int) ((signed char) (short)-10)))));
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    arr_43 [i_12] [i_11] [i_11 + 1] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                    var_37 = ((/* implicit */unsigned long long int) ((int) var_10));
                    var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)35))));
                }
                var_39 = ((/* implicit */unsigned short) ((-23LL) <= (((/* implicit */long long int) 2147483646))));
            }
            for (unsigned short i_13 = 3; i_13 < 9; i_13 += 4) /* same iter space */
            {
                arr_46 [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) 14502216620690914157ULL);
                var_40 = ((((/* implicit */_Bool) 8585740288LL)) ? (arr_5 [i_13 + 1] [i_13 + 3]) : (arr_5 [i_13 + 1] [i_13 + 4]));
                var_41 = ((/* implicit */unsigned short) (signed char)50);
            }
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 1; i_16 < 12; i_16 += 4) 
                    {
                        var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_0] [5U] [i_14] [5U] [i_16 + 1] [i_16 - 1])) >> (((((/* implicit */int) (short)-12350)) + (12381)))));
                        arr_56 [i_16] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-13)) && (((/* implicit */_Bool) 4093001970U))));
                        var_43 = ((/* implicit */unsigned int) arr_54 [i_16] [i_15] [i_14] [i_8] [i_0]);
                    }
                    arr_57 [i_0] [i_0] [(unsigned char)9] [i_14] [i_14] = ((/* implicit */unsigned long long int) (unsigned char)126);
                    var_44 = ((/* implicit */signed char) arr_16 [i_14] [i_14] [i_14]);
                    var_45 = arr_27 [i_8];
                }
                for (short i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */signed char) arr_20 [i_0] [i_0]);
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((990701248319455237ULL) << (((((/* implicit */int) (unsigned char)125)) - (94)))))) ? (((/* implicit */int) (unsigned short)55679)) : (((/* implicit */int) (short)22685))));
                    var_48 |= ((/* implicit */unsigned long long int) var_4);
                }
                for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    arr_63 [(short)1] [i_0] [i_8] [i_8] [i_14] [i_18] = ((/* implicit */signed char) -112169229);
                    var_49 = ((/* implicit */unsigned short) 4294967293U);
                }
                for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        var_50 = ((/* implicit */int) (unsigned char)128);
                        arr_70 [i_20] [i_14] [i_0] = ((/* implicit */short) arr_0 [i_19] [i_14]);
                        var_51 = ((/* implicit */_Bool) (unsigned short)23980);
                        var_52 = ((/* implicit */unsigned short) var_0);
                    }
                    arr_71 [i_19] [i_14] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62650)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_0] [(short)4])))))));
                    var_53 = ((/* implicit */unsigned long long int) ((((unsigned int) (unsigned char)253)) != (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-22660)))))));
                    var_54 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
                var_55 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1666279625U)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_53 [i_8] [i_8]))))));
                var_56 = (signed char)60;
                var_57 = ((/* implicit */long long int) ((((/* implicit */int) ((2463791651003652760ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0])))))) + (((/* implicit */int) ((signed char) 3766380819U)))));
            }
            var_58 *= (~(((/* implicit */int) arr_62 [i_0])));
            arr_72 [i_8] = ((/* implicit */signed char) ((_Bool) var_10));
        }
        var_59 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 74236275))) * (((/* implicit */int) (unsigned short)96))));
    }
    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
            {
                {
                    arr_83 [i_23] [i_22] = ((/* implicit */long long int) min((var_13), (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((arr_81 [i_21] [i_22] [i_23] [i_23]) != (var_15)))))))));
                    arr_84 [i_21] [i_23] [i_23] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16380)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_78 [i_21]))))));
                }
            } 
        } 
        var_60 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) -11LL)) <= (arr_73 [i_21] [(signed char)6]))))), (max((((/* implicit */unsigned long long int) ((signed char) var_6))), (var_10)))));
        arr_85 [6LL] = ((/* implicit */long long int) (+(((unsigned int) min((1032546455U), (((/* implicit */unsigned int) (short)-24877)))))));
    }
}
