/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145829
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_5 [i_0] [i_0] = (-(10105022272739941287ULL));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_14 = (-(min((arr_9 [i_1]), (arr_9 [i_1]))));
        var_15 = ((unsigned int) (-(arr_1 [i_1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned int) (unsigned short)44271);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
                arr_17 [i_1] [4ULL] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((arr_11 [i_2]) == (arr_11 [i_3]))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
            }
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_18 |= ((/* implicit */unsigned long long int) arr_12 [i_4]);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    arr_23 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [i_1])))));
                    var_19 = arr_9 [i_1];
                }
                /* LoopSeq 4 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (1073741823U)));
                    arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((2227426378U) ^ (2827895134U)))));
                    arr_27 [(signed char)6] [i_2] [7] [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_6] [5U] [(short)0] [i_1])))))));
                }
                for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    arr_30 [2U] [i_2] [i_4] [2U] [i_7 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(short)13] [14ULL] [i_7 - 1] [i_7 - 3])) ? (arr_28 [i_7] [2] [i_7 - 3] [i_7 + 3] [11U] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)931)))))), (((((/* implicit */_Bool) arr_25 [i_7 - 2] [i_7 + 2])) ? (arr_8 [i_1] [i_7 + 3]) : (arr_8 [i_1] [i_7 - 2])))));
                    var_21 = ((/* implicit */signed char) ((max((arr_3 [i_7 + 2]), (((/* implicit */unsigned long long int) arr_0 [i_7 + 3])))) / (arr_3 [i_7 - 1])));
                    arr_31 [i_7] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-23034)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) 1008U)) > (arr_9 [i_7 + 1]))))));
                    arr_32 [16U] [i_2] [i_4] [i_7] = 3145728U;
                    var_22 = ((/* implicit */short) (signed char)126);
                }
                /* vectorizable */
                for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    arr_36 [i_1] [i_2] [i_4] [(unsigned short)16] [i_8] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3685794604U))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 50331648))));
                    arr_37 [i_1] [i_1] [i_4] [i_8] [i_8] = 3221225456U;
                }
                for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    arr_40 [i_4] [i_2] [i_4] [3U] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_9] [i_1] [i_1]))));
                    arr_41 [i_1] [i_2] [11ULL] [i_9 + 2] = min((((arr_18 [i_9] [i_9 + 2] [i_9] [i_9]) % (arr_28 [i_4] [i_9 + 1] [i_9] [i_9] [i_9] [i_9 - 1]))), (((/* implicit */unsigned int) min((arr_19 [7ULL] [i_9 + 1] [i_9] [3U]), (arr_19 [i_9] [i_9 + 3] [i_9 + 1] [11ULL])))));
                }
                arr_42 [i_4] [i_4] [4U] [i_1] = ((/* implicit */unsigned int) (-(((1819408080) / (((/* implicit */int) arr_15 [i_1] [i_2] [i_4] [i_4]))))));
            }
        }
    }
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
    {
        arr_45 [i_10] = min((arr_2 [i_10] [i_10]), (1073741839U));
        arr_46 [13U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_10] [1ULL])) ? (((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_25 [i_10] [i_10]))))) + (((unsigned int) 11226774607564631167ULL))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 121028570U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)4431)), (var_2)))) : (((((/* implicit */unsigned long long int) 3221225457U)) + (8646911284551352320ULL)))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [14U] [i_10])))))))) : (((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) ((unsigned short) (unsigned short)16385))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21272)))))))));
    }
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_13 = 4; i_13 < 10; i_13 += 2) 
                {
                    var_25 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54196)) ? (1867379068U) : (((/* implicit */unsigned int) 1362499639)))))))));
                    arr_54 [i_12] [i_13] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) 2541420371U)));
                }
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    arr_58 [7U] [5ULL] [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_11]))))) <= (((2683270828U) >> (((arr_28 [11U] [4U] [i_14 + 1] [11U] [i_14 + 2] [i_14]) - (1495649067U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_15 = 4; i_15 < 11; i_15 += 4) 
                    {
                        arr_63 [3] [i_12] [i_15] = (-(505161126U));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            arr_67 [i_12] [i_15 - 1] [10] [i_14 + 1] [i_12] [i_12] = (((-(9007199254740976ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_12] [i_14 + 2]))));
                            arr_68 [i_12 - 1] [i_12] = arr_18 [15ULL] [i_15 - 2] [i_14 + 2] [i_11];
                        }
                    }
                }
                var_26 = min((arr_12 [i_11]), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [8U] [i_12 + 2])))))))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_56 [i_12] [i_12] [i_12])) ? (arr_56 [i_11] [(short)11] [i_11]) : (arr_56 [i_12] [10U] [i_11]))))))));
            }
        } 
    } 
}
