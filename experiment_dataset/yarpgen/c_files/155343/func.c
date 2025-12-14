/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155343
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */long long int) var_1)) | (((((/* implicit */long long int) 1489223308)) % (9223372036854775807LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_2] [(unsigned short)16])) ? (arr_11 [i_0 + 1] [i_2] [i_0]) : (var_0)));
                                arr_12 [i_0] [(short)12] [i_1 + 1] [i_2] [i_3] [i_2] &= ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) arr_4 [i_2] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (+((-(var_2)))));
                }
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_19 = (!(((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_9)))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) (-(1489223308))));
                }
                var_20 = ((/* implicit */long long int) arr_2 [(unsigned short)8] [15LL] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) (short)-32746)))))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        for (long long int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((-7283496773155719475LL) != ((-9223372036854775807LL - 1LL)))))));
                var_23 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) max((9223372036854775807LL), (-7283496773155719475LL))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (((!(arr_22 [i_7 - 1]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-1193))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_17 [i_7 + 1] [i_8 + 1])))) ? (((max((arr_20 [i_9] [i_7]), (((/* implicit */int) arr_22 [i_10])))) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6])))))))));
                                var_26 ^= ((/* implicit */unsigned char) ((unsigned short) (+(var_1))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 + 1]))))), (arr_29 [i_8 + 3] [i_8 + 2] [(unsigned char)20] [i_7 + 1] [i_7])));
                    arr_30 [i_8] [5U] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7283496773155719486LL)) ? (arr_28 [i_8] [i_6] [i_7] [i_6] [i_8 - 1]) : (arr_28 [i_8] [i_8] [9] [19LL] [i_8 - 1])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            {
                arr_35 [(unsigned char)7] = (((!(((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_12] [i_11])))) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_18 [i_12] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_11] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (133693440) : (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11] [i_11]))))) && (((((/* implicit */_Bool) arr_16 [13ULL] [i_11])) && (((/* implicit */_Bool) var_7))))))) : (((int) ((long long int) arr_13 [18U] [i_12] [i_12])))));
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) arr_9 [i_12] [i_12] [i_12] [1]);
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((66571993088LL) << (((((((/* implicit */int) arr_44 [18LL] [i_13 + 1] [i_13] [i_13 - 1] [i_12] [i_11])) + (1857))) - (25)))))) ? (((/* implicit */long long int) 1190018204)) : (-66571993090LL))))));
                                arr_45 [i_13] [i_11] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_11] [12LL] [i_14] [i_15])) > (max((((/* implicit */long long int) 268435456)), ((-9223372036854775807LL - 1LL))))))) + (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) == (((/* implicit */int) max(((short)32751), (((/* implicit */short) arr_22 [i_14]))))))))));
                                var_31 |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_41 [i_13 - 1] [i_13 - 1] [i_14 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13 + 1] [i_14] [i_14 - 2]))) : (18446744073709551615ULL))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((-84006878) + (2147483647))) >> (((((/* implicit */int) (signed char)-123)) + (145))))))));
                            }
                        } 
                    } 
                    var_33 = (~(var_1));
                }
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    arr_48 [i_16] [i_16] [7] = ((/* implicit */unsigned int) var_9);
                    arr_49 [6] [(_Bool)1] [7LL] [i_12] = ((/* implicit */long long int) arr_3 [(signed char)6] [7LL]);
                }
            }
        } 
    } 
}
