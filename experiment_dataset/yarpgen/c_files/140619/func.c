/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140619
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = var_10;
        var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [14LL]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((arr_5 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : ((~(((/* implicit */int) arr_0 [i_1 + 3])))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_1]))))) % (arr_1 [i_1] [i_1])));
    }
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5462016591081584352LL))))) : (((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) (-((~(1447314074732868605LL)))));
                        var_17 = arr_0 [i_2];
                    }
                } 
            } 
        } 
        arr_15 [i_2] [i_2] &= (~(13786840183290129702ULL));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_6))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    arr_27 [6LL] [i_6] [i_6] [i_6] [i_6] [6ULL] |= ((/* implicit */signed char) arr_22 [8LL]);
                    var_19 = ((/* implicit */long long int) (~(var_3)));
                    arr_28 [i_6] [i_6] [i_7] [i_7] [i_6] [i_9 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_17 [i_6]) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                }
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 5462016591081584352LL)))));
                arr_29 [i_6] [i_6] [i_8] = var_8;
                arr_30 [(_Bool)1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_6]))));
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) (~((~(arr_1 [i_7] [i_8])))));
                    arr_34 [i_6] [i_7] [i_7] [i_6] = arr_16 [i_7] [i_8];
                    var_22 = var_8;
                }
                for (signed char i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_24 [i_6] [10] [i_6] [10]))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_23 [i_6] [i_6] [i_8] [i_11]) ? (((/* implicit */int) (signed char)-111)) : (206702156)))) == (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_2)))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (unsigned char)0))));
                    arr_37 [i_8] [6ULL] &= ((/* implicit */_Bool) arr_33 [i_11] [i_6] [4ULL] [i_6]);
                }
                for (signed char i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned int) var_10);
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_18 [(signed char)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))))));
                        arr_44 [4LL] [i_7] [i_8] [i_6] [i_12] [i_13] = ((/* implicit */unsigned char) arr_17 [i_6]);
                    }
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_31 [6LL])) & (arr_26 [i_6] [i_8] [i_8] [14ULL] [(unsigned short)4])));
                        arr_47 [i_6] [i_6] [i_6] [i_6] [i_14] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -5226814620677115460LL)) ? (3092111988622154303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) arr_35 [i_6] [i_7] [i_6] [i_7]);
                    arr_48 [i_6] [i_6] [i_8] [(unsigned char)15] [i_8] [i_6] = arr_43 [i_6] [i_6] [i_6] [i_6] [i_6];
                }
            }
            var_30 = ((/* implicit */long long int) arr_45 [i_6] [i_6] [i_6] [i_6] [(signed char)11]);
            arr_49 [i_6] [i_6] = ((/* implicit */unsigned char) ((signed char) arr_41 [i_6] [i_6] [i_6]));
        }
        arr_50 [i_6] [(unsigned char)4] |= ((/* implicit */unsigned short) var_5);
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_6] [i_15] [i_6] [i_15])) ? (((/* implicit */int) ((var_2) < (arr_53 [i_17] [i_16] [i_16] [i_6])))) : (((/* implicit */int) arr_46 [i_6] [i_6] [8ULL] [i_6] [i_6] [i_6] [i_6]))));
                        var_32 ^= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_6))) <= ((~(((/* implicit */int) (signed char)-105))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) <= (8329145674939632332LL))))));
                        arr_60 [i_6] [i_16] [i_16] [i_6] [i_17] = ((/* implicit */_Bool) arr_18 [i_6]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) var_0);
                            var_35 &= ((/* implicit */long long int) arr_19 [i_6]);
                        }
                        arr_68 [i_6] [(signed char)1] [i_16] [10LL] = ((/* implicit */long long int) (-((-(2104936263)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_20 = 2; i_20 < 15; i_20 += 1) 
                    {
                        var_36 ^= ((/* implicit */signed char) arr_17 [i_16]);
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) var_9);
                            arr_75 [i_6] = ((/* implicit */signed char) (+(arr_1 [i_20 + 1] [i_20 + 1])));
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 13; i_22 += 1) 
                        {
                            var_38 = var_0;
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_43 [i_15] [i_22 + 1] [i_22] [i_22] [i_22])))))));
                            var_40 = ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_62 [i_6] [i_6] [i_16] [i_15] [i_6] [i_6])) ? (((/* implicit */int) arr_46 [i_22] [i_22] [i_16] [i_22] [i_22] [i_20 - 1] [(signed char)15])) : (((/* implicit */int) arr_40 [i_6])))));
                        }
                    }
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                        {
                            var_41 = ((/* implicit */_Bool) arr_0 [i_6]);
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) 2104936268))) < (var_2))))));
                            var_43 -= ((/* implicit */long long int) (!(arr_46 [i_24] [i_24] [i_23] [i_16] [i_15] [i_6] [i_6])));
                            var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) >> (((arr_66 [i_15] [i_15] [i_16] [i_23] [i_23]) - (1314573348802711488ULL)))))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_63 [i_15] [i_23] [i_24]))));
                        }
                        arr_83 [i_6] [i_6] [i_16] [(_Bool)1] = ((/* implicit */int) var_4);
                    }
                }
            } 
        } 
    }
}
