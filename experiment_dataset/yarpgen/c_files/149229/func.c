/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149229
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 *= ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) ((short) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)0))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_22 -= ((/* implicit */unsigned int) min((arr_7 [(short)5] [i_1]), (((/* implicit */long long int) var_9))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [3U] = ((/* implicit */unsigned long long int) var_2);
        arr_14 [i_3] |= ((/* implicit */short) (((~(arr_11 [i_3] [i_3]))) >> (((/* implicit */int) ((unsigned short) var_18)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_11))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5] [i_4])) && (((/* implicit */_Bool) arr_20 [i_4] [i_5])))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (short)-9882))))))));
        }
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_26 ^= ((/* implicit */_Bool) arr_22 [i_4] [i_6]);
            var_27 = ((/* implicit */long long int) arr_22 [i_6] [i_4]);
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_28 += ((1481253610) & (((/* implicit */int) var_10)));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    arr_32 [i_8] [i_8] [i_8] [8LL] [8LL] [i_8] |= ((/* implicit */unsigned int) (~(arr_6 [i_4])));
                    var_29 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (arr_8 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((int) var_11)))));
                    arr_33 [11LL] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_16))));
                    arr_34 [i_7] [i_7] [i_7] [i_9] [i_9 - 1] [i_7] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7])))));
                }
            }
            for (short i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                var_31 += ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_10 - 1])) ? (((arr_21 [i_10] [i_7]) | (-743477287759412951LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_35 [i_7]))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_3 [i_4] [i_10 + 1])))))));
                            var_33 = ((/* implicit */long long int) ((arr_11 [i_11 - 3] [i_10 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11 - 3])))));
                        }
                    } 
                } 
                arr_43 [i_10 - 1] [i_7] [i_7] [i_4] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_10))))));
            }
            var_34 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)9882)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))));
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (short i_14 = 3; i_14 < 11; i_14 += 4) 
            {
                {
                    var_35 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (arr_45 [i_4] [i_14 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)17388)))))));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_14 - 1] [i_14 - 3] [i_14 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))))));
                    var_37 &= ((/* implicit */long long int) ((short) var_9));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_21 [i_14 - 1] [i_14 - 2]) : (arr_21 [i_14 + 1] [i_14 - 2])));
                                var_39 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_24 [i_4] [i_14 - 2] [i_14 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_17 = 3; i_17 < 19; i_17 += 3) 
    {
        for (int i_18 = 1; i_18 < 20; i_18 += 3) 
        {
            {
                var_41 |= ((/* implicit */unsigned int) arr_12 [i_17 + 3]);
                var_42 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_21 = 3; i_21 < 19; i_21 += 3) 
                            {
                                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (+((+(arr_64 [i_17 - 1] [i_17 - 2] [i_18 - 1] [i_21 - 3] [i_21 - 3] [i_21 + 2] [i_21]))))))));
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_57 [i_17 - 1] [i_17 + 1])))))))));
                                arr_66 [i_17] [i_17 - 1] [(unsigned short)0] [i_17 - 1] [i_17] = ((/* implicit */unsigned char) (+(((unsigned int) var_9))));
                            }
                            for (signed char i_22 = 0; i_22 < 22; i_22 += 3) 
                            {
                                var_45 &= ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_68 [i_17] [i_18] [i_18] [i_19] [i_19] [i_20] [i_22])), (var_19)))), (min((((/* implicit */long long int) (short)-17388)), (11LL))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_62 [i_18] [i_18] [i_18] [i_18 - 1] [i_20])) ? (((/* implicit */int) var_16)) : (var_15))) - (85)))));
                                arr_69 [i_17 - 3] [(unsigned char)0] [(short)15] [i_17] [i_17] = (!(((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) var_7)), (arr_67 [i_17 - 3] [i_17] [i_17] [i_17] [i_17]))))));
                                arr_70 [i_22] [i_18] [i_19] [i_18] [i_17 - 1] &= ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)87))))) > (min((((((/* implicit */_Bool) var_3)) ? (4931321945089710024LL) : (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_17] [i_18] [i_19] [i_20]))) <= (var_6))))))));
                                var_46 |= ((/* implicit */unsigned int) var_15);
                                var_47 -= ((/* implicit */unsigned int) arr_56 [i_19] [i_20]);
                            }
                            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 1) 
                            {
                                var_48 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (min((var_19), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) var_13))));
                                arr_75 [i_17] [i_20] [i_17] [i_20] [i_18 + 2] [i_17] [i_18 - 1] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-23619)) / (((/* implicit */int) (unsigned char)163))))), ((~(((long long int) var_4))))));
                                var_49 += ((/* implicit */unsigned short) ((long long int) ((signed char) (~(-8289694759625717942LL)))));
                            }
                            var_50 -= ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (unsigned char)152)))) : (min((((/* implicit */int) var_10)), (var_15))))))));
                            var_51 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_71 [i_17] [i_18 + 1] [i_17] [i_17 + 2] [i_20]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_17 - 3] [i_20])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_58 [i_17 - 2] [i_18])) < (((/* implicit */int) var_16)))))) : (((unsigned int) var_19))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 1) 
    {
        for (unsigned int i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            {
                var_52 = ((/* implicit */int) var_11);
                var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) var_11))));
                var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) var_11))));
            }
        } 
    } 
}
