/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142515
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 + 1] = ((/* implicit */long long int) arr_5 [i_0] [i_3]);
                                var_18 = ((/* implicit */short) ((unsigned long long int) arr_6 [i_0] [i_4 + 1] [i_1]));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_2])))) ? (arr_9 [i_0] [17] [i_2] [i_2]) : (var_14)));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_21 [14ULL] [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_14 [i_5] [i_2] [i_0] [(short)1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)2]))) : (arr_14 [i_0] [i_1] [(unsigned char)9] [i_2] [i_5])))));
                        arr_22 [i_1] [i_2] [17U] [i_1] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) != (arr_14 [8ULL] [i_1] [i_0] [i_5] [i_1])))) >> (((var_0) - (1264225522))));
                        arr_23 [i_1] [(unsigned short)12] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    }
                }
            } 
        } 
        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65527)) << (((((-1066938103) + (1066938127))) - (21)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [7LL] [i_0] [11U] [i_0])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        for (int i_7 = 2; i_7 < 18; i_7 += 2) 
        {
            {
                arr_29 [9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036854775798LL)) ? (860411151) : (((/* implicit */int) (short)30711)))) == (((((/* implicit */_Bool) (-(arr_30 [i_6] [i_6] [i_8])))) ? (((/* implicit */int) min((((/* implicit */short) var_15)), (arr_31 [i_9] [i_8] [(signed char)2])))) : (((/* implicit */int) arr_25 [16]))))));
                        var_21 -= ((/* implicit */signed char) (short)874);
                    }
                    var_22 += ((/* implicit */long long int) 554690263);
                }
                for (int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_39 [i_11] [i_10] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (2061204636U) : (((/* implicit */unsigned int) 928130123))));
                        arr_40 [i_6] [(_Bool)1] [i_6] [i_6 - 1] = ((/* implicit */int) ((unsigned int) ((int) ((signed char) (signed char)52))));
                        arr_41 [i_6] [i_6 + 1] [i_6 + 1] [i_10] [i_11] |= (+((~(((((/* implicit */int) arr_25 [i_6])) + (var_4))))));
                        var_23 = ((/* implicit */int) var_12);
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((min((1536443108), (((/* implicit */int) (_Bool)0)))) < (min((arr_37 [i_6 - 1] [i_6 - 1] [i_7 - 2] [i_7 + 1]), (arr_37 [i_6 - 1] [i_6 + 1] [i_7 - 1] [i_7 + 3])))));
                }
                for (int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        for (signed char i_14 = 4; i_14 < 19; i_14 += 3) 
                        {
                            {
                                arr_49 [i_14 - 4] [i_13] [i_7 + 2] [i_7 + 2] [i_6] = ((/* implicit */_Bool) min(((-(min((((/* implicit */int) arr_42 [i_7 + 2] [i_7 + 2] [9LL])), (arr_37 [i_6 - 1] [i_7 - 1] [9ULL] [i_14]))))), ((((!(((/* implicit */_Bool) (signed char)40)))) ? (arr_32 [i_6 - 1] [i_7 + 1]) : ((+(((/* implicit */int) var_3))))))));
                                var_25 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)208)), ((unsigned short)33206))))));
                                var_26 ^= ((/* implicit */unsigned int) arr_38 [i_14 - 4] [i_13] [i_7] [i_7]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (max((((((/* implicit */_Bool) 3848290697216LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 732903189)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (arr_27 [i_6] [i_7])))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 8420683331405421531LL)))) ? (((/* implicit */int) arr_38 [i_6 + 1] [1U] [i_6] [i_7])) : (((/* implicit */int) (signed char)120)))))));
                }
                var_28 += ((/* implicit */unsigned short) arr_43 [(signed char)16] [i_7] [i_7 + 1] [3]);
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_4))));
}
