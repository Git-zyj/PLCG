/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173695
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
    var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (var_3))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) && ((!(((/* implicit */_Bool) var_17))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 843429895790924746LL)))))) & ((~(((unsigned long long int) arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14)))) - (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10))))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [(_Bool)0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1 - 1] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) ((short) var_2))), (arr_3 [i_1 - 1])))));
        var_21 -= ((/* implicit */unsigned char) (~((~(max((arr_2 [4U] [i_1 - 1]), (var_2)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) (((-(var_9))) * (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))));
                    var_22 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
        arr_10 [4LL] |= ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (arr_5 [i_1 - 1] [i_1] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)-95))))));
    }
    /* LoopSeq 3 */
    for (long long int i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_12 [i_4])))))));
        arr_14 [i_4] = ((/* implicit */unsigned int) arr_12 [i_4 - 3]);
        var_23 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_11 [4LL])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) / (288230376151711743LL)))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) ((signed char) var_6)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_3))))) == (((long long int) var_0))))) : (((/* implicit */int) (((+(9004925180973992095LL))) != (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4])) << (((/* implicit */int) arr_12 [i_4]))))))))));
    }
    for (unsigned short i_5 = 4; i_5 < 8; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_5] [i_5] [i_5] [i_5]));
        var_25 = ((/* implicit */unsigned int) ((_Bool) var_15));
        /* LoopSeq 1 */
        for (short i_6 = 4; i_6 < 8; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) max(((~(arr_3 [i_6 + 2]))), (arr_3 [i_6])));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((-(arr_5 [13LL] [i_6] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_5]) && (((/* implicit */_Bool) arr_16 [i_5 - 1]))))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_5 [i_5] [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_3)))))))));
            var_28 -= ((/* implicit */unsigned long long int) (-(max((((long long int) var_2)), (max((var_16), (((/* implicit */long long int) arr_0 [i_5 + 2] [i_5 + 2]))))))));
            var_29 = ((/* implicit */short) (~((~(((/* implicit */int) ((short) (_Bool)0)))))));
        }
    }
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 4; i_9 < 16; i_9 += 4) 
            {
                for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (3963234311725143004ULL) : (0ULL)))) ? (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_17)))))) : (((/* implicit */int) ((18446744073709551600ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))))));
                        arr_31 [i_7] [i_8] [i_9] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((long long int) var_17));
                        arr_32 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14921)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (1953902972336118724ULL) : (((/* implicit */unsigned long long int) (+(8849804253526772435LL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) /* same iter space */
            {
                arr_39 [i_7] = ((/* implicit */int) var_13);
                arr_40 [18U] [(unsigned char)1] = ((/* implicit */_Bool) ((signed char) ((long long int) arr_21 [i_7 + 1] [i_7 - 1])));
                /* LoopSeq 2 */
                for (int i_13 = 3; i_13 < 18; i_13 += 3) 
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) arr_30 [i_12 + 2] [i_12 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_7])) && (((/* implicit */_Bool) var_2))))))))))));
                    var_32 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (arr_21 [i_13] [i_7 - 1])))), (((((/* implicit */long long int) arr_42 [i_12] [i_11] [i_7 + 1])) / (arr_8 [i_11 + 1] [i_13 - 1]))))));
                }
                for (unsigned int i_14 = 3; i_14 < 16; i_14 += 3) 
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0))))) & (((/* implicit */int) ((_Bool) var_9)))))) ? (((((/* implicit */_Bool) arr_25 [i_14] [i_12] [i_7] [i_14])) ? ((-(((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_14])))) : (((/* implicit */int) ((((/* implicit */int) arr_41 [i_7] [i_11] [i_11] [i_12] [i_14 + 2] [i_14])) != (((/* implicit */int) var_0))))))) : (((/* implicit */int) arr_35 [(short)17]))));
                    arr_46 [i_14] [i_12 + 3] [i_7] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_14 + 1])) ? (arr_34 [i_7] [i_14 + 3]) : (((/* implicit */long long int) var_6))))) ? (max((arr_34 [i_12 - 2] [i_14 - 1]), (((/* implicit */long long int) (_Bool)1)))) : (max((-4362626254404264476LL), (((/* implicit */long long int) (signed char)54))))));
                    var_34 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [(short)8] [i_12 + 3] [i_14]))) : (arr_37 [i_7])))) ? ((+(arr_8 [i_11] [i_11]))) : (((long long int) var_1))))));
                }
                arr_47 [11LL] [i_11] [i_11] [i_12 + 2] |= ((/* implicit */unsigned int) ((_Bool) (~((~(arr_30 [i_7 + 1] [i_11 + 2]))))));
            }
            for (unsigned int i_15 = 2; i_15 < 16; i_15 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((unsigned long long int) arr_48 [(unsigned short)12] [i_11] [9] [i_7])))) > (min((((/* implicit */long long int) 1316051374)), ((-9223372036854775807LL - 1LL)))))))));
                var_36 -= ((unsigned long long int) (!(((/* implicit */_Bool) -2936607668625353123LL))));
                /* LoopNest 2 */
                for (long long int i_16 = 3; i_16 < 17; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 18; i_17 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_7]))));
                            var_38 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_12 [i_7]))))))));
                        }
                    } 
                } 
            }
            arr_56 [i_7] [i_11] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) arr_22 [i_7] [i_7]))), (var_5)))) && (((/* implicit */_Bool) var_16))));
            arr_57 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(arr_53 [i_11] [i_11] [i_11] [i_11] [(unsigned char)18] [i_11] [i_7 - 1]))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_7] [i_7] [(short)16] [i_11]))) <= (arr_28 [0U] [i_11]))))))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (max((((/* implicit */long long int) ((arr_27 [(_Bool)1] [i_7] [i_7 - 1] [i_7 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_8 [i_7] [i_7])))))));
        }
        for (unsigned int i_18 = 2; i_18 < 18; i_18 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_19 = 4; i_19 < 17; i_19 += 2) 
            {
                var_39 = ((/* implicit */unsigned char) var_0);
                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1953902972336118724ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 2627293511001072403LL))));
            }
            /* vectorizable */
            for (unsigned short i_20 = 2; i_20 < 15; i_20 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_58 [i_7 + 1] [i_18 + 1])) ? (((/* implicit */long long int) arr_54 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_20 + 2] [(unsigned short)1] [i_20 + 2])) : (arr_37 [i_18 - 1]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_18 - 2]))))))));
                var_42 = ((/* implicit */short) var_14);
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 15; i_21 += 4) 
                {
                    for (signed char i_22 = 2; i_22 < 15; i_22 += 4) 
                    {
                        {
                            var_43 &= ((/* implicit */unsigned short) arr_38 [i_20 - 2] [i_21 + 2] [i_20 - 2] [i_20 - 2]);
                            var_44 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) arr_21 [i_18 - 2] [(signed char)3])) - (arr_58 [i_7] [i_7])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 2) 
            {
                var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_7] [i_7] [i_7])) && (arr_29 [i_23 + 1] [i_18 - 2] [(unsigned short)8] [i_18 - 2] [i_18]))))) - ((+(arr_27 [i_18] [i_18] [i_18] [i_18])))));
                var_46 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_16))))));
            }
            var_47 = ((/* implicit */int) var_2);
            var_48 &= ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_50 [i_7] [i_18] [i_7])))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12)))))))) << (((var_5) - (2047400125U)))));
            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_66 [i_7])), (var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_45 [i_7] [i_7 + 1] [i_18] [i_18 + 1]))) >= (max((((/* implicit */unsigned long long int) var_8)), (arr_23 [i_7] [i_7]))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_7]))))))))));
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) var_2))));
        }
        var_51 = ((((/* implicit */_Bool) -8849804253526772436LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))));
        var_52 ^= ((/* implicit */unsigned short) (~(((arr_38 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1]) * (((/* implicit */unsigned long long int) arr_58 [i_7 + 1] [i_7 - 1]))))));
        var_53 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? ((+(arr_34 [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_11))))))));
    }
    var_54 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_8)) <= (var_9)))))));
}
