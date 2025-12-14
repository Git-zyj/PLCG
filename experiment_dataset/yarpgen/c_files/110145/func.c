/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110145
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned short) ((var_10) == (((/* implicit */long long int) (~(((/* implicit */int) (short)32767)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(_Bool)1] [i_0] [i_1]))));
            var_13 |= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1]))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_0 - 1] [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)161)) - (128)))))) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) 274877906943LL)) : (arr_4 [i_2] [i_0] [4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_2] [i_0]) < (var_2)))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_14 = (~(((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_18 [i_0 - 2] [i_0 - 2] [i_3] [i_0 - 2] [i_5] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])) ? (arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])));
                            arr_19 [(unsigned char)2] [i_4] [i_4] [i_2] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (arr_11 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)34332))))) : (arr_2 [i_4 - 1] [i_0 - 3])));
                            arr_20 [i_0] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) (~(((arr_12 [i_0] [i_0] [i_0] [i_4]) & (((/* implicit */int) arr_16 [i_0] [9ULL] [i_2] [i_3] [(unsigned short)12] [i_5]))))));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] [i_0] = (-(((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32790))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned char i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_6] [i_2] [(_Bool)0] [i_8] = (-(((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 2])));
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)108)) ? (-274877906943LL) : (arr_15 [i_2] [i_7 - 1])))) >= (((unsigned long long int) arr_10 [(unsigned short)10] [i_7] [i_2] [8]))));
                            var_16 &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8]))) >= (arr_4 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_12 [i_2] [i_6] [(signed char)4] [i_2])) : (((unsigned long long int) arr_16 [i_8] [i_7] [i_6] [i_2] [i_2] [i_0]))));
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_0] [(signed char)10]))));
                        }
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -274877906944LL)) ? (-274877906964LL) : (arr_11 [(signed char)11]))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_9 = 3; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_9 + 1] [i_9 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9] [11ULL])) && (((/* implicit */_Bool) -1966337017093817114LL)))))) : (arr_7 [i_9 - 2] [(_Bool)1] [10LL])));
        var_20 -= ((((/* implicit */_Bool) (unsigned char)162)) ? (arr_4 [i_9 - 3] [i_9 + 3] [i_9 - 1]) : (arr_4 [i_9] [i_9 - 2] [i_9 + 1]));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 3) 
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 274877906960LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30725)))))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)52)), (((18446744073709551615ULL) << (((8907150981890181254LL) - (8907150981890181247LL))))))) : (18446744073709551615ULL)));
                            var_22 -= ((/* implicit */unsigned char) ((_Bool) ((min((arr_7 [i_10] [i_11] [i_13]), (((/* implicit */long long int) arr_13 [i_10] [i_11] [i_11] [i_12] [i_10] [(_Bool)0])))) % (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_10] [i_10] [i_13 + 2] [i_13 - 2]))))));
                            arr_44 [i_11] [i_11] [i_11] = ((((/* implicit */int) arr_36 [i_13] [(_Bool)1] [i_10])) >> (((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)31)), (arr_32 [i_10] [i_11])))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)14851)), (var_5))))))) - (6333861312636834616LL))));
                            var_23 |= arr_16 [i_10] [i_11] [i_12] [i_13] [i_11] [i_10];
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_4))));
                var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_11])) || (((/* implicit */_Bool) (unsigned char)74)))) ? (((/* implicit */int) (!(var_4)))) : (((((/* implicit */_Bool) min((arr_7 [6ULL] [i_10] [i_11]), (((/* implicit */long long int) arr_6 [i_10]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (unsigned char)75))))));
            }
        } 
    } 
}
