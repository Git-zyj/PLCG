/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132290
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 2] [i_1] [i_0 - 1] |= ((/* implicit */short) var_13);
                    arr_9 [i_2 - 1] [i_0 + 3] [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_4 [i_2] [i_0])) % (((/* implicit */int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) ((short) arr_5 [(short)6])))));
                    arr_10 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) ((short) 2584163182198850010LL));
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_3 [i_2 + 2] [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (6699801524644468487ULL))))));
                    arr_12 [i_0 + 1] [(signed char)2] [i_2] [i_2] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 2] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) var_11)) : (var_10)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_25 [i_3 - 1] = ((/* implicit */signed char) var_1);
                        arr_26 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)27078)) : (((/* implicit */int) (unsigned char)153))))) % (15249774097100627364ULL)));
                    }
                } 
            } 
        } 
        arr_27 [i_3] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2]))));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1289703116U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12781))));
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_39 [i_7] [i_9] [i_9 + 2] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_34 [i_8 + 1] [i_9 + 3] [i_10 + 1])) ^ (((/* implicit */int) var_0)))) % (((((/* implicit */int) (short)-30788)) * (((/* implicit */int) arr_34 [i_8 + 1] [i_9 + 3] [i_10 + 1]))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                            {
                                arr_42 [i_7] [i_9] [(signed char)11] [i_10] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_10 + 2] [i_10 + 2] [i_10] [(unsigned short)13])))) ? (((((/* implicit */_Bool) 6818412239601923405ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (var_14))) : (((((/* implicit */_Bool) arr_7 [i_10 + 2] [(unsigned short)10] [i_10] [i_10])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                arr_43 [i_7] [i_8] [i_9] [i_7] [i_9] [(unsigned short)10] [8U] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34431)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))) ? (((/* implicit */int) var_5)) : (arr_41 [(signed char)3] [i_8 + 1] [i_9 - 2] [8LL] [(signed char)3])))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (4029062262U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-88))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10))) : ((~(var_14)))));
                            }
                            for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_7] [11ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [(short)8])))))))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_2))));
                                arr_48 [i_7] [i_9] [5] [6LL] [i_13 - 2] [i_9] = ((/* implicit */int) ((15059865968663797951ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_8)))) ? (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8 + 1] [i_9 + 1]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_4 [i_8 + 2] [i_9 + 2])))))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_41 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 2]))))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */long long int) arr_41 [1] [i_8] [i_8] [i_8 + 2] [i_8]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_8 + 2] [i_8 + 2] [i_8 + 2])) : (arr_41 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])))));
                /* LoopNest 2 */
                for (signed char i_14 = 3; i_14 < 12; i_14 += 1) 
                {
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_8 + 1] [i_8 + 1] [i_14 - 1])), (var_14)))) ? (((arr_52 [i_15] [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 2]) % (arr_52 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1]))) : (min((((/* implicit */long long int) ((((/* implicit */int) (short)26386)) >= (var_11)))), (6333078519129130826LL)))));
                            arr_55 [i_8 + 1] [i_8 + 1] = ((/* implicit */short) var_13);
                            arr_56 [i_7] [i_7] [i_7] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), ((~(var_13)))));
                        }
                    } 
                } 
                var_23 += ((/* implicit */long long int) (unsigned char)241);
                var_24 += ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((signed char) var_9))), ((~(var_14)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_14);
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_9))));
}
