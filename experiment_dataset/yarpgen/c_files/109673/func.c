/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109673
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 2619444223U);
            arr_9 [i_1] = ((/* implicit */unsigned int) (((-((-(arr_1 [i_1] [(unsigned short)12]))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 3])))))));
        }
        arr_10 [i_0 - 1] = ((/* implicit */_Bool) (~(-2143072288)));
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((unsigned long long int) arr_2 [i_0 + 4])) : (max((var_15), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_0 + 1]))))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_0 [i_0 - 2]))));
                        arr_18 [i_0] [i_2 + 2] [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned int) min((arr_1 [i_2 - 2] [i_0 + 1]), (arr_1 [i_3 + 2] [i_4]))));
                        var_18 = ((/* implicit */unsigned short) ((int) min((arr_13 [i_3] [i_3 + 1] [i_2 + 1] [i_0 + 4]), (arr_13 [i_4] [i_3 + 1] [i_2 + 1] [i_0 + 1]))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_27 [i_0 + 1] [i_6] [i_5] [i_6] [i_6 - 2] [i_7 - 2] = ((/* implicit */unsigned char) var_6);
                        arr_28 [i_7] [i_6] [(signed char)15] [(signed char)15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_5] [0LL])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_6] [i_5]))) : ((~(var_15))))) < (arr_1 [2ULL] [i_5 - 1])));
                        var_19 = ((/* implicit */signed char) (-(var_4)));
                        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4279155061U)) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [(signed char)1] [i_0] [i_0])) ? (var_0) : (arr_21 [(_Bool)1])))))));
                    }
                } 
            } 
            arr_29 [i_5] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)65532)))) ? (((((/* implicit */_Bool) 3082286622U)) ? (arr_23 [(_Bool)1] [i_0 + 4]) : (arr_23 [0U] [i_0 + 1]))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_23 [(short)12] [i_0 + 1])))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_8])) ? (arr_19 [i_0 - 2] [i_0 - 2]) : (((/* implicit */long long int) var_2))));
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)50);
            arr_32 [i_8] [i_0] &= ((/* implicit */long long int) arr_3 [i_0 + 1]);
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 15; i_12 += 2) 
                    {
                        {
                            arr_44 [i_0 + 4] [i_0] [i_10] [i_0] [i_10] = 3082286622U;
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (33753081U)))) : (var_3)));
                            arr_45 [i_0] [i_0 + 1] [i_10] = ((/* implicit */int) ((((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_17 [i_10] [i_12] [(_Bool)1] [i_10] [i_12] [i_12])))) || (((/* implicit */_Bool) arr_31 [i_10 + 1] [i_10 + 1] [(signed char)1]))));
                        }
                    } 
                } 
            } 
            arr_46 [i_0 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_0] [14U])) : (((/* implicit */int) arr_14 [12LL] [(signed char)0]))));
        }
    }
    for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_13] [i_13] [i_13] [1LL] [i_14] [i_14] [i_13]))))) && (((/* implicit */_Bool) arr_14 [i_13 - 1] [(signed char)10]))));
            arr_52 [i_13] [i_14] [2] = ((/* implicit */signed char) arr_42 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 3] [i_13] [i_13] [i_13 - 2]);
        }
        var_25 = ((/* implicit */signed char) min((((arr_41 [i_13 + 1] [i_13 - 2] [(signed char)5] [i_13 - 2]) | (arr_41 [i_13 - 2] [i_13 + 4] [i_13 + 1] [i_13 + 3]))), (min((arr_41 [i_13 - 2] [i_13 + 1] [i_13] [i_13 + 2]), (((/* implicit */long long int) var_11))))));
        arr_53 [15ULL] [15ULL] = 15812235U;
    }
    var_26 = ((/* implicit */int) var_8);
}
