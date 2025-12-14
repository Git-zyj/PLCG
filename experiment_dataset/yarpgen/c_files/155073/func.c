/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155073
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))) ^ (-2240856876936152370LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(var_11)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] = (!(((/* implicit */_Bool) var_2)));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((_Bool) 14271658351538803049ULL));
        arr_10 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1 + 3]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_19 [i_1] [i_3] [i_2 + 1] [i_1] = ((/* implicit */signed char) (((+(279411162176600919ULL))) >= (arr_15 [i_2 - 1] [i_1] [5] [i_4])));
                        arr_20 [i_1] [i_1] [i_1] = (short)21145;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_25 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2] [i_1]))));
                            var_13 = ((/* implicit */int) var_6);
                            var_14 += ((/* implicit */int) (short)-31246);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 4; i_6 < 22; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 24; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        for (long long int i_10 = 1; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_38 [i_10] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4017034841U)) ? (13015667650659118634ULL) : (((/* implicit */unsigned long long int) 2394786380U))))) ? (((/* implicit */long long int) -1373210893)) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) 2394786380U))))));
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) 1900180916U);
                                var_15 = (-(8ULL));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        var_16 *= ((/* implicit */unsigned short) -4505876920345247621LL);
                        var_17 = ((/* implicit */int) (_Bool)1);
                        var_18 = (-(((/* implicit */int) (unsigned char)224)));
                        var_19 = ((/* implicit */int) ((long long int) arr_34 [i_6] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            arr_48 [i_6] [i_7 + 1] [i_8] [i_7] [i_6] = ((/* implicit */unsigned short) (signed char)127);
                            var_20 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3554210625U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21143))) : (var_1)))));
                        }
                        var_21 = ((/* implicit */long long int) ((arr_46 [i_6 + 1] [i_6 + 1] [i_6 - 4] [i_6] [i_6]) / (arr_46 [i_6 - 4] [i_7] [i_7] [i_6] [i_6 - 4])));
                        arr_49 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        var_22 = (-(3963208382U));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
                    {
                        arr_53 [i_6] [i_7] [i_7] [i_8] [i_6] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_10)) & (16256U)));
                        var_23 = ((int) var_9);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_35 [i_6] [i_7] [i_8] [(short)3] [i_14]))))))));
                    }
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) : (4294967295U)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            arr_57 [i_6] = ((/* implicit */short) arr_41 [i_6] [i_6] [i_6] [i_15]);
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 1) 
            {
                arr_60 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2394786380U)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)21158)))))) ? (((((/* implicit */_Bool) (short)-31246)) ? (((/* implicit */unsigned long long int) 4294951040U)) : (18446744073709551615ULL))) : (3963189403272026671ULL)));
                arr_61 [i_6] [i_15] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_16 + 2] [(signed char)18] [i_6 + 3] [(_Bool)1] [21] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (arr_34 [i_16 - 1] [i_16] [i_6 + 2] [i_6] [i_6] [i_6])));
            }
        }
        for (signed char i_17 = 2; i_17 < 23; i_17 += 3) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_4))));
            arr_66 [i_6] [i_6] = ((/* implicit */signed char) ((arr_40 [i_6]) - (((/* implicit */long long int) arr_47 [i_17] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_17 - 1]))));
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 24; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    {
                        arr_71 [i_6 - 1] [i_17] [i_6] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_19] [i_17] [i_17 + 1])) ? (((/* implicit */int) (short)21152)) : (((/* implicit */int) (unsigned char)120))));
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_6 - 1])) ? (-1828119319) : ((-2147483647 - 1))));
                        arr_72 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (18167332911532950697ULL) : (((/* implicit */unsigned long long int) arr_63 [i_17 + 1]))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_70 [i_6] [i_6] [12] [i_6])) >> (((((/* implicit */int) arr_37 [i_17 - 1] [i_18 + 1])) + (121)))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_20 = 1; i_20 < 23; i_20 += 2) 
        {
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (long long int i_22 = 2; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 279411162176600907ULL))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_5))))))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_22 + 2] [i_20 - 1] [i_6 + 2])) ? (arr_36 [i_22 + 2] [i_20 + 2] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (short)31263))));
                        arr_80 [i_22 - 2] [i_22 - 2] [i_22] [i_22] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-31246))));
                        var_32 = ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
        } 
        arr_81 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_6] [i_6] [i_6 - 1] [i_6 - 3])) ? (arr_67 [i_6] [i_6] [i_6 + 2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_23 = 1; i_23 < 10; i_23 += 2) 
    {
        var_33 = ((/* implicit */unsigned long long int) (~(4294951040U)));
        arr_84 [i_23 + 1] [i_23] = ((/* implicit */unsigned short) ((short) var_1));
        arr_85 [i_23] [i_23] = ((/* implicit */unsigned int) (short)-4337);
        arr_86 [i_23] = ((/* implicit */unsigned int) ((_Bool) (signed char)-52));
    }
}
