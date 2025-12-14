/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127606
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
    var_13 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(1048576ULL))), (((/* implicit */unsigned long long int) var_0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) 1048579ULL);
                            arr_14 [i_1 - 2] [i_0] [i_4] = ((/* implicit */unsigned char) (-(var_10)));
                            arr_15 [i_0] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(arr_4 [i_1 - 1] [i_3 - 1] [i_3 - 1])));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */int) arr_13 [i_1 + 4] [(unsigned char)4] [i_0] [i_1 + 4] [i_1 + 4]);
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_15 = ((/* implicit */int) (unsigned short)10);
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_1] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_0] [i_0] [i_0]))))) < (arr_3 [i_1 + 2])));
                arr_20 [i_0] [i_1 - 1] [i_1 - 2] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-24413)))));
            }
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_25 [i_0] [i_0] [i_0] = arr_22 [i_0] [i_1] [i_1];
                arr_26 [i_1] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                arr_27 [i_0] [10] [i_0] [i_0] &= var_12;
            }
            for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                var_16 = ((int) ((unsigned short) (_Bool)1));
                var_17 = ((/* implicit */_Bool) (-(arr_29 [i_1 - 1])));
            }
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_33 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_8])) : (((/* implicit */int) arr_10 [i_0]))));
            var_18 += ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) var_0)));
        }
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1048576ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))) >= (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (var_2)))) : ((-(((/* implicit */int) arr_0 [i_9]))))))));
            arr_39 [i_0] [i_9] = ((/* implicit */unsigned int) arr_36 [(_Bool)1] [i_9]);
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            arr_43 [6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? ((~(arr_4 [i_0] [i_0] [i_0]))) : ((~(((/* implicit */int) arr_34 [4U]))))));
            var_19 ^= ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_10])) || (((/* implicit */_Bool) arr_4 [i_0] [i_10] [i_10])));
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_1))));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            {
                arr_50 [(_Bool)1] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((((/* implicit */_Bool) var_2)) ? (arr_17 [i_12] [(_Bool)1] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_12] [i_12] [i_12]))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_11] [i_12])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-18334)) : (((/* implicit */int) arr_41 [i_11]))))) ? (min((arr_4 [i_12] [i_12] [i_11]), (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_2 [i_12] [i_12]))))) : ((-(((((/* implicit */_Bool) (short)-11802)) ? (arr_18 [i_11] [i_11] [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) 16747468384863177470ULL)))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12] [i_11]))) : (arr_18 [i_13] [i_11] [i_13] [i_14]))) + (min((((/* implicit */unsigned long long int) arr_46 [i_12])), (var_5))))) : (((((/* implicit */_Bool) 594386959931942789ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551615ULL)))))));
                            var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))) + (((((/* implicit */_Bool) 266338304U)) ? (arr_9 [i_13] [i_12] [i_12] [i_11]) : (((/* implicit */long long int) var_7)))))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(var_10))))))));
                            arr_55 [i_14] = ((/* implicit */unsigned long long int) ((unsigned char) max((((unsigned short) var_7)), (((/* implicit */unsigned short) (!(arr_22 [i_14] [5LL] [i_13])))))));
                        }
                    } 
                } 
                arr_56 [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) arr_12 [i_12] [i_12] [i_12] [i_11] [6LL] [i_12]))));
                arr_57 [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12])) ? (arr_47 [i_12]) : (arr_47 [i_12])))) ? (((/* implicit */int) ((unsigned short) arr_47 [i_11]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32759)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_5);
}
