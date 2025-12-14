/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180689
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
    var_12 ^= var_7;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((2369784726U) | (3038014843U))))))) == (((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2 + 2] [i_2] [i_2])) + (83)))))));
                    var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2785678553U)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1]))))))))) : (((unsigned int) var_9))));
                    arr_9 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */signed char) 2785678553U);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
        arr_11 [i_0] = (+(max((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2ULL]))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_15 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_3])))) ? ((-(arr_14 [i_3]))) : ((-(1509288742U)))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10)))))));
                    arr_21 [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_4 - 1] [i_4] [i_4 - 1])))));
                    var_16 = ((/* implicit */unsigned short) arr_16 [i_4]);
                }
            } 
        } 
        var_17 = ((/* implicit */int) 1256952452U);
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3310170214U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1509288741U)));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_6] [i_6] [i_6])))))));
                    arr_28 [i_6] [i_7] = ((/* implicit */unsigned long long int) max((((arr_19 [i_8 + 1] [i_8 + 1] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((((_Bool)1) ? (2785678553U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [(signed char)5] [(signed char)5] [i_8 - 1])), (min((-592653268), (((/* implicit */int) arr_19 [i_6] [i_7] [i_6])))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) arr_19 [i_8 + 1] [i_8 + 1] [i_8 - 1])) : (((/* implicit */int) arr_19 [i_8 + 1] [i_8 + 1] [i_8 + 1]))))), ((-(1914716427U)))))));
                        arr_33 [i_6] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))) - (1509288729U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)13)), (arr_17 [i_8] [i_8] [i_8])))) : (((/* implicit */int) ((unsigned short) 2380250869U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_7] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [i_7] [i_6]))) : (3310170214U)))) ? ((-(-936165597))) : (((/* implicit */int) arr_32 [i_6] [i_7] [i_8] [i_8 - 1] [i_9]))))) : (max((var_4), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)40057)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)17765));
                        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3310170214U)) ? (max((((/* implicit */int) var_11)), (arr_15 [i_8]))) : (arr_29 [i_6] [i_6] [i_9])))));
                        arr_34 [i_6] [i_7] [10U] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_8]), (((/* implicit */unsigned int) ((signed char) arr_14 [i_6])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7] [i_8] [i_7]))))) ? (7350897203111075969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_8 + 1] [i_8 + 1]))))) : (((/* implicit */unsigned long long int) (+(((int) var_4)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)10)) : (arr_29 [i_6] [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_6])) ? (arr_29 [i_6] [i_6] [i_6]) : (arr_29 [i_8] [i_7] [i_6])))) : (min((1873019086U), (1914716427U))));
                        arr_38 [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_8 + 1])))))));
                        var_24 = ((/* implicit */unsigned short) 4197848360U);
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_8 - 1] [i_7] [i_7]), (arr_40 [i_8 + 1] [i_10] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))) - (((((((/* implicit */_Bool) (unsigned short)2557)) ? (2785678561U) : (arr_39 [i_6] [i_6] [(unsigned short)3] [i_6] [i_6]))) & (((/* implicit */unsigned int) (~(arr_13 [i_6]))))))));
                            arr_41 [i_10] [i_7] [i_8] [i_10] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1914716446U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15659))) : (16975835158631606083ULL))) <= (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3310170229U)) ? (arr_39 [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [21] [4U] [21]))))))))));
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1207441845U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_10))))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((max((arr_26 [i_6] [i_7] [i_11]), (arr_26 [i_6] [i_7] [i_8 + 1]))), ((-(arr_26 [i_11] [i_8] [i_6]))))))));
                        }
                    }
                    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_28 = ((/* implicit */int) 17320672528474592137ULL);
                            arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_12 - 1] [i_7] [i_8 - 1] [i_13]))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_46 [i_6] [i_7] [i_12 + 2] [i_12 + 2] [i_13] [i_8 - 1]))));
                            arr_49 [i_6] [i_7] [i_8] [i_6] [i_6] [i_8] [i_12] = ((/* implicit */int) ((unsigned short) ((unsigned int) arr_37 [i_7] [i_8] [i_8] [i_8 - 1])));
                        }
                        for (unsigned int i_14 = 4; i_14 < 13; i_14 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_8 + 1]))) && (((/* implicit */_Bool) ((arr_16 [i_8 + 1]) & (((/* implicit */int) var_8)))))));
                            var_31 = ((/* implicit */_Bool) (unsigned short)30163);
                        }
                        var_32 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_26 [12] [12] [i_8])) ? (arr_44 [i_6] [i_6] [i_8] [i_8 + 1] [i_8]) : (((/* implicit */int) (signed char)13)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (-1108825974) : (((/* implicit */int) arr_43 [i_6] [i_7] [i_8] [i_8 + 1] [i_12]))))))));
                        arr_53 [i_12] [i_8] [i_6] [i_6] [i_6] = (+(((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_8 - 1] [i_12 + 1])));
                    }
                    for (unsigned short i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) 1966559111596082460ULL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)2557)))), ((-(((/* implicit */int) (unsigned short)8044)))))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~((-2147483647 - 1)))))));
                    }
                }
            } 
        } 
    } 
}
