/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131513
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
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)41257)) < (((/* implicit */int) (unsigned char)46)))))) : (var_2)))));
    var_21 = ((/* implicit */long long int) ((var_5) ? (var_9) : (((unsigned long long int) var_8))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) ? (((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)41257))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))) - (((arr_1 [10] [10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)54983)) : (((/* implicit */int) (unsigned char)232))))), (max((0U), (((/* implicit */unsigned int) (signed char)16)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [(short)11] [i_2] [i_2])) : (((/* implicit */int) var_11)))))));
                    arr_9 [i_1] [i_1] [2ULL] [i_1] = ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) < (min((9007199254740992ULL), (((/* implicit */unsigned long long int) ((arr_7 [i_1] [(_Bool)1] [i_1]) <= (((/* implicit */unsigned long long int) 4294967295U))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_24 ^= -1926986373;
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [5LL] = ((/* implicit */unsigned short) (-(max((var_14), (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3])))))))));
            arr_18 [i_3] [i_4] [i_3] = ((/* implicit */int) var_19);
        }
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)79)) <= (((/* implicit */int) (signed char)-1))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50681))) : (8489397936473257482LL))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_25 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [7] [i_6] [i_6] [i_6]))) <= (arr_11 [i_5])));
            arr_26 [i_6] [(short)18] = ((/* implicit */unsigned int) ((arr_0 [i_6] [i_5]) > (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-17)) < (arr_10 [i_5] [i_5]))) ? (arr_1 [i_6] [i_5]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_5] [i_5])))))));
            var_26 = ((/* implicit */long long int) arr_22 [i_6] [i_5]);
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_27 *= ((/* implicit */unsigned int) arr_22 [i_5] [i_7]);
                    arr_33 [i_5] [i_5] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_30 [(_Bool)1] [i_7] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_23 [i_5] [i_7] [i_5]))))));
                }
            } 
        } 
        arr_34 [i_5] [i_5] = ((/* implicit */signed char) (((+(0U))) > (((/* implicit */unsigned int) arr_10 [i_5] [i_5]))));
        var_28 = ((/* implicit */signed char) ((unsigned int) arr_23 [(short)1] [i_5] [i_5]));
    }
    for (int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = ((/* implicit */long long int) arr_22 [i_9] [i_9]);
        /* LoopSeq 2 */
        for (long long int i_10 = 3; i_10 < 17; i_10 += 3) 
        {
            arr_41 [i_10] = min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)115)), (4294967288U)))) && (((/* implicit */_Bool) arr_36 [i_10 + 1]))))));
            arr_42 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) (_Bool)1))))) >> (min((((unsigned long long int) arr_28 [i_9] [i_10] [(_Bool)1])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-2)))))))));
            var_29 = ((/* implicit */signed char) -7547197475012613380LL);
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) arr_13 [(signed char)8] [i_11]);
                /* LoopSeq 2 */
                for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) /* same iter space */
                {
                    arr_50 [i_13] [i_13] [i_12] [i_13] [i_11] = ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 2] [i_13 - 1])) : (((/* implicit */int) arr_45 [i_13 + 3] [i_13 + 1] [i_13 + 3])));
                    arr_51 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2147483647) : (((/* implicit */int) (unsigned char)42))));
                }
                for (unsigned char i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_55 [i_9] [(_Bool)1] [(_Bool)1] [i_14 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8176)) ? (((/* implicit */int) arr_23 [i_14 - 1] [i_14 - 1] [i_14 + 2])) : (((/* implicit */int) arr_23 [i_14 + 2] [i_14 + 1] [i_14 + 2]))));
                    var_31 = var_19;
                    arr_56 [15] [10ULL] [8ULL] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [19] [i_14 - 1] [(unsigned char)0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9] [9] [i_14 - 1])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_16))))) : (arr_1 [i_14 - 1] [i_14 - 1])));
                    arr_57 [6U] = ((/* implicit */int) ((((-746511012) + (((/* implicit */int) (unsigned char)177)))) > (var_13)));
                }
            }
            for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_9] [i_9] [i_15])) <= (((/* implicit */int) arr_16 [i_11] [i_11]))));
                arr_61 [10ULL] = var_1;
            }
            arr_62 [i_11] &= ((/* implicit */signed char) (~(var_10)));
        }
        arr_63 [i_9] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64637)))));
    }
}
