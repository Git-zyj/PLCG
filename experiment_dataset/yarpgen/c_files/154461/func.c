/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154461
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
    var_14 += ((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) << (((var_3) - (11786561304857527691ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_16 &= ((unsigned short) var_13);
                                var_17 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (short)18)) + (((/* implicit */int) (_Bool)1)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned int) var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                var_19 = ((/* implicit */unsigned int) var_0);
                arr_17 [i_0] [i_5] [i_6] = ((/* implicit */long long int) ((signed char) var_9));
                arr_18 [(_Bool)1] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                var_20 = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_16 [i_0] [i_5] [(_Bool)1])) : (((/* implicit */int) var_0))));
                var_21 = ((/* implicit */_Bool) (unsigned short)3241);
                arr_22 [i_0] [i_5] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) / (((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))));
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)15] [i_0 + 2] [i_0 - 1] [(short)15])) > (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 + 3] [i_0]))));
        }
        var_23 &= var_8;
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                for (unsigned int i_10 = 4; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_0 + 2] [i_9]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 2; i_11 < 19; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_13)))));
                            var_26 = ((((((/* implicit */int) var_8)) & (((/* implicit */int) var_9)))) + ((-(((/* implicit */int) var_4)))));
                            var_27 = ((/* implicit */_Bool) arr_20 [i_0 - 2] [i_8]);
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */short) var_7);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_39 [i_0 - 3] [i_12] [i_0 + 1]));
            arr_40 [i_12] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_9 [i_12] [i_12] [i_12])))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((unsigned int) var_8)))));
        }
    }
    for (unsigned char i_13 = 2; i_13 < 22; i_13 += 2) 
    {
        var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) ((unsigned char) var_11)))));
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))))))));
    }
    for (short i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_15 = 2; i_15 < 11; i_15 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned char) var_7)), (((unsigned char) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : (((unsigned int) var_13))));
                arr_53 [i_14] [i_14] [6LL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30665)) >> (((((/* implicit */int) (short)5989)) - (5980)))))), (min((arr_8 [i_15 - 2] [i_15] [i_15] [i_14]), (((/* implicit */unsigned long long int) var_6))))));
            }
            for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (var_5) : (((/* implicit */unsigned long long int) arr_43 [i_14]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_12 [i_15 - 2] [i_17 + 3]) : (arr_12 [i_15 + 1] [i_17 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) var_11)) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))))))));
                var_35 += ((/* implicit */short) ((signed char) (~(var_10))));
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((((/* implicit */int) (short)-15)) < (((/* implicit */int) (short)5989)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((arr_33 [i_17] [i_17] [i_17] [i_17]) > (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))))))) : (var_10))))));
            }
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                arr_60 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62294)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)14))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 2) 
                {
                    for (long long int i_20 = 2; i_20 < 11; i_20 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_15] [i_15 - 2])) ^ (((/* implicit */int) var_11))));
                            var_38 += ((signed char) ((unsigned char) var_13));
                            var_39 = ((/* implicit */_Bool) arr_51 [i_20] [i_18] [i_14]);
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)3241)))), (min((arr_4 [i_18] [i_19] [i_20]), (((/* implicit */int) var_6))))))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_28 [i_15 - 2] [i_20 + 1] [i_19 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)6)), ((short)-20116)))))))));
                        }
                    } 
                } 
                var_42 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? ((~(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9))))))) + (var_3)));
                var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_9 [i_14] [i_15] [i_18]))) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) arr_2 [i_15 + 1] [i_15 + 1])) : (((long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14] [i_14] [i_14])))))))));
            }
            for (short i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                var_44 *= ((/* implicit */unsigned long long int) min((max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) (unsigned short)62279))))), (((((/* implicit */_Bool) arr_36 [i_15 - 1] [i_15 - 2] [i_15] [i_15 - 2] [i_15])) ? (((/* implicit */int) ((unsigned char) (unsigned char)147))) : (((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 4) 
                {
                    for (unsigned char i_23 = 3; i_23 < 9; i_23 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) ((short) max((arr_59 [i_22 - 1] [i_15 + 1]), (arr_59 [i_22 - 1] [i_15 + 1]))));
                            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8973058912477250574ULL)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (signed char)6))))) : (((((/* implicit */_Bool) var_8)) ? (arr_12 [i_23 + 1] [i_15 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_15 - 2] [i_22 + 1] [i_22 + 1]))))))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_15 - 1] [i_15 - 2] [i_15 + 1])) ? (min((var_3), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_49 [i_15 - 2] [i_15 - 2] [i_15 - 2]))))));
            }
            var_48 *= ((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_14] [i_14] [i_14])), (arr_64 [i_14] [i_15 + 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_7)))) : ((~(var_10))));
            var_49 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_15 + 1] [i_15] [i_15 + 1] [i_14] [i_15 - 2])), (arr_2 [i_15 - 1] [i_15 - 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (13250946947373855839ULL)))));
        }
        var_50 += ((/* implicit */unsigned short) (~(((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    var_51 = ((/* implicit */unsigned int) var_4);
    var_52 = ((/* implicit */short) var_1);
}
