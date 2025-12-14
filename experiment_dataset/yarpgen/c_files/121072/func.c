/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121072
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
    var_10 = ((/* implicit */unsigned char) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_6), (((/* implicit */short) var_7))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            arr_11 [i_4] [i_4] [i_1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] = ((/* implicit */short) (+(((((/* implicit */int) arr_7 [i_0 - 3])) * (((/* implicit */int) arr_7 [i_0 + 3]))))));
                            var_11 = arr_2 [i_1];
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50943))))) ? ((~(((/* implicit */int) (unsigned short)50943)))) : (arr_9 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0])));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_5 + 1] [i_1] [i_5 + 1] [i_3 - 1] [i_1]))));
                        }
                        var_14 *= ((/* implicit */int) var_8);
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_18 [i_0] [i_2] [i_1] [i_3 - 1] [i_0 - 2] [i_1] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_6] [i_3] [i_3 - 1] [i_0] [i_0] [i_0] [i_0])), (arr_17 [i_0] [i_0] [i_2] [i_2] [i_3 - 1] [i_2]))))))), ((unsigned short)46144)));
                            var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)19391))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9))))), (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)14593))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((unsigned int) (unsigned short)14593)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_21 [i_1] [i_1] = min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-18246))))))), (min((arr_2 [i_1]), (((/* implicit */long long int) (+(((/* implicit */int) (short)8356))))))));
                            arr_22 [i_0 + 2] [i_1] [i_2] [i_3 - 1] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)55957)), (((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 1136894540654960919LL)) : (1864811124809509680ULL))))));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_1))))));
                        }
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46144)) ? (var_0) : (((/* implicit */unsigned int) 1203390242))))) : (var_3))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) var_3)))))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_19 &= ((/* implicit */_Bool) ((arr_19 [i_8] [i_8] [i_0 - 1]) - (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_8] [i_2] [i_1] [i_0 + 3])))))));
                        arr_26 [i_0 + 3] [i_0 + 3] [i_1] = (~(((((/* implicit */_Bool) var_0)) ? (6211168992312024422ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52867))))));
                    }
                    for (short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) arr_8 [i_9] [i_2] [i_0] [i_1] [i_1] [i_0] [i_0 + 1]);
                        var_21 *= ((/* implicit */unsigned int) 6211168992312024422ULL);
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-3950702450044002348LL))))))), (var_8)));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8351)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))))))) <= (((/* implicit */int) (unsigned char)65))));
        /* LoopSeq 2 */
        for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (+((+(min((var_4), (((/* implicit */long long int) 1411245724))))))));
                arr_39 [i_0 + 3] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (-8025869155369321260LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3]))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_36 [i_0] [i_11] [i_0 + 1] [i_10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3])))))))));
            }
            for (short i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
            {
                arr_42 [i_0 - 1] [i_10] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_0] [i_10] [i_10])) ? (arr_19 [i_0 - 1] [i_10] [i_0]) : (arr_19 [i_0] [i_10] [i_10]))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_19 [i_0 + 2] [i_10] [i_0 + 3])))));
                arr_43 [i_0 + 3] [i_0 + 3] [i_10] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_9))))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_24 -= ((/* implicit */unsigned long long int) ((unsigned int) 0));
                    var_25 = ((/* implicit */int) ((max((var_2), (((/* implicit */unsigned int) arr_32 [i_0 - 1] [i_10 + 1])))) <= (((arr_32 [i_0 - 1] [i_10 - 1]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10 + 3] [i_10] [i_12])))))));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_50 [i_10] [i_12] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_36 [i_0] [i_0] [i_0] [20]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15] [i_14] [i_12] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_14] [i_15])) : (6ULL)));
                        arr_53 [i_15] [i_10] [i_10] = ((/* implicit */unsigned int) (((+(-3933974722462498807LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_7))))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_29 [i_12] [i_10]))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_16 [i_0 - 2] [i_10 - 1] [i_12] [i_14]))));
                        var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)46135)) ? (-2147483636) : (((/* implicit */int) (unsigned short)65535))))));
                        var_30 += ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)34811)))) == (((/* implicit */int) var_9))));
                    }
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
                    var_32 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_12 [0U] [i_14]));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8264868111124579925LL)))))));
                        arr_58 [i_0 + 2] [i_0 + 1] [i_10] [i_0 + 3] = (~(((long long int) var_6)));
                    }
                    for (int i_18 = 1; i_18 < 21; i_18 += 4) 
                    {
                        arr_63 [i_18] [i_10] [i_12] [i_10] [i_0] = ((/* implicit */int) (+(arr_41 [i_10] [i_0 + 3])));
                        var_34 = ((/* implicit */unsigned int) (unsigned char)3);
                        arr_64 [i_10] [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) + (((/* implicit */int) var_9)))) + (((/* implicit */int) (unsigned char)59))));
                    }
                    for (int i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_0 + 1] [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10])) ? ((~(((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_10])))) : ((+(((/* implicit */int) arr_55 [i_0] [i_10 + 3] [i_12] [i_14] [i_19]))))));
                        var_36 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_0 - 2] [i_0 - 2]))));
                        var_37 = ((/* implicit */unsigned short) (+(arr_14 [i_0 - 3] [i_0 - 2] [i_10] [i_0 + 3] [i_10 - 1])));
                        arr_68 [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_48 [i_19] [i_14] [i_12] [i_0 + 1]))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */long long int) arr_45 [i_0] [i_0] [i_10] [i_12] [i_14] [i_19])) != (var_3))))));
                    }
                }
                var_39 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_47 [i_0] [i_10] [i_0 - 1] [i_10 + 2])))) && ((!(((/* implicit */_Bool) arr_47 [i_0] [i_10] [i_10 + 3] [i_10 + 1]))))));
                var_40 = ((/* implicit */short) var_3);
            }
            var_41 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) 2147483636)))))))));
        }
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_42 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (arr_34 [i_0] [i_20] [i_20]))));
            arr_71 [i_20] = ((/* implicit */unsigned short) (~((-(arr_9 [i_0 + 3] [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_0 - 2] [i_0])))));
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((~(arr_28 [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (arr_52 [20U] [20U] [i_0 - 2] [i_20] [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_8)))))))))))));
        }
    }
    for (unsigned short i_21 = 3; i_21 < 19; i_21 += 2) /* same iter space */
    {
        var_44 = ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) % (((((/* implicit */_Bool) ((var_3) >> (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_69 [i_21] [i_21] [i_21 + 3])) & (((/* implicit */int) var_8))))) : ((+(8314760989391623413LL))))));
        var_45 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) 10455353305864935149ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_59 [i_21 - 1] [i_21] [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21]))), (((((/* implicit */_Bool) arr_51 [i_21] [i_21 + 2] [i_21 - 3] [i_21 - 2] [i_21] [i_21 - 3])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), ((+(-1026013978660100767LL)))))));
    }
}
