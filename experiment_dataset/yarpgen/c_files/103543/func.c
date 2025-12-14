/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103543
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32291)) ? (((/* implicit */int) (unsigned short)50915)) : (((/* implicit */int) (unsigned char)181))));
                    var_13 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)74))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_5 [(unsigned char)6])))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) ((min((var_3), (var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    arr_11 [i_1] [i_1] = ((/* implicit */int) var_10);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) min((((unsigned short) ((unsigned char) var_11))), (((/* implicit */unsigned short) (_Bool)0))));
                        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)181))))), (max((((/* implicit */unsigned int) ((2047) <= (((/* implicit */int) arr_2 [i_3 + 1]))))), (2472427888U)))));
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)40594)) >> (((/* implicit */int) (_Bool)1))))))) < (max((((unsigned int) var_3)), (arr_12 [i_0 - 2] [i_1] [i_2 + 1] [i_3])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_2 + 2] [i_2] [i_2 + 1]);
                        var_19 = ((/* implicit */_Bool) min(((unsigned short)8191), (((/* implicit */unsigned short) (short)255))));
                        var_20 = ((/* implicit */short) max((4294967295U), (3067846078U)));
                    }
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) var_8);
    var_22 = ((unsigned int) (!((!(((/* implicit */_Bool) var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
                {
                    arr_24 [i_5] [i_7 - 1] = ((/* implicit */unsigned char) min((3115229513U), (((/* implicit */unsigned int) (signed char)-67))));
                    arr_25 [(signed char)6] [i_6] [i_7] [2] = ((((min(((~(arr_16 [(signed char)12]))), (((/* implicit */int) max(((signed char)41), ((signed char)-31)))))) + (2147483647))) >> ((((+(2047))) - (2020))));
                }
                for (short i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    arr_28 [(short)6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) max(((short)258), ((short)-256)))), (max((((/* implicit */int) min(((short)259), (((/* implicit */short) var_1))))), (arr_14 [i_6] [(unsigned short)14] [i_8] [i_5] [i_5])))));
                    var_23 = ((/* implicit */int) var_1);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (var_3)));
                        arr_31 [(unsigned char)5] [i_9 + 1] [i_8] [i_9] [i_6] [i_6] = ((/* implicit */short) (~(((unsigned int) arr_1 [i_5] [i_8 - 2]))));
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-67)), ((unsigned char)0))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            var_26 = ((max((9049005909716324550LL), (((/* implicit */long long int) arr_26 [(unsigned char)8] [(unsigned char)8])))) & (((/* implicit */long long int) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6])))))));
                            var_27 = max(((((+(((/* implicit */int) (signed char)101)))) & (((/* implicit */int) (signed char)-42)))), (((int) (unsigned char)184)));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)116))))))))));
                        arr_37 [i_5] [i_6] [i_8] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max(((short)0), (((/* implicit */short) (_Bool)0)))))) << (((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2047U))))))) - (228)))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_14 = 2; i_14 < 8; i_14 += 4) 
                            {
                                var_29 = ((/* implicit */signed char) (~(1600881969U)));
                                arr_44 [i_12] [i_5] [i_12] [i_5] [i_5] = ((/* implicit */short) -1002953375);
                            }
                            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                            {
                                var_30 = ((/* implicit */unsigned short) 1600881962U);
                                var_31 *= ((/* implicit */int) var_8);
                                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned char)181)) < (((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                            }
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                            {
                                arr_53 [i_16] [i_16] [i_16] = max((((max((((/* implicit */unsigned int) arr_6 [i_5] [i_13])), (68697068U))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))) == (17179869183ULL)))))), (max((((/* implicit */unsigned int) 67108863)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) : (var_12))))));
                                var_33 += ((/* implicit */short) min((arr_4 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) > (((/* implicit */int) arr_51 [i_5] [i_13] [i_13] [i_5] [i_6] [i_6] [i_5])))))));
                                var_34 = ((/* implicit */signed char) ((_Bool) (~(4294967295U))));
                            }
                            /* vectorizable */
                            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                            {
                                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (_Bool)1))));
                                var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                                arr_58 [i_12] [i_5] [i_12] [i_12] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (short)32757))));
                            }
                            var_37 = ((/* implicit */signed char) max((arr_19 [i_6] [i_13]), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)255)) : (-1)))))));
                            var_38 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)155)) / (((/* implicit */int) (unsigned short)3167))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) min((var_39), (((signed char) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)17))))))));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned char)181))))))));
                var_41 &= ((unsigned int) 2147483647);
            }
        } 
    } 
}
