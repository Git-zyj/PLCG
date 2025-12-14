/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104174
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (-(((/* implicit */int) (unsigned char)6)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [(short)16] [(short)16] [22] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63447))));
                    var_17 = ((/* implicit */long long int) ((int) arr_10 [i_1 + 2] [i_1 - 1]));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [24U])))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_5] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) arr_7 [i_6] [i_3] [(short)18] [(short)18]);
                            var_19 = ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 2])) ? (var_2) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_6 - 1] [i_6 - 2])));
                            var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
            var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_3])) / (5771519740020166562LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_0])))));
            var_22 = ((/* implicit */long long int) ((short) arr_7 [i_3] [i_3] [i_3] [10]));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                arr_26 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)32724))));
                var_23 = ((int) ((int) var_9));
                var_24 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_9 [i_7] [4LL])))) ? (((long long int) arr_7 [3] [i_3] [i_3] [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7591)) ? (1253919866U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_7]))))))));
                var_25 ^= ((/* implicit */_Bool) arr_21 [i_3]);
                arr_27 [(unsigned char)10] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_9 [i_3] [i_7])))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
        {
            arr_34 [i_8] = ((/* implicit */int) ((unsigned long long int) arr_20 [(_Bool)1] [i_8] [(unsigned short)10] [(_Bool)1] [i_9]));
            var_26 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_20 [i_9] [i_9] [i_8] [i_8] [i_8])))));
        }
        for (long long int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
        {
            var_27 ^= (+(((/* implicit */int) arr_13 [10] [i_10])));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 2; i_11 < 22; i_11 += 1) /* same iter space */
            {
                var_28 += ((/* implicit */unsigned int) arr_9 [i_8] [i_8]);
                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20023)))))));
                var_30 |= ((/* implicit */signed char) ((arr_38 [i_8] [i_8] [i_8]) + (arr_38 [7U] [i_11 - 2] [3])));
            }
            for (unsigned int i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
            {
                var_31 -= ((/* implicit */signed char) arr_5 [i_8] [i_12 + 3] [i_12]);
                arr_43 [i_8] [i_8] [i_10] [i_12] = (i_8 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_10] [i_10] [i_8])) >> (((/* implicit */int) arr_30 [i_10] [i_12] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_10] [i_10] [i_8])) >> (((((/* implicit */int) arr_30 [i_10] [i_12] [i_8])) - (48))))));
                arr_44 [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_12 + 2] [i_12 + 3] [i_12 - 1] [i_12 + 2])) ? (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_10] [2U] [i_12 + 2]))) : (arr_0 [(unsigned short)1] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65518)) ^ (((/* implicit */int) arr_2 [i_12 - 1])))))));
            }
            arr_45 [i_8] [i_8] [17LL] = ((/* implicit */unsigned long long int) arr_8 [i_8] [i_8] [i_8] [i_10]);
        }
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            arr_49 [14ULL] [i_13] [14ULL] &= ((/* implicit */int) ((arr_36 [i_8]) > (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_13])) * (((/* implicit */int) arr_30 [i_8] [2] [14])))))));
            /* LoopNest 2 */
            for (long long int i_14 = 3; i_14 < 22; i_14 += 1) 
            {
                for (unsigned int i_15 = 3; i_15 < 24; i_15 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((unsigned int) 1836352933747147731LL));
                        var_33 = ((/* implicit */unsigned int) arr_29 [i_8] [i_8]);
                        var_34 = ((/* implicit */unsigned char) (+(arr_36 [i_14 - 1])));
                    }
                } 
            } 
            arr_55 [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_35 [i_13] [(signed char)6] [i_8]));
        }
        var_35 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_8] [(unsigned short)0] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)7]))))) : (((/* implicit */int) arr_41 [i_8] [i_8]))));
        var_36 *= ((/* implicit */unsigned char) ((arr_48 [i_8]) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_8] [(_Bool)1])) * (((/* implicit */int) arr_29 [i_8] [(unsigned short)22]))))) : (3268900284U)));
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        for (signed char i_17 = 3; i_17 < 19; i_17 += 4) 
        {
            for (int i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                {
                    arr_62 [i_16] [(unsigned short)6] [i_18] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_41 [(_Bool)1] [(signed char)13]))) ? (min((arr_56 [(signed char)17]), (((/* implicit */int) (unsigned short)7590)))) : (-522560404)))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)188))))))) : (max((((/* implicit */unsigned long long int) arr_58 [i_16] [i_17 + 1] [(_Bool)1])), ((-(var_16)))))));
                    var_37 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((_Bool) 2509268116U)) ? (min((((/* implicit */unsigned long long int) arr_36 [7])), (arr_38 [i_18] [i_16] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_16]))))))));
                }
            } 
        } 
    } 
    var_38 |= ((/* implicit */unsigned int) ((short) var_9));
}
