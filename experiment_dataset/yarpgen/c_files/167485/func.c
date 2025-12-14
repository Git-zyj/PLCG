/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167485
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((4294967295U) & (((/* implicit */unsigned int) -534391462))))) : (max((8796093022207LL), (((/* implicit */long long int) 12))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned int) var_5);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) max((((/* implicit */int) (short)-17735)), (536870911))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)94)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_12 [i_4] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [i_2] [i_4] [i_4]))))) && (((((/* implicit */_Bool) var_2)) || (var_17))))) ? (((((/* implicit */_Bool) var_12)) ? (max((-1LL), (((/* implicit */long long int) 536870911)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_7 [i_1] [10LL] [i_3])) : (((/* implicit */int) arr_10 [(short)14]))))))) : (var_12)));
                        arr_13 [i_2] [i_1] [(short)1] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (536870915) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                        var_22 = ((/* implicit */_Bool) max((-536870912), (((/* implicit */int) (short)-23100))));
                        var_23 = ((/* implicit */long long int) min((var_23), (max((((/* implicit */long long int) ((((int) var_16)) >> (((((/* implicit */int) max((((/* implicit */short) var_1)), (arr_8 [i_1] [i_1] [i_4] [i_4])))) - (107)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (arr_11 [i_4] [i_2 + 1] [0ULL] [i_2 + 2] [i_4])))))));
                    }
                } 
            } 
            arr_14 [i_2] = ((/* implicit */short) var_18);
            arr_15 [(unsigned char)4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [(unsigned char)8] [i_2 - 1] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (9223372036854775799LL))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3816148811109961501ULL))))))) ? (((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned int) var_3))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (short)-23998)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned short)14] [4U] [i_2] [i_2 + 3])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1]))))))));
        }
        var_24 -= ((/* implicit */int) (+(0ULL)));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1499679718406835967LL), (((/* implicit */long long int) var_8))))) ? ((+(var_14))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)123), (((/* implicit */unsigned char) (_Bool)1))))))))) ? (((((/* implicit */_Bool) min(((short)-32744), (arr_8 [i_1] [i_1] [(_Bool)1] [i_1])))) ? (((arr_10 [i_1]) ? (var_9) : (((/* implicit */unsigned long long int) 7156483408846137495LL)))) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_15))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_23 [(unsigned char)15] [i_6] [(unsigned char)15] = ((/* implicit */unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1190891308))));
                    arr_24 [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)230)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_16)))))))) ? ((((~(0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_5]), (arr_20 [i_6])))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            {
                                arr_31 [(signed char)15] [i_6] [i_6] [i_8] [i_6] [(signed char)15] = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) arr_18 [i_8])))) - (((/* implicit */int) (unsigned char)0))));
                                arr_32 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_14);
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5]))) / (min((((((/* implicit */long long int) arr_25 [i_5] [(_Bool)1] [i_7] [(unsigned char)3] [13])) + (arr_22 [i_5] [i_6]))), (((/* implicit */long long int) ((var_4) <= (((/* implicit */int) (unsigned short)0))))))))))));
                                var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_17 [i_6])))) ? (((arr_16 [i_5]) | (((/* implicit */unsigned long long int) arr_17 [i_8])))) : (((((/* implicit */_Bool) -706646479538541992LL)) ? (arr_16 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                arr_33 [i_5] [i_6] [i_5] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23985)))))) < (max((((/* implicit */long long int) -536870916)), (var_18))))))) < (706646479538541992LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_34 [(short)15] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((arr_26 [i_5] [i_5] [(unsigned char)9] [i_5] [i_5]), (arr_26 [i_5] [i_5] [i_5] [13ULL] [i_5])))), (min((((/* implicit */unsigned long long int) (unsigned char)7)), (0ULL)))));
        arr_35 [i_5] = (+(((/* implicit */int) ((((/* implicit */int) arr_18 [i_5])) > (((/* implicit */int) arr_18 [11U]))))));
        arr_36 [i_5] [19] = ((/* implicit */long long int) (((+(4294967295U))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551593ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))))) : (arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)15])))));
        arr_37 [i_5] = ((/* implicit */_Bool) -1422511662);
    }
    for (short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
    {
        arr_41 [i_10] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)29500))) >= (((var_16) ? (-2077076551337365758LL) : (var_18))))) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_25 [15LL] [15LL] [i_10] [5LL] [i_10])), (var_7)))));
        arr_42 [i_10] [i_10] = ((/* implicit */unsigned char) ((arr_22 [10] [10]) == ((-(arr_22 [i_10] [i_10])))));
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned char) (+(max((arr_27 [i_10]), (arr_27 [(short)1])))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 17; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 18; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28790)) ? ((-(((((/* implicit */_Bool) 3118661119101107236ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_17) ? (var_10) : (((/* implicit */unsigned long long int) 9223372036854775794LL))))) ? (((/* implicit */unsigned int) arr_25 [(_Bool)1] [(_Bool)1] [i_12] [i_13 + 2] [i_14])) : (var_8))))));
                                arr_54 [i_12] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_15 = 3; i_15 < 17; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            {
                                arr_63 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3))))))) ? (((((var_18) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))) ? (arr_22 [i_10] [i_11 + 3]) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))));
                                arr_64 [i_12] [i_12] [i_11 + 3] [(signed char)11] [(signed char)11] [1] [(signed char)11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_11 - 2] [i_11 - 2] [i_11 + 2])) ? (((((/* implicit */_Bool) arr_47 [i_11 + 1] [i_11 + 1] [i_11 - 2])) ? (arr_47 [i_11 + 3] [i_11 + 3] [i_11 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((arr_47 [i_11 + 1] [i_11 - 1] [i_11 - 1]) + (arr_47 [i_11 + 2] [i_11 + 2] [i_11 + 3]))))))));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_15)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) -536870891)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551609ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 &= min(((~(((/* implicit */int) (signed char)-86)))), ((-(((/* implicit */int) ((arr_26 [i_10] [i_10] [i_10] [i_10] [i_10]) < (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    }
}
