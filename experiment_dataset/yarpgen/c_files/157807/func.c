/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157807
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = min((min((((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_0])), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_0 [i_1] [(unsigned short)1])) < (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))) / (((unsigned long long int) min((var_1), (((/* implicit */int) var_2)))))));
                                arr_12 [i_4] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4)))))));
                                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_16 [i_5] &= ((/* implicit */long long int) var_7);
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~((-(var_3)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_7] [i_6 - 1])) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (short)-13372)))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9 + 1] [i_6 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_24 [i_9 + 1] [i_6 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_10 = 3; i_10 < 7; i_10 += 1) 
    {
        arr_27 [i_10] [i_10] = ((/* implicit */signed char) (+(min((((16418532056228345531ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_10]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [(_Bool)1] [i_10])))))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        arr_37 [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */unsigned int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_10 - 2])))) : (min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
                        var_17 ^= ((/* implicit */signed char) var_9);
                    }
                    for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (((+((~(var_6))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(arr_10 [i_10] [i_11] [(signed char)16] [i_12] [i_12] [i_14] [i_14])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_34 [i_10] [i_11]))))))));
                        var_19 = ((/* implicit */_Bool) var_0);
                        arr_42 [i_11] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(var_4)))) <= (((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10 + 2]))))), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        var_20 &= ((var_3) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))));
                    }
                    for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        arr_46 [i_11] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (11451146793386092118ULL))), (((unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) max((arr_25 [i_11] [i_10 + 1]), (((/* implicit */int) min((((/* implicit */unsigned short) (short)2436)), (var_5)))))))));
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10] [i_10 - 3] [(unsigned short)8] [i_12])))))));
                        var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_38 [i_11] [i_12] [i_12] [i_11] [i_10]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (140737454800896LL))))), (((long long int) ((signed char) var_5)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 7; i_16 += 3) 
                    {
                        arr_49 [(signed char)7] [i_11] [i_12] [i_11] [i_16 - 1] [i_16] = ((/* implicit */unsigned long long int) (~(var_8)));
                        var_23 = ((/* implicit */_Bool) ((11451146793386092118ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1073)))));
                    }
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            {
                                arr_54 [i_10] [i_11] [1] = ((((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned char)154)), (var_10))) + (((/* implicit */int) (short)-32755))))) ? (max((((/* implicit */long long int) max((var_5), (var_5)))), (((long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
                                var_24 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) > (var_3))))) + (min((var_9), (((/* implicit */unsigned int) var_10))))))), (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((22LL) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) ((arr_29 [i_10 + 2] [i_10 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_10 - 3] [i_10 + 3])) && (((/* implicit */_Bool) arr_29 [i_10 + 1] [(short)3]))))))));
    }
    for (long long int i_19 = 4; i_19 < 20; i_19 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_20 = 1; i_20 < 20; i_20 += 4) 
        {
            arr_59 [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_8 [i_19] [i_20] [i_19 - 3] [i_19] [i_20])))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
            arr_60 [i_20 - 1] [i_20] [i_19] = ((/* implicit */short) ((((arr_8 [i_19] [i_20 - 1] [i_20 - 1] [(_Bool)1] [i_20]) << (((var_6) - (5883325297135356700ULL))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_5 [i_19] [18] [i_19 - 1] [i_19]) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
        }
        var_27 = ((/* implicit */unsigned int) (~(max((((((/* implicit */int) var_4)) / (((/* implicit */int) var_5)))), (var_1)))));
    }
    var_28 = var_10;
}
