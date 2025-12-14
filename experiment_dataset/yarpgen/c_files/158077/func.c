/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158077
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) (signed char)123)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_10 [(unsigned short)0]))));
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [(unsigned short)22] [(short)18]))));
                        var_16 = ((/* implicit */unsigned char) arr_12 [i_3] [i_1 - 1] [i_2] [i_0] [i_2] [i_3]);
                        var_17 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (((var_2) >> (((arr_10 [i_0]) + (5482931141919094508LL)))))));
    }
    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_19 &= ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) arr_5 [i_4] [(unsigned char)15] [21LL])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_6 [(short)20] [(short)20])))))));
            var_20 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)9)))) ? (((/* implicit */int) (!((!(arr_7 [(unsigned short)8])))))) : (((/* implicit */int) var_9))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4] [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) min(((unsigned char)169), (((/* implicit */unsigned char) (signed char)123)))))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8 + 1] [i_4] [i_7 + 4] [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_8 + 1] [i_6] [i_7 + 4] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_8 + 1] [i_6] [i_7 + 4] [i_4 - 1]))))) || (((/* implicit */_Bool) arr_11 [i_8 + 1] [i_8 + 1] [i_7 + 4] [i_4 - 1]))));
                            var_23 |= ((/* implicit */unsigned char) arr_6 [i_4 - 2] [i_6]);
                            var_24 ^= (~((~(arr_16 [i_4 - 2]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            var_25 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10])) ? (arr_10 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [22LL])))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)56), ((signed char)-12))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [i_4 + 3])) : (((/* implicit */int) arr_14 [i_4 - 3])))))));
            var_26 += ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_4]))) | (arr_25 [i_4] [(short)13] [i_10] [i_10] [(short)13]))))), ((-(((/* implicit */int) ((_Bool) 1892334164139377225LL)))))));
            var_27 = ((/* implicit */unsigned long long int) var_11);
            var_28 = ((/* implicit */unsigned long long int) (unsigned char)201);
        }
        arr_29 [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4 + 3] [i_4] [i_4]))));
        var_29 = ((/* implicit */long long int) ((unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) + (var_3))))));
        arr_30 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_4])), (18446744073709551615ULL))))) | (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)11659), (((/* implicit */unsigned short) (signed char)122))))))))));
        arr_31 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_4] [i_4 + 4] [i_4] [i_4 - 1] [i_4] [i_4 + 2])) / (((/* implicit */int) max((arr_14 [i_4 - 2]), (arr_14 [i_4 + 2]))))));
    }
    for (unsigned char i_11 = 3; i_11 < 20; i_11 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) var_13);
        arr_34 [i_11] = ((/* implicit */long long int) arr_19 [i_11 + 3] [2ULL] [i_11]);
    }
}
