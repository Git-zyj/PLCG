/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139700
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((17300278037657934175ULL), (((/* implicit */unsigned long long int) 2632213812U))));
        var_15 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) var_11)), (4281801739130042942ULL))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                arr_11 [i_0] [i_2] [(unsigned short)3] = ((/* implicit */short) arr_0 [6]);
                arr_12 [i_2] [i_2] [i_0] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_2 - 1]), (((/* implicit */unsigned short) var_3))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (unsigned short)50368)))))));
                var_16 = ((/* implicit */unsigned short) -1LL);
            }
            for (short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((short) arr_9 [i_3] [i_1])))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)0))));
                        var_19 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0]);
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)8629)) : (((/* implicit */int) (unsigned short)55658))));
                        arr_19 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned long long int) var_5));
                        arr_20 [i_4] [i_4] [i_4] [(unsigned short)15] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551615ULL))) <= (6ULL)));
                    }
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        arr_23 [i_0] [4LL] [i_0] [i_0] [4LL] [i_0] [i_4] = ((/* implicit */unsigned long long int) var_14);
                        arr_24 [(unsigned short)12] [i_4] [(unsigned short)12] [(unsigned short)12] [i_3] [(unsigned short)12] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_0] [(unsigned char)18])))));
                        arr_25 [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 + 1] [i_4]))) : (arr_16 [i_6 - 1] [i_4 - 1]))), (((/* implicit */long long int) 0U))));
                        arr_26 [i_4] = ((/* implicit */unsigned int) (unsigned short)52821);
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */int) arr_22 [i_0] [(unsigned short)0] [(unsigned char)6] [i_4 + 2] [i_7]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_4 + 1] [i_7] [(unsigned short)17] [i_1]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((-3971954543804177713LL), (((/* implicit */long long int) (unsigned short)57304))));
                        var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-16674))) != (arr_29 [i_0] [i_1] [i_4] [i_1])));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 2]))) < (((((/* implicit */_Bool) 9206980529582906220ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 2] [11LL] [i_4 - 1] [i_4]))) : (arr_3 [i_4 - 1] [i_4 + 2])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (5141677221342393177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) ((max((15110989567028263777ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_3])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (5253284153296297974LL)));
                        arr_35 [i_0] [i_0] [i_4] [i_4 - 1] [i_0] = ((/* implicit */unsigned long long int) min((arr_15 [i_4] [10LL] [i_4 - 1] [i_4]), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 3) 
                    {
                        arr_39 [(unsigned char)3] [i_1] [i_3] [(unsigned char)3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_4 + 1] [i_11] [i_11 - 1] [i_4])) && (((/* implicit */_Bool) 5123153909381374096LL)))))));
                        var_30 = ((/* implicit */unsigned short) var_2);
                        arr_40 [i_11 - 4] [i_4] [(short)2] [i_4] [i_0] = ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_4 + 2] [i_4 + 2] [i_11 - 3] [i_4 + 2] [i_11 - 4])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_4 + 2] [i_3])) : (((/* implicit */int) var_12))))))) ^ (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_1] [i_0]))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) var_13)) ? (arr_41 [i_12 + 3] [i_0] [i_12 + 3] [i_0] [i_4 + 2]) : (arr_41 [i_12 - 1] [i_3] [i_12 + 3] [i_3] [i_4 + 1])))));
                        arr_44 [21LL] [i_1] [21LL] [14ULL] [i_4] = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_32 = min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (arr_36 [i_0] [i_1] [i_0] [i_4] [i_13]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-25120)), ((unsigned short)2460)))))), (((/* implicit */unsigned long long int) max((arr_22 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4]), (arr_22 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_1])))));
                        var_33 = ((/* implicit */long long int) var_8);
                        var_34 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_13] [i_4 + 2] [i_4] [i_4 + 2] [i_4]))))) == (-3971954543804177713LL)));
                    }
                }
                for (unsigned int i_14 = 3; i_14 < 21; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */int) (unsigned short)12593);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_4 [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)51574))));
                        var_38 = (short)-2629;
                        arr_58 [i_0] = ((/* implicit */long long int) ((unsigned short) var_12));
                    }
                    for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_61 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
                        arr_62 [(unsigned short)1] [5LL] = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_2))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5123153909381374086LL)) ? (((((/* implicit */_Bool) 1509179744U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)23917)))) : (((((/* implicit */_Bool) arr_55 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 3] [i_14] [i_14 - 2])) ? (((/* implicit */int) arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 - 3] [i_14 - 1] [i_14 - 2])) : (((/* implicit */int) arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 - 3] [i_14 - 1] [i_14 - 2])))))))));
                }
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_19 = 1; i_19 < 20; i_19 += 2) 
                    {
                        var_40 = var_9;
                        arr_69 [i_19] [i_18] = ((/* implicit */short) max((((/* implicit */unsigned short) max((((/* implicit */short) var_12)), (var_1)))), (arr_5 [i_19])));
                        var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_19 + 1] [i_1] [i_1] [i_0]))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_8 [i_0] [i_20] [i_0] [i_0]))));
                        var_43 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) 6738218084342441040LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))))));
                    }
                    var_44 = ((/* implicit */short) arr_59 [i_3] [i_3] [i_1] [i_1] [i_0]);
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_9))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (4281801739130042940ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_18 [6ULL] [i_21] [i_0] [i_3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (360170863))), (((/* implicit */int) (unsigned short)3))))))))));
                    var_47 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((arr_38 [10ULL] [i_3] [i_3] [i_3] [i_3] [i_3]), (var_9))))))));
                    var_48 = ((/* implicit */short) (+(((arr_59 [i_0] [i_1] [i_3] [i_21] [i_21]) / (arr_59 [i_0] [i_0] [i_3] [i_3] [i_21])))));
                }
            }
            var_49 = ((/* implicit */signed char) arr_66 [14LL] [14LL] [i_0] [i_0] [(_Bool)1]);
            var_50 -= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) | (((((/* implicit */_Bool) (unsigned short)4883)) ? (0ULL) : (((/* implicit */unsigned long long int) -750763721)))))), (0ULL)));
            var_51 = ((/* implicit */unsigned long long int) (((-2147483647 - 1)) == (((/* implicit */int) (unsigned short)1023))));
        }
    }
    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), (var_12)))) ? (((unsigned int) 7090800926741559387ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
}
