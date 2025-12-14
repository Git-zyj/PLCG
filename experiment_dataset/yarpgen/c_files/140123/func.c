/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140123
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) 4294967295U);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_1 + 2] [i_1 + 2]))) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */int) (short)15)) == (((/* implicit */int) arr_7 [i_2 + 2] [i_1 - 2] [i_1 + 2] [i_1 + 2])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_2] [i_2 + 3] [i_2])) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_1 + 2] [i_1 - 2])) : (979296127)));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) arr_5 [i_1 - 2]))));
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) arr_11 [i_1 + 2] [i_2] [i_3]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0])) ? ((~(((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 + 2])))) : ((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 1] [i_4]))))));
                        var_20 = -1;
                        var_21 = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) ((short) arr_1 [i_0] [21LL]))), (min((((/* implicit */unsigned int) 979296127)), (89784601U))))));
                        var_22 = ((/* implicit */_Bool) ((arr_5 [i_0]) - (-1)));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_0] [i_2] [(short)10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [(unsigned char)10] [(unsigned char)1] [i_2 + 1] [i_1 + 2])), (15411579595123003835ULL)))) ? (min((15411579595123003857ULL), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_5])))) : (15411579595123003835ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [9U] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_13 [i_1 + 2] [(signed char)1] [i_2 + 2] [i_2 + 2])) : (arr_11 [(unsigned short)14] [(short)5] [i_2 + 4]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_13 [i_6 - 1] [i_1 + 1] [i_1 + 1] [i_2 + 1]))));
                            arr_21 [i_5 - 1] [i_1] [i_1] [i_5 - 1] [i_6 - 2] [(unsigned short)4] [(_Bool)1] = ((unsigned short) arr_14 [i_0] [i_1 + 2] [i_5 - 1] [i_6 + 1]);
                            var_24 = ((/* implicit */int) ((short) (+(-4451593099708501019LL))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)168))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_7]))) : (((unsigned int) arr_10 [19LL] [i_5] [7])))));
                            arr_25 [i_0] [i_1 - 1] [i_0] [i_5] [i_7] = ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-32234)) : (((/* implicit */int) (short)31706)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [(short)19] [i_0] [i_1] [i_0] = ((((979296127) / (arr_5 [i_5 - 1]))) < (((((/* implicit */_Bool) arr_5 [i_5 - 1])) ? (arr_5 [i_5 - 1]) : (arr_5 [i_5 - 1]))));
                            var_26 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (15411579595123003855ULL)))) ? (((/* implicit */int) ((unsigned short) (signed char)-120))) : (((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1]))))));
                            var_27 = ((/* implicit */signed char) ((min((arr_19 [i_1 + 1] [i_1 - 1] [i_1] [i_2 + 2] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1 + 2] [i_1])))) | (((unsigned long long int) arr_11 [i_1 + 2] [i_1 + 2] [i_2]))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [(short)3] [i_2] [i_2]))) : (arr_4 [i_2] [i_0])))));
                    var_29 = (~(((/* implicit */int) arr_23 [i_2])));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) max((arr_6 [i_10]), (arr_6 [i_9])))) / (((arr_6 [i_11]) ? (((/* implicit */int) arr_6 [i_9])) : (((/* implicit */int) arr_6 [i_9])))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 4; i_12 < 20; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_44 [18U] [i_10] = ((/* implicit */signed char) ((unsigned int) (-(((((/* implicit */_Bool) 3035164478586547767ULL)) ? (arr_42 [i_13] [(unsigned char)10] [i_11] [(short)21] [i_10] [i_9] [i_9]) : (((/* implicit */unsigned int) 979296127)))))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)10203)))))) >> (((((((/* implicit */_Bool) 7183516511128336287LL)) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) (short)10203)))) ^ ((+(((/* implicit */int) arr_35 [i_12]))))))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30425)) <= (((arr_35 [5LL]) ? (((((/* implicit */_Bool) (short)12149)) ? (((/* implicit */int) (signed char)0)) : (-8))) : (((/* implicit */int) arr_6 [i_12 - 4]))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((arr_24 [i_9] [i_9] [i_10] [i_10] [i_11]), (((/* implicit */long long int) arr_23 [i_9]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) * (max((1527552152116928930ULL), (((/* implicit */unsigned long long int) arr_35 [i_9])))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)8))))))));
                }
            } 
        } 
        arr_45 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_7 [i_9] [8U] [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9] [i_9]))) : (max((((/* implicit */unsigned long long int) ((_Bool) arr_28 [i_9] [8U] [i_9]))), ((~(15411579595123003835ULL)))))));
    }
    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        var_34 = ((/* implicit */short) ((_Bool) ((arr_36 [i_14]) || ((!(((/* implicit */_Bool) (short)12149)))))));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (long long int i_17 = 1; i_17 < 15; i_17 += 2) 
                {
                    {
                        arr_56 [i_17] [i_17] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_38 [i_14])))) / (((/* implicit */int) min((((/* implicit */signed char) arr_38 [i_16])), ((signed char)6))))));
                        var_35 ^= ((/* implicit */signed char) (~((~(arr_24 [i_14] [i_15] [i_14] [i_17] [i_17 + 1])))));
                        var_36 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_20 [(unsigned char)14] [i_15] [i_15] [i_16] [i_17 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 979296127)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_47 [(unsigned short)15]))))))) < (((/* implicit */long long int) ((unsigned int) arr_13 [i_17 + 1] [i_17 - 1] [i_14] [i_17])))));
                        var_37 = (signed char)120;
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7183516511128336284LL)) ? (max((((/* implicit */long long int) 979296132)), (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_14 [i_14] [i_14] [i_14] [i_14])), (arr_47 [i_14])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_14] [i_14] [i_14]))) : (arr_19 [i_14] [i_14] [i_14] [i_14] [(_Bool)1])));
        var_39 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(arr_52 [i_14] [i_14] [5LL] [i_14])))) ? (18446744073709551615ULL) : (arr_19 [i_14] [i_14] [i_14] [i_14] [i_14]))), (((/* implicit */unsigned long long int) (~(-251332244))))));
        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_14] [i_14] [i_14])) >= (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)12142))))))));
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        arr_61 [i_18] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_50 [(short)9] [(short)9] [(short)9]))));
        arr_62 [i_18] [i_18] = ((/* implicit */long long int) -251332244);
    }
    var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((long long int) var_5)), (((/* implicit */long long int) ((short) 3279430334U))))))));
}
