/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111145
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
    var_18 &= ((/* implicit */signed char) var_17);
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0 - 3]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) (-(18446744073709551615ULL)));
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] |= ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_1]))) >= ((+(1ULL)))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-26609))));
            var_23 &= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_10 [i_1] [i_2]), (arr_10 [i_1] [i_2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                for (signed char i_5 = 3; i_5 < 6; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) 18446744073709551615ULL);
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [9U] [9U])), ((((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9802))) : ((~(18446744073709551609ULL)))))));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] [i_3] |= ((/* implicit */unsigned long long int) (signed char)-1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_21 [(short)4] [8] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) > (arr_11 [i_1] [i_3] [i_6])));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    arr_26 [i_1] [(unsigned char)6] = ((/* implicit */long long int) var_15);
                    var_26 = ((/* implicit */long long int) max((var_26), (((long long int) arr_5 [i_6]))));
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    arr_29 [i_8] [(unsigned short)4] [i_6] [i_8] = ((/* implicit */long long int) 2047U);
                    arr_30 [(_Bool)0] [i_8] [i_6] [i_8] [(short)7] = ((/* implicit */int) arr_28 [i_1] [i_1] [i_3] [i_6] [i_1] [i_8]);
                    var_27 = ((/* implicit */signed char) (-(2740805800U)));
                }
                var_28 = ((/* implicit */unsigned short) arr_13 [i_1]);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (unsigned char)244)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 8; i_11 += 3) 
                        {
                            var_30 = ((((/* implicit */int) arr_25 [(unsigned char)7] [i_10] [i_9] [i_3] [(_Bool)1])) >> (((2712464525887728589ULL) - (2712464525887728563ULL))));
                            var_31 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (18446744073709551591ULL)))) << (13U)));
                            var_32 &= ((/* implicit */unsigned long long int) arr_32 [(short)7] [5U] [(short)7] [i_1]);
                            var_33 -= ((/* implicit */signed char) var_15);
                            var_34 = ((/* implicit */int) ((((/* implicit */int) arr_33 [i_3] [(unsigned short)2] [i_11 - 3])) >= (((/* implicit */int) arr_34 [8ULL] [i_3] [i_1]))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 4; i_12 < 8; i_12 += 4) 
                        {
                            var_35 = arr_28 [i_12 + 1] [i_12] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2];
                            var_36 += (-(arr_39 [i_12 - 2] [i_12] [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_1]));
                        }
                        var_37 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)237)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_1] [i_3] [i_3])))) : (max((7ULL), (((/* implicit */unsigned long long int) arr_11 [i_10] [i_9] [i_1]))))));
                        arr_42 [i_1] [i_1] [2ULL] [i_1] [(short)6] [2U] = ((/* implicit */long long int) max((max((arr_25 [i_3] [i_3] [i_9] [i_3] [i_9]), (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)249)))))));
                        var_38 = ((/* implicit */int) (~(arr_11 [i_3] [i_9] [i_10])));
                    }
                } 
            } 
            var_39 += max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [(unsigned short)6])), (arr_40 [i_1] [i_1] [i_3] [i_1] [i_3])))), (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (11ULL))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) (-(var_0)));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-21)) && (((/* implicit */_Bool) 4294967283U))));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((int) ((long long int) (unsigned char)171))))));
                    }
                } 
            } 
        }
        var_43 ^= ((/* implicit */signed char) (((-(arr_47 [i_13] [i_13] [i_13] [i_13]))) - (((/* implicit */int) (unsigned char)19))));
        var_44 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_3))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                {
                    var_45 = ((/* implicit */signed char) 4294967295U);
                    arr_61 [i_17] [i_18] [22] = ((signed char) var_6);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        arr_64 [i_17] [i_17] [i_17] [i_17] = (~(arr_44 [i_20]));
                        var_46 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)141)) << (((arr_46 [i_18]) - (134395011603132504LL))))) != (((/* implicit */int) var_8))));
                        var_47 = ((/* implicit */unsigned short) arr_52 [i_20]);
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) arr_60 [i_18] [i_19] [i_20]))));
                    }
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned char) 1ULL);
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 21; i_21 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_22 = 2; i_22 < 17; i_22 += 1) 
        {
            arr_72 [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) (-(4037760021570609747LL)));
            var_50 = ((/* implicit */unsigned char) ((unsigned int) (signed char)26));
            var_51 = ((/* implicit */short) ((signed char) 606016291U));
            var_52 = ((/* implicit */unsigned long long int) var_1);
        }
        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) arr_67 [i_21]))));
            var_54 = ((/* implicit */unsigned short) 18446744073709551583ULL);
            var_55 = ((/* implicit */long long int) (~(arr_50 [i_23] [15ULL])));
        }
        for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_24] [i_21])) + (((/* implicit */int) arr_56 [i_21] [i_21]))));
            /* LoopNest 3 */
            for (long long int i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    for (unsigned short i_27 = 3; i_27 < 20; i_27 += 4) 
                    {
                        {
                            var_57 = (!(((/* implicit */_Bool) arr_45 [i_21] [i_24])));
                            var_58 = ((/* implicit */unsigned int) (-(4037760021570609747LL)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_28 = 0; i_28 < 21; i_28 += 2) 
        {
            var_59 = (((~(((/* implicit */int) arr_71 [i_21] [i_28] [i_28])))) | (((/* implicit */int) arr_54 [i_28])));
            arr_89 [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((arr_58 [i_21] [i_28]) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_78 [i_21])) && (((/* implicit */_Bool) var_9)))))));
        }
        var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) (short)32761))));
    }
}
