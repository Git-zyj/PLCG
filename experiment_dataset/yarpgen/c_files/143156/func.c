/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143156
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)47692))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [4LL] = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_15 [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_4))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_0] [3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            var_15 = ((/* implicit */unsigned char) (~((-(var_0)))));
                            var_16 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)39)))))));
                            arr_24 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)22559))));
                            var_18 ^= ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_18 [i_5] [i_3] [(_Bool)0] [i_0] [i_0]))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+((-((-(((/* implicit */int) (unsigned short)65535)))))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~((+((~(((/* implicit */int) (signed char)96)))))))))));
                        arr_29 [i_0] [(_Bool)0] [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_1)))))))));
                        var_21 = ((/* implicit */unsigned int) (~((-((-(var_5)))))));
                        arr_30 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+((~((+(((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)42995))))))))))));
                            arr_38 [i_0] [i_2] [i_7] [i_8 - 1] = ((/* implicit */long long int) (+((+((~(((/* implicit */int) (unsigned short)5))))))));
                            var_23 = ((/* implicit */unsigned char) (+((-((~(((/* implicit */int) var_9))))))));
                            var_24 = ((/* implicit */long long int) (+((+((-(((/* implicit */int) (signed char)125))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((+(arr_34 [i_7] [i_7] [i_7] [i_7]))))))));
                            arr_42 [i_7] [i_0] [i_7] [3] [i_9] = ((/* implicit */unsigned long long int) (~((-((+(((/* implicit */int) var_12))))))));
                            arr_43 [i_9] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */signed char) (-((+((-(var_6)))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_26 ^= (~(((/* implicit */int) (unsigned short)2)));
                            var_27 = ((/* implicit */short) (+((-((~(((/* implicit */int) (unsigned short)17846))))))));
                        }
                        arr_46 [i_7] [i_7] [i_1] [i_2] [i_7] [i_7 + 1] = ((/* implicit */signed char) (~((+(4950669851540985345LL)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        arr_49 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (+((+((-(arr_13 [i_0] [i_1] [i_2] [i_2] [(unsigned char)0])))))));
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_31 [i_11 + 3] [i_2] [i_1] [i_11] [(signed char)2] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */short) (-((-(9223372036854775807LL)))));
                        var_30 = ((/* implicit */int) max((var_30), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    }
                    var_32 = ((/* implicit */short) (-((~(32767LL)))));
                }
                for (unsigned short i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    arr_56 [i_13 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_2))))))));
                    var_33 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(var_8))))))));
                }
                var_34 -= ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)28)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_14 = 3; i_14 < 18; i_14 += 4) 
    {
        var_35 &= ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) (unsigned short)65522))))))));
        var_36 = ((/* implicit */unsigned short) (+((-(3734356277U)))));
        var_37 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)6))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        var_38 += ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)47720))))));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            arr_63 [i_15] [i_15] = ((/* implicit */signed char) (-((+(2114260517)))));
            arr_64 [i_15] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))));
            var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65516))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_67 [i_17] = ((/* implicit */short) (-((-(arr_54 [i_17] [(short)2] [i_15] [i_15])))));
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)6)))))))));
        }
        for (unsigned int i_18 = 2; i_18 < 7; i_18 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */int) (-((-(arr_66 [i_15] [i_15] [i_18])))));
            arr_70 [i_15] [i_15] = ((/* implicit */short) (+((+(var_0)))));
        }
        for (unsigned int i_19 = 2; i_19 < 7; i_19 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1342932231)))))));
            /* LoopNest 3 */
            for (signed char i_20 = 2; i_20 < 8; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_44 = (!((!(((/* implicit */_Bool) arr_81 [i_15] [i_19] [i_20] [i_19] [i_22] [i_20])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                for (short i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    for (long long int i_25 = 2; i_25 < 7; i_25 += 3) 
                    {
                        {
                            var_45 = (~((-(var_0))));
                            arr_89 [i_15] [i_15] [i_24] [i_24] [i_25 - 1] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65526))));
                            var_46 += ((/* implicit */unsigned int) (+((~(36028797018963967LL)))));
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_62 [i_15]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 2) 
        {
            var_48 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))));
            /* LoopSeq 3 */
            for (unsigned int i_27 = 3; i_27 < 9; i_27 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_28 = 0; i_28 < 10; i_28 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        var_49 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
                        var_50 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-15663))));
                        arr_99 [i_15] [i_29] [i_27] [i_28] [i_29] = ((/* implicit */short) (+((-(-3335370814348605622LL)))));
                        arr_100 [i_15] [i_26] [i_27] [i_29] [i_26] [i_29] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-80))))));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_51 = ((/* implicit */long long int) (~((~(2147483635)))));
                        var_52 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64)))))));
                        var_53 = ((/* implicit */unsigned char) (+((+(13ULL)))));
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 2) 
                    {
                        arr_106 [i_15] [i_26] [i_26] [i_31] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)1))))));
                        arr_107 [i_27] [i_26] [i_27] [i_28] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_54 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 20ULL))))));
                    }
                    arr_108 [i_26] [i_26] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)65516))))));
                }
                for (int i_32 = 0; i_32 < 10; i_32 += 1) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_15] [i_15] [i_26] [i_15] [i_15])))))));
                    arr_113 [i_15] [i_15] [(unsigned short)6] [i_26] [(signed char)8] [i_32] = ((/* implicit */long long int) (-((-(((/* implicit */int) var_9))))));
                    arr_114 [i_26] [i_26] [i_26] [i_27] [i_27 - 1] = ((/* implicit */int) (-((+(10478253862094990664ULL)))));
                    var_56 = ((/* implicit */unsigned short) (~((+(18446744073709551598ULL)))));
                }
                var_57 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_40 [i_15] [i_26] [i_26] [i_27] [i_27]))))));
                var_58 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3427248009233702023LL))));
                var_59 &= (-((+(arr_13 [i_15] [i_15] [i_15] [i_26] [i_27 - 2]))));
            }
            for (short i_33 = 2; i_33 < 9; i_33 += 1) 
            {
                var_60 = ((/* implicit */short) (~((+(((/* implicit */int) (signed char)-122))))));
                var_61 = ((/* implicit */unsigned char) (+(-1700887506)));
            }
            for (int i_34 = 3; i_34 < 7; i_34 += 4) 
            {
                arr_119 [i_15] [(short)8] [i_34] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551568ULL)))))));
                var_62 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_90 [i_15] [i_15]))))));
                var_63 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(-1626708303))))));
                var_64 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)65526))))));
            }
        }
        arr_120 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_33 [i_15] [i_15] [i_15] [i_15]))))));
    }
}
