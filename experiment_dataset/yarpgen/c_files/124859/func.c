/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124859
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((~(arr_1 [(short)16]))) == (((((/* implicit */_Bool) arr_1 [(unsigned char)13])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [(short)8])))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (-(arr_1 [i_1])));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */signed char) (~(arr_1 [i_1])));
                        var_20 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3]))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_4]))));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)16] [i_4] [i_4])) ? ((+(((/* implicit */int) arr_2 [i_4])))) : (((/* implicit */int) arr_13 [i_4]))));
        /* LoopSeq 4 */
        for (unsigned char i_5 = 4; i_5 < 12; i_5 += 2) 
        {
            arr_22 [i_4] = ((/* implicit */long long int) ((_Bool) arr_1 [i_5 - 4]));
            arr_23 [i_5 - 1] [i_5 - 2] [i_4] = ((/* implicit */unsigned char) ((_Bool) arr_18 [i_5 - 3] [(signed char)0] [i_5 - 4]));
            arr_24 [i_4] [i_5 - 1] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_2 [i_5 + 1]))))));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned char) arr_8 [i_4] [i_4] [i_6])))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_37 [i_4] [i_8] [i_8] [i_4] [i_8] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [(unsigned char)8] [i_8] [(signed char)18]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_9] [i_7] [i_6] [i_4]))))) : (arr_0 [i_4] [i_6])));
                            arr_38 [i_8] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_3 [i_7]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_9 [i_4] [i_6] [i_6])) % (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4] [i_4])) ? (arr_6 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [(signed char)7] [i_4] [(_Bool)1] [i_4])))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] = ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_6] [i_4] [i_11]))) + (arr_31 [i_6] [i_4] [i_10] [i_11])));
                        var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_11] [i_6]))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(arr_11 [(unsigned short)16] [i_11] [i_10] [8LL] [(signed char)10] [(unsigned short)1]))))));
                    }
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
        {
            arr_46 [6U] [i_4] [i_4] = ((/* implicit */signed char) ((arr_40 [i_12] [i_12] [i_12] [i_12]) == (((((/* implicit */_Bool) arr_35 [4U])) ? (((/* implicit */int) arr_41 [i_12] [(unsigned char)11] [(_Bool)1] [i_4] [0U] [i_4])) : (((/* implicit */int) arr_25 [i_12] [i_12] [i_12]))))));
            var_26 *= ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_45 [i_12])))));
        }
        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            arr_50 [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_13] [i_13] [i_13] [i_4] [i_4] [i_4]))));
            arr_51 [i_4] = ((/* implicit */unsigned int) (-(arr_31 [11LL] [(unsigned char)9] [i_4] [i_4])));
            var_27 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_39 [i_13] [(signed char)10] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4] [2ULL]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((arr_49 [i_4] [i_14]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_14] [i_15])) ? (((/* implicit */int) arr_10 [i_4] [(short)6] [5ULL] [i_14])) : (((/* implicit */int) arr_41 [i_4] [(signed char)3] [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (signed char i_17 = 2; i_17 < 12; i_17 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */int) (+(arr_11 [i_17] [i_17 - 2] [(_Bool)1] [i_17] [i_17] [i_17])));
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_15 + 4] [i_14] [i_17 + 1])) ? (((/* implicit */int) arr_18 [i_4] [i_14] [i_14])) : (((/* implicit */int) ((((/* implicit */int) arr_58 [i_15 + 3])) >= (((/* implicit */int) arr_10 [i_4] [i_4] [i_15 + 2] [i_14])))))));
                                arr_62 [i_17] [i_15 + 2] [i_15 + 2] [i_14] [i_17 - 1] [3ULL] = ((/* implicit */signed char) ((long long int) ((_Bool) arr_39 [i_14] [i_4] [i_16])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((short) var_7)))))), ((~((-(var_10)))))));
}
