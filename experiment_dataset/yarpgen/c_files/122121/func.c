/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122121
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) == (var_16))))))) % (((arr_6 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))));
                    arr_9 [i_0] [8] [i_0] [i_0] &= min((((/* implicit */long long int) (~(-1)))), (min((((/* implicit */long long int) max(((unsigned char)207), (((/* implicit */unsigned char) var_2))))), (((arr_2 [i_0] [i_0]) & (((/* implicit */long long int) arr_4 [i_0] [i_0])))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]) + (9223372036854775807LL))) << (((((arr_7 [i_2 - 3] [(unsigned char)10] [i_2 - 1] [(unsigned char)10]) + (908370278242796274LL))) - (32LL))))), (arr_7 [i_2 - 3] [i_2] [i_2 + 1] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_17);
    var_19 = (+(((/* implicit */int) var_4)));
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_8) * (var_12))), (((/* implicit */unsigned int) (unsigned char)182))))) && (((/* implicit */_Bool) arr_2 [i_3] [i_3]))));
        var_21 *= (unsigned char)78;
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) == (((/* implicit */int) (unsigned char)225))))), (var_6))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))))) | (((/* implicit */int) var_0))))));
            arr_18 [i_3] [i_4] &= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_3 [i_3] [12U]), (((/* implicit */unsigned int) arr_12 [i_4] [i_3]))))) < (max((((/* implicit */long long int) arr_13 [i_3])), (arr_2 [i_3] [i_4])))))), (max(((~(arr_6 [i_3]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))));
            arr_19 [i_3] = ((/* implicit */unsigned int) arr_15 [i_4] [i_3]);
        }
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            var_22 |= ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)49)))) | (((/* implicit */int) arr_14 [i_5 - 1]))));
            var_23 *= ((/* implicit */unsigned short) arr_3 [i_3] [i_3]);
            var_24 -= ((/* implicit */_Bool) var_16);
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */long long int) arr_24 [i_6] [i_6]);
        arr_28 [i_6] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_6])))) ^ ((-(((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        arr_38 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_29 [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)66)));
                        arr_39 [i_6] [i_6] [(unsigned short)14] [i_9] &= ((/* implicit */long long int) ((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) < (9223372036854775807LL)))), (max((((/* implicit */long long int) arr_31 [i_6])), (1758110300919868301LL))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36404)))));
                    }
                } 
            } 
            var_26 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_29 [i_6] [i_6] [i_6]))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */long long int) arr_24 [i_6] [i_6]);
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) == (max((arr_43 [i_6] [i_7] [i_11] [i_11]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_35 [i_6] [i_7] [i_6] [i_6] [i_10] [i_11]))))))))))));
                        arr_44 [i_6] [i_6] [i_10] [i_11] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_30 [i_6])), ((+(arr_37 [i_6] [i_7] [i_6]))))), (((/* implicit */long long int) arr_35 [i_11] [i_11] [i_11] [5ULL] [i_11] [i_11]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        arr_47 [i_12] [i_12] = 13835058055282163712ULL;
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                for (long long int i_15 = 4; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_15 - 1] [i_15 - 4] [i_12] [i_15 + 1])))))));
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_15 + 4] [i_15] [i_15 + 1]))));
                        arr_54 [i_12] [i_13] [i_13] [i_15 + 2] [12U] = ((/* implicit */int) (-(var_1)));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
            arr_55 [i_12] [i_13] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)221))))));
        }
        var_32 = ((/* implicit */unsigned char) ((arr_37 [i_12] [i_12] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_12])) != (((/* implicit */int) arr_53 [i_12]))))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 13; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_30 [i_18 + 1]))));
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> ((((+(arr_56 [i_16]))) - (2508996873468353571LL))))))));
                                var_35 = ((/* implicit */unsigned char) (+((-(var_16)))));
                            }
                        } 
                    } 
                    arr_65 [i_12] [i_17] [i_17] [i_16] = ((((/* implicit */unsigned long long int) arr_52 [i_17] [i_16] [i_12] [i_12])) / (((var_1) << (((var_8) - (1504039868U))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_20 = 1; i_20 < 14; i_20 += 1) 
        {
            for (unsigned int i_21 = 1; i_21 < 12; i_21 += 3) 
            {
                {
                    var_36 = (~(((/* implicit */int) (unsigned char)24)));
                    var_37 = ((/* implicit */int) arr_67 [i_12]);
                }
            } 
        } 
    }
}
