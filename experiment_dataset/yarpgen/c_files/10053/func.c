/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10053
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                        arr_15 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned short) (unsigned short)11)))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_18 [i_0] = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_4] [i_4]))))), (max((((/* implicit */unsigned long long int) arr_10 [i_4] [i_0])), (var_1))))));
            var_20 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3598917904217908960ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (7497443992441551824ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : ((-(arr_17 [i_4]))))))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)47815)), (arr_1 [i_5 - 1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_5])) ^ (((/* implicit */int) arr_20 [i_0] [i_5])))))))))))));
            arr_22 [i_0] [i_5] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8931)) ? (1356322445) : (((/* implicit */int) (short)-20806))))))));
            var_22 = (~(((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) : (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_5 - 1]))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)98)) ? (((((/* implicit */_Bool) arr_3 [i_6 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 - 2] [i_6 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20)))));
                            var_24 = ((/* implicit */short) max((max(((-(var_8))), (((((/* implicit */_Bool) 9505182858909136552ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_5 - 2]))) : (arr_13 [i_0] [i_5 - 1] [i_6 - 1] [i_7] [i_8 + 2] [i_8]))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_12 [i_7] [i_8 - 1])))), ((~(((/* implicit */int) (short)20806)))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) 4136097836300570640ULL);
            arr_35 [i_0] [i_9] = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_9] [i_0] [i_9] [i_9]);
        }
        var_26 = ((/* implicit */_Bool) arr_26 [i_0] [i_0]);
        var_27 *= (-(((min((18446744073709551597ULL), (((/* implicit */unsigned long long int) 133169152)))) ^ (max((((/* implicit */unsigned long long int) var_9)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 3) 
        {
            arr_39 [i_10] [i_10] [i_0] &= ((/* implicit */unsigned int) max((arr_36 [i_10 - 3] [i_10 - 1] [i_10 - 2]), (max((arr_36 [i_10 - 1] [i_10 - 3] [i_10]), (arr_36 [i_0] [i_10 - 3] [i_10 - 1])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_11 = 2; i_11 < 23; i_11 += 2) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_10] [i_11]) && (((/* implicit */_Bool) var_12)))))) ^ (arr_4 [i_0] [i_10] [i_11])));
                arr_42 [i_11] [i_11] [i_11 - 1] [i_11 - 1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_28 [i_0] [i_10 - 3] [i_10] [i_11] [i_11])) + (((/* implicit */int) arr_2 [i_0])))));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                arr_46 [i_12] [i_10 - 2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0]))));
                var_29 = ((/* implicit */long long int) var_11);
            }
            /* vectorizable */
            for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
            {
                arr_49 [i_13 + 2] [i_13] [i_13] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_16 [i_0] [i_0])))) ? (((/* implicit */int) arr_9 [i_0])) : (647551462)));
                arr_50 [i_0] [i_10 + 1] [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 127))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_13 - 2]))) : (arr_31 [i_10 - 2] [i_10] [i_10] [i_10 - 2])));
            }
        }
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 2) 
        {
            for (signed char i_16 = 3; i_16 < 12; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    {
                        arr_62 [i_14] [i_15] [i_16] [i_15] = ((/* implicit */long long int) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46189)))));
                        arr_63 [i_17] [i_15 - 1] [i_15] [i_15 - 1] [i_15 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_14] [i_15 - 1])) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_19 [i_15 - 1] [i_14]))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) ((arr_5 [i_14] [i_14]) ^ (arr_5 [i_14] [i_14])));
        var_31 = ((/* implicit */unsigned long long int) ((arr_17 [i_14]) ^ (arr_17 [i_14])));
    }
    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
    {
        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)20829)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18ULL)));
        arr_68 [i_18] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) : (((((/* implicit */_Bool) (short)20829)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20809))) : (6784336345845468344ULL))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_19 [i_18] [i_18])))));
        var_33 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_18] [i_18] [i_18])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_18] [i_18] [i_18])) ? (arr_40 [i_18] [i_18] [i_18]) : (arr_40 [i_18] [i_18] [i_18]))))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_0))));
    }
    var_35 = var_8;
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
    {
        arr_73 [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_48 [i_19] [i_19] [i_19] [i_19])))));
        arr_74 [i_19] = ((/* implicit */unsigned short) arr_37 [i_19] [i_19] [i_19]);
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)16630)), (((/* implicit */unsigned long long int) (signed char)-22))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_33 [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (3598917904217908960ULL)))))));
        arr_75 [i_19] [i_19] = ((/* implicit */unsigned short) arr_1 [i_19] [i_19]);
    }
}
