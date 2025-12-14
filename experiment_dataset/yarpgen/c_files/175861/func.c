/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175861
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
    var_20 = ((/* implicit */int) var_15);
    var_21 = ((((((((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))))) ? (((/* implicit */int) var_17)) : (((2147483647) ^ (((/* implicit */int) var_4)))))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -14503891)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((var_0) - (((/* implicit */unsigned long long int) 4294967295U)))))) - (18446744073709551592ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (14503889) : (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [3])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (-21))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_10 [i_0] [12U] |= ((long long int) ((unsigned int) 985647719617659183LL));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] = ((((/* implicit */int) arr_6 [i_2] [i_0] [i_4])) ^ (((/* implicit */int) (short)7)));
                            arr_18 [i_0] [(_Bool)1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((int) arr_9 [i_0 - 1]));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0])) ? (2147483646) : (((/* implicit */int) var_9))))) ? (arr_3 [i_0 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_3] [i_0] [i_0])))))));
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) arr_9 [i_0 - 1]);
                        }
                    } 
                } 
            } 
            arr_20 [i_0] = ((/* implicit */short) ((arr_16 [i_0] [i_0 + 1] [i_0] [14ULL] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_6 [i_1] [i_0] [i_0 - 1]))));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1])))));
            arr_23 [i_0 - 1] [i_0] = ((/* implicit */short) ((unsigned char) -3802085890156207860LL));
        }
        for (short i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            arr_26 [i_0] [11] [(short)3] = ((/* implicit */int) ((arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_6 - 1]) + (((((/* implicit */_Bool) var_8)) ? (72057585447993344LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [10] [i_0] [i_0])))))));
            var_26 = ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775793LL))))))));
            arr_27 [4U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0 + 1])) ? (arr_22 [i_6 - 1]) : (arr_22 [i_6 - 2])));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (4294967266U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))));
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_8]);
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(arr_22 [i_7]))))));
                            arr_40 [i_0] [i_0] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_9 + 1] [(_Bool)1] [(short)1] [i_9 + 1] [i_7]))));
                        }
                    } 
                } 
                arr_41 [i_0 - 1] [i_0] [i_8] = arr_39 [i_0 - 1] [i_7] [i_0];
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_30 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_0 + 1] [i_0] [i_7] [i_7] [i_11] [4])) - (((/* implicit */int) arr_36 [i_0 + 1] [(unsigned char)14] [(signed char)3] [6] [i_11] [i_11]))));
                arr_46 [14U] [i_7] [(short)0] &= arr_15 [i_7] [i_0 - 1] [i_0];
                var_31 = ((/* implicit */long long int) (-(arr_44 [(short)4] [i_11] [i_11] [i_0 - 1])));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            arr_52 [(short)1] [i_7] [i_0] [i_7] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */int) arr_37 [i_0] [8LL] [i_11] [i_12] [i_13])) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((arr_14 [i_7] [i_11] [i_7] [(short)2]) > (((/* implicit */long long int) 3481454023U)))))));
                            arr_53 [i_0] [i_0] [2ULL] [i_0] [i_12] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) 2881669293213702979LL))));
                            var_32 += ((/* implicit */unsigned char) var_14);
                            var_33 *= ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0 + 1]));
                        }
                    } 
                } 
                arr_54 [i_0] [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_7] [i_0])) ^ (((/* implicit */int) arr_37 [i_0 + 1] [i_0 - 1] [i_7] [i_7] [i_11]))));
            }
            for (unsigned int i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_0 + 1])) % (((/* implicit */int) arr_34 [i_0] [i_0 - 1]))));
                arr_57 [i_14 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 907081479U);
            }
            arr_58 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_7] [i_0] [i_7] [i_0] [i_0 + 1])) & (((/* implicit */int) arr_35 [i_0 - 1] [i_0] [i_7] [i_7] [i_7]))));
        }
    }
    /* vectorizable */
    for (long long int i_15 = 1; i_15 < 17; i_15 += 2) 
    {
        var_35 |= ((/* implicit */long long int) 4294967295U);
        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_59 [i_15 - 1]))));
        arr_63 [i_15] = ((/* implicit */long long int) ((arr_60 [i_15] [i_15]) | (arr_60 [i_15] [i_15])));
    }
}
