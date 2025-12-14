/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143889
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */short) (-((~(((/* implicit */int) (short)26486))))));
        arr_4 [i_0] [i_0] = (~((-(3349970089U))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) arr_10 [i_1 + 1] [i_1 - 1]))))), (max((((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1 - 1])), (var_9)))));
                    arr_13 [i_3] = ((/* implicit */signed char) 653596072U);
                    var_10 -= ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (3515850133U))) ^ (((unsigned int) arr_9 [i_1 + 1])));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_5 [i_1 - 1])) * (((/* implicit */int) arr_5 [i_1 + 1])))) : (((/* implicit */int) ((signed char) min((((/* implicit */short) arr_11 [i_1] [i_2] [i_3])), (arr_5 [i_1]))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))))), (((((/* implicit */_Bool) arr_7 [i_5] [i_4 + 1])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_5 [i_1 + 1])))))))));
                    arr_18 [i_1] [i_4] [i_1] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)91)), ((unsigned short)65529)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_19 [i_1] [i_1 - 1]))))));
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            arr_31 [i_1] [i_6] [i_1] [i_8] [i_8] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (signed char)120))))));
                            arr_32 [i_9] [i_8] [i_7] [(unsigned short)9] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_22 [i_1 - 1] [i_1 + 1])) * (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])))))))));
                            arr_33 [i_1 + 1] [i_1 + 1] [i_7] [i_1 + 1] [i_8] [i_8] [i_9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_25 [i_6]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) arr_25 [i_7]))))))));
                            var_14 = ((/* implicit */long long int) (unsigned char)58);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_15 = ((/* implicit */signed char) min((arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_9)))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)170))))))));
            var_16 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1]);
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (signed char)112)))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 3; i_12 < 17; i_12 += 2) 
            {
                arr_42 [i_12] [i_12] [i_12] [i_12] = ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)14875)) : (((/* implicit */int) arr_10 [i_1 + 1] [i_11]))));
                arr_43 [i_1] [i_11] [i_12] = ((/* implicit */_Bool) ((long long int) var_9));
            }
            /* LoopSeq 2 */
            for (unsigned short i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                arr_46 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)119);
                /* LoopSeq 1 */
                for (unsigned short i_14 = 3; i_14 < 18; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)92)) << (((arr_34 [i_1 + 1] [i_11]) + (2988511517884851588LL))))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_1 - 1] [i_11] [i_11] [i_13] [i_14 - 3] [i_15 + 2])) ? (arr_45 [i_13 + 3] [i_11] [i_13 + 3]) : (((/* implicit */long long int) arr_15 [i_13 + 3] [i_14]))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_13 + 1] [i_1 - 1]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_11])) ? (((long long int) arr_10 [i_1] [i_11])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_28 [i_15])) << (((var_6) - (3635004209U))))) : (((/* implicit */int) (unsigned short)0)))))));
                    }
                    for (long long int i_16 = 3; i_16 < 15; i_16 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) var_3)) - (14))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))));
                        var_24 -= ((/* implicit */_Bool) (signed char)118);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_16] [i_16] [i_16] [(unsigned short)9] [i_16])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_14])))))) ? (arr_50 [i_13] [i_13 - 1] [i_13] [i_13 + 2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2470582312044929647LL))))))));
                    }
                    for (long long int i_17 = 3; i_17 < 15; i_17 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                        arr_55 [i_1] [i_11] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_14] [i_11] [i_11] [i_1])) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned short)5591)) : (((/* implicit */int) arr_28 [i_14])))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(arr_34 [i_1 - 1] [i_1]))))));
                        arr_56 [i_17] [i_14] [i_14] [i_17] [i_11] [7LL] [i_1] = ((/* implicit */short) (~(arr_54 [i_14] [i_17] [i_17] [i_17 - 2] [i_17] [i_17])));
                    }
                    arr_57 [i_1] [(short)0] [(unsigned char)7] [i_13] [(signed char)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [5U])) || (((/* implicit */_Bool) (-(var_1))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_5 [i_1]))));
                    arr_58 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_3);
                }
                /* LoopSeq 2 */
                for (signed char i_18 = 2; i_18 < 16; i_18 += 2) 
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [(unsigned short)17] [i_13] [i_11] [i_1] [i_1]))))) << ((((-(((/* implicit */int) var_0)))) + (42))))))));
                    arr_62 [i_1] [i_13] [i_13] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                }
                for (unsigned int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_13 + 1] [i_13 + 4] [i_13 + 3] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (arr_54 [i_13 + 4] [i_13 + 4] [i_13 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_54 [i_13 + 1] [i_13 + 4] [i_13 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    arr_66 [i_13 - 1] [i_13 - 1] [i_13] |= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_19])) << (((((/* implicit */int) arr_14 [i_11])) - (15491)))));
                }
            }
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                arr_69 [i_20] = ((/* implicit */signed char) 719840861U);
            }
        }
    }
    var_33 = var_7;
    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_9)))));
    var_35 = ((/* implicit */unsigned int) ((short) ((short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_8))))));
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : ((+((+(var_8)))))));
}
