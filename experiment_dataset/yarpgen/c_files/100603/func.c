/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100603
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
    var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_6)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 1593519160)) ? (((/* implicit */int) (signed char)0)) : (-63378390)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)15)), (var_1)));
        arr_3 [i_0] [7] = ((((/* implicit */long long int) (~(((arr_1 [i_0]) | (arr_1 [i_0])))))) ^ ((((!(((/* implicit */_Bool) (unsigned short)15156)))) ? (max((((/* implicit */long long int) 2535336499U)), (arr_0 [i_0]))) : (((/* implicit */long long int) arr_1 [i_0])))));
        var_15 *= ((/* implicit */short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))));
        var_18 = arr_7 [i_1] [i_1];
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */int) (~(max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)103)) >> (((((/* implicit */int) (unsigned char)56)) - (36)))))), ((((_Bool)1) ? (arr_0 [5U]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2])))))))));
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (12518688486888726864ULL)))) ? (((arr_10 [6ULL] [i_2 - 2] [i_2]) ? (((/* implicit */int) (short)995)) : (((/* implicit */int) arr_8 [i_1] [4U])))) : (((/* implicit */int) arr_7 [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((+((~(arr_6 [i_1] [i_1])))))));
            arr_13 [i_1] = ((/* implicit */int) var_10);
        }
        for (int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            arr_16 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)65526);
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 22)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (var_2)))))) ? (((/* implicit */long long int) min((((arr_14 [i_3] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))))), (((arr_11 [i_1] [i_1] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3])))))))) : (arr_0 [i_1])));
            arr_18 [8U] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_1])) & (arr_0 [i_1])))))) ? (((min((63378389), (((/* implicit */int) var_4)))) + ((+(((/* implicit */int) arr_15 [2ULL] [3ULL])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)6)))))));
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_9 [i_3 - 3] [i_3 - 3])))) ? (max((((/* implicit */unsigned long long int) (short)-24876)), (arr_9 [i_3 - 3] [i_3 - 3]))) : (arr_9 [i_3 - 1] [7ULL])));
            arr_20 [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (var_5) : (-63378369)))) : (arr_11 [i_1] [i_1] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [3])))));
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((int) arr_4 [i_1])), ((+(((/* implicit */int) arr_4 [i_1])))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_23 [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_4]);
        arr_24 [i_4] = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 7; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_33 [i_5] [2] [i_5] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -2064760555)) : (((((/* implicit */_Bool) arr_30 [i_4] [(unsigned short)0] [i_5] [i_6])) ? (11679983005859877209ULL) : (2428098666926183161ULL))));
                    var_21 = ((/* implicit */int) 2792908511U);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3072))))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_32 [i_5]))) : (((((/* implicit */_Bool) arr_32 [i_5])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_34 [i_5] [i_6] [i_6] = ((/* implicit */short) ((unsigned int) var_3));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_41 [i_4] [(short)4] [(short)4] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_47 [i_9] [i_9] [i_4] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (arr_14 [4ULL] [4ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (arr_39 [i_4] [(unsigned short)9] [i_7 - 1] [i_4])));
                                arr_48 [i_10] = ((/* implicit */unsigned int) var_7);
                                arr_49 [i_8] [i_8] [2] [i_8] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_8] [i_8] [i_8])) ^ (18446744073709551607ULL)))) ? ((~(69269232549888ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_7] [i_7])))))));
                                arr_50 [i_4] [i_7 + 1] [i_8] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) 3261792495U);
                            }
                        } 
                    } 
                    arr_51 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [(unsigned short)2] [i_7]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_7]))) : (arr_45 [(_Bool)1] [3U] [3U] [i_7 + 1] [3U])))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 287104476244869120ULL)))))) : ((~(var_0))))), (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned short) (short)24876))))))))));
    var_25 = var_8;
}
