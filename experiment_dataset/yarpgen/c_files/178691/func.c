/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178691
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) -1LL)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_2] = ((/* implicit */short) (-(min((arr_5 [i_2] [i_3] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)242))))));
                        var_12 = (i_2 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 2] [i_3 - 2] [i_3]))))), (((((unsigned long long int) (_Bool)1)) >> (((((/* implicit */int) arr_10 [i_2] [i_3])) - (40)))))))) : (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3 + 3] [i_3 + 2] [i_3 - 2] [i_3]))))), (((((unsigned long long int) (_Bool)1)) >> (((((((/* implicit */int) arr_10 [i_2] [i_3])) - (40))) + (88))))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) + (((1U) >> (((((/* implicit */int) var_4)) - (222)))))));
                            var_14 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */short) min(((+((+(arr_16 [i_0] [i_1] [i_1] [i_0] [8ULL] [i_2]))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_0))))))));
                            var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_5), (((((var_0) + (9223372036854775807LL))) << (((4294967291U) - (4294967291U)))))))), (max((((/* implicit */unsigned long long int) 4294967291U)), (0ULL)))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_6 [(short)11] [i_2] [(short)11]))));
                            var_17 -= ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) (unsigned char)255);
                            var_19 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */unsigned long long int) 0U);
                        }
                        for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((arr_20 [12ULL] [12ULL]) | (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))))) ^ (arr_20 [i_0] [i_0])));
                            var_22 -= ((/* implicit */_Bool) 18446744073709551615ULL);
                            var_23 = ((/* implicit */long long int) (~(-1)));
                        }
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(2LL))))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_9))));
                        var_26 = max((arr_21 [i_0] [i_1] [i_2] [i_2] [i_9]), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_2)))) / (((/* implicit */int) var_3))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)32767))));
                        /* LoopSeq 3 */
                        for (short i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            var_28 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned short)3)))))));
                            arr_34 [i_1] [i_2] [i_1] [i_10] [i_10] = ((/* implicit */unsigned char) (((~(18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            var_29 -= ((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned char)8), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_26 [i_0])))))))), (max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))))));
                            var_30 -= ((/* implicit */unsigned char) (-(((0ULL) << ((((+(2147483647))) - (2147483643)))))));
                            var_31 -= ((/* implicit */long long int) var_7);
                        }
                        for (long long int i_13 = 4; i_13 < 14; i_13 += 1) 
                        {
                            arr_41 [i_13 + 3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)32768);
                            arr_42 [i_13] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_4);
                            var_32 = ((/* implicit */short) (-(((min((var_6), (((/* implicit */long long int) 4294967295U)))) & (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13 + 2] [i_2] [i_2] [i_1 + 1] [i_2] [i_1] [i_1])))))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)116)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    arr_43 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_3))));
                    arr_44 [i_2] = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        arr_45 [i_0] [(_Bool)0] = ((/* implicit */short) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_34 = arr_31 [i_0] [i_0];
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 4) 
            {
                {
                    arr_50 [i_0] [i_14] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_0))))))), (((((4194048ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((arr_49 [i_15]) * (((/* implicit */unsigned long long int) 1U))))))));
                    var_35 = ((/* implicit */unsigned char) 9223372036854775807LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                {
                    arr_55 [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), ((~(var_5)))));
                    var_36 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_16] [i_16] [i_16] [i_16] [i_0] [i_0])))))));
                    var_37 = (_Bool)1;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) /* same iter space */
    {
        arr_59 [i_18] [i_18] = (~((~(((/* implicit */int) (unsigned short)0)))));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                {
                    var_38 = arr_25 [i_19 - 1] [i_19 - 2] [i_19 - 2] [i_19 - 3];
                    arr_67 [i_20] [0ULL] [10U] [5LL] = ((/* implicit */unsigned short) arr_49 [i_18]);
                }
            } 
        } 
        var_39 -= ((/* implicit */short) (~(18446744073709551598ULL)));
        arr_68 [i_18] [i_18] = (+(((/* implicit */int) ((18446744073709551601ULL) <= (((/* implicit */unsigned long long int) arr_64 [(unsigned char)9] [3] [i_18] [i_18]))))));
        var_40 -= ((/* implicit */unsigned short) ((long long int) var_0));
    }
    var_41 = max((var_2), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))) < (((/* implicit */int) (unsigned char)0))))));
}
