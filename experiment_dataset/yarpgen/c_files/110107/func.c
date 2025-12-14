/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110107
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_15 ^= ((/* implicit */long long int) ((int) ((1215053046U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) (~(var_14)))))));
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_7 [7])) : (((/* implicit */int) var_13))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-((+(var_0))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_3 - 2] [i_3 - 2]))));
                            arr_18 [4U] [i_0] = ((/* implicit */unsigned short) (~(var_1)));
                            var_19 = ((/* implicit */unsigned char) ((int) var_2));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_3 - 1] [2] [i_5])) & (((/* implicit */int) var_10)))))));
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) 1215053046U)) ? ((~(var_12))) : (((/* implicit */int) (unsigned char)0))));
                        }
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            var_22 ^= ((/* implicit */int) (+(arr_0 [i_3])));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3079914265U)) ? (arr_6 [i_6] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))) : (3079914250U)));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_9 [i_7 - 1] [i_3 - 1] [i_3 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_25 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) == ((+(((/* implicit */int) var_10))))));
                            arr_25 [8] [i_1] [i_2] [i_2] [i_2] [i_3] [i_3] &= ((/* implicit */short) (unsigned short)65535);
                        }
                        for (long long int i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((unsigned short) ((unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3])));
                            var_27 = ((/* implicit */int) ((short) arr_19 [i_3 - 2] [i_3] [i_8 - 1] [i_8 + 1] [i_3]));
                            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) / ((-2147483647 - 1))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((arr_26 [i_3 + 1] [3ULL] [i_3] [i_3] [(unsigned char)5] [i_0] [i_3]) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3 - 1]))));
                            var_29 += ((/* implicit */int) ((short) var_14));
                        }
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */int) var_3);
                            var_31 = ((/* implicit */unsigned int) ((arr_12 [i_3 - 1]) >= (arr_12 [i_3 + 1])));
                        }
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_33 |= ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (+(3334374629371727832LL))))));
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            var_35 = ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [11] [i_3 - 2] [i_0])) ? (((/* implicit */int) arr_37 [i_0] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2])) : ((-(var_12))));
                            var_36 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1] [i_1] [i_0] [11])) - (((/* implicit */int) arr_23 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_2] [i_2]))));
                            var_37 = ((/* implicit */long long int) ((unsigned int) arr_16 [i_0] [i_0] [5U] [i_3 - 1] [i_3 - 2]));
                            var_38 = (((~(((/* implicit */int) arr_37 [i_0] [i_0] [i_2] [i_2] [i_3] [i_12])))) >> (((((unsigned long long int) arr_3 [i_0] [i_0])) - (18446744071677456904ULL))));
                        }
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
                        {
                            var_39 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))) : (var_0)));
                            var_40 ^= ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0] [7LL] [i_0] [i_0]);
                        }
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                        {
                            var_41 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_9) : (370711521)))));
                            var_42 = ((/* implicit */unsigned char) ((arr_8 [i_3] [i_3] [i_3] [i_3 + 1]) ? (((/* implicit */int) arr_22 [i_0] [i_2] [i_2] [i_3 + 1] [i_2] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3 + 1]))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_3 - 1] [i_3] [i_3 - 2]))));
                            var_44 = ((/* implicit */unsigned char) var_6);
                        }
                    }
                } 
            } 
        } 
        arr_46 [i_0] = ((/* implicit */int) (+(var_1)));
        arr_47 [i_0] = arr_17 [i_0] [i_0] [i_0] [i_0] [8ULL];
    }
    for (int i_15 = 2; i_15 < 9; i_15 += 3) 
    {
        arr_50 [i_15] = ((/* implicit */_Bool) ((long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (arr_2 [i_15 - 2])))));
        var_45 &= ((/* implicit */unsigned int) ((short) max((arr_36 [i_15] [i_15 + 2] [i_15] [i_15] [2ULL]), (((/* implicit */unsigned char) (signed char)-50)))));
    }
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        arr_53 [i_16] = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) (unsigned short)65535)) ? (705117295) : (((/* implicit */int) (unsigned char)229))))))));
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16]))))))) / (max((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_6))))))));
                        var_47 = ((/* implicit */int) arr_59 [i_16] [i_17]);
                    }
                } 
            } 
        } 
        var_48 ^= ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((short) arr_51 [i_16] [i_16])))))));
    }
    for (unsigned char i_20 = 4; i_20 < 9; i_20 += 1) 
    {
        var_49 &= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_20 - 3] [i_20] [i_20] [i_20] [(_Bool)1]))) * (var_2)))) ? (arr_4 [i_20] [(unsigned char)10]) : (((/* implicit */int) ((_Bool) 11534817702175227753ULL))))), (((/* implicit */int) arr_61 [(unsigned short)0]))));
        var_50 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_14)))));
        var_51 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_8)))) ? (min((2223180361659507182LL), (9223372036854775805LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((((/* implicit */int) arr_36 [i_20] [i_20] [i_20 - 4] [i_20 - 1] [(short)10])) < (min((((/* implicit */int) var_6)), (var_12)))))));
        var_52 = ((/* implicit */signed char) var_12);
        var_53 *= ((/* implicit */unsigned char) arr_22 [i_20] [0ULL] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_21 = 1; i_21 < 7; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 11; i_23 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        arr_78 [i_24] [i_22] [i_22] [i_24] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) < (((((/* implicit */_Bool) arr_70 [i_23])) ? (4294967292U) : (var_3)))));
                        var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_21] [i_21] [1] [i_21 + 2] [i_24])))));
                        var_55 = ((/* implicit */short) 210111658);
                    }
                    var_56 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_13)) < (var_12))));
                }
            } 
        } 
        var_57 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)185)) : (var_9)))));
        var_58 = ((/* implicit */unsigned short) arr_14 [i_21] [i_21] [i_21 + 2] [i_21 + 4] [i_21 + 3]);
        arr_79 [(unsigned short)4] = ((/* implicit */long long int) (((~(var_9))) / (((/* implicit */int) arr_60 [i_21 - 1] [i_21 + 4]))));
    }
    for (unsigned long long int i_25 = 1; i_25 < 19; i_25 += 4) 
    {
        var_59 = ((/* implicit */unsigned char) max((var_59), (((unsigned char) arr_81 [i_25] [19ULL]))));
        var_60 &= ((/* implicit */long long int) 1068959232);
        arr_82 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((+(arr_81 [i_25 + 3] [13ULL]))) * (((/* implicit */unsigned long long int) (+(var_4)))))) : (((/* implicit */unsigned long long int) var_14))));
        var_61 = ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) (unsigned short)3928)))), (var_7)))));
    }
    for (long long int i_26 = 1; i_26 < 8; i_26 += 4) 
    {
        var_62 = ((/* implicit */long long int) (((-(var_0))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_26] [i_26] [i_26 - 1] [i_26 + 2] [i_26 - 1])))));
        var_63 = ((/* implicit */int) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55707)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)1225)))))));
        var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) ((_Bool) ((unsigned long long int) arr_57 [i_26 - 1] [3LL] [i_26 + 2] [i_26]))))));
        var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) 2147483647)))))))));
        arr_85 [i_26] [i_26] = ((/* implicit */int) (unsigned short)65535);
    }
}
