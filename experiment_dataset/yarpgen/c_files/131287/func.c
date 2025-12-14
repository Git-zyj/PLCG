/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131287
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
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_3), (var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned char)0] [i_0] = var_18;
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((((/* implicit */_Bool) 4294967292U)) || (((/* implicit */_Bool) var_11)))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((11495667479337771402ULL), (min((11495667479337771392ULL), (((/* implicit */unsigned long long int) min((arr_10 [4LL] [i_2] [(short)6] [i_3]), (((/* implicit */long long int) var_4)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] = ((signed char) max((6951076594371780204ULL), (11495667479337771401ULL)));
                                arr_27 [i_0] [(short)15] [(short)15] [i_6] [i_0] [(short)15] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_22 [i_0 - 1] [i_1] [i_5] [i_0 + 2] [i_0] [8U]))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [15U])))), (((/* implicit */int) (unsigned short)65535)))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) | (var_0))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_30 [i_0])), (var_3)))))))), (var_3)));
                        arr_34 [i_0] [(_Bool)1] [i_8 - 1] [i_9] = max((((/* implicit */long long int) (+(-601633354)))), (min((((/* implicit */long long int) ((_Bool) var_18))), (var_16))));
                    }
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    var_24 = var_16;
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                arr_42 [i_0] [(_Bool)1] [i_1 + 2] [i_10] [i_11] [9U] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 601633353)) ? (8936830510563328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2205)))));
                                var_25 *= ((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_12] [i_1])), (arr_10 [i_0] [i_1] [i_11] [i_12])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (long long int i_14 = 2; i_14 < 18; i_14 += 1) 
                        {
                            {
                                arr_47 [i_0] [i_1] [i_10 + 2] [i_0] [i_0] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_41 [i_10] [(unsigned short)15] [i_10] [i_1] [i_1])) ? (((/* implicit */long long int) arr_36 [i_0])) : (-1582585135077713827LL))), (((/* implicit */long long int) (+(var_14)))))), (max((((/* implicit */long long int) arr_2 [i_0])), (arr_31 [i_0] [i_0 + 3] [i_0])))));
                                arr_48 [i_10] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]);
                                var_26 = ((/* implicit */_Bool) (unsigned short)65516);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_16 [i_0] [i_0])) / (-601633364))), (((/* implicit */int) (signed char)-1))));
                        var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)0)) & (((/* implicit */int) var_15)))), (arr_21 [i_0] [i_0] [i_10] [i_15] [i_0] [i_15])))), (((min((((/* implicit */unsigned long long int) arr_7 [3LL] [3LL] [10LL] [19ULL])), (6951076594371780208ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) (signed char)-10)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            arr_58 [i_0] [i_1] [i_0] [i_16] [3LL] [13LL] = ((/* implicit */unsigned int) ((((686113164) / (arr_9 [i_0] [i_10] [i_10 - 1] [i_0]))) - ((-(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [19ULL] [(unsigned char)3] [19ULL]))))));
                            var_29 = ((/* implicit */signed char) arr_49 [i_10 - 1] [i_10 + 2] [i_1 - 2] [i_0 + 1]);
                        }
                        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_63 [3U] [i_1] [i_10] [i_16] [i_0] = ((/* implicit */unsigned char) ((arr_61 [i_18] [i_0]) <= (((unsigned long long int) arr_35 [i_0] [i_0]))));
                            arr_64 [i_0] [i_1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                            var_30 = ((/* implicit */int) max((var_30), ((+(arr_36 [i_18])))));
                            arr_65 [i_0 + 1] [i_1 - 2] [i_10] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-10))));
                            var_31 -= ((/* implicit */signed char) 6951076594371780203ULL);
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3]))) - (arr_32 [i_0] [(unsigned short)7] [i_10 - 1] [(unsigned short)4] [i_0] [i_10 - 1])));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [6U] [6U])) || (((/* implicit */_Bool) (short)14453))));
                        var_34 = ((/* implicit */unsigned short) -1171345157975703585LL);
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_1] [i_1] [i_1 - 2] [i_0] [i_1] [i_1 - 2]))) - (11495667479337771392ULL)));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 11495667479337771400ULL)) ? (((/* implicit */int) (unsigned short)40659)) : (((/* implicit */int) (signed char)-1))));
                    }
                    for (signed char i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        arr_70 [i_0] [i_0 + 4] [i_0] [i_0 + 4] [(signed char)18] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) 1885698924760002357LL)))) ? (((((/* implicit */_Bool) arr_2 [i_10 + 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_22 [16U] [i_0] [(unsigned short)17] [i_10 + 2] [i_0] [i_20])), (var_16))), (((/* implicit */long long int) arr_40 [5ULL] [i_1] [i_0] [i_1] [16ULL] [(unsigned char)0])))))));
                        arr_71 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        arr_72 [i_0 + 4] [i_1] [i_0] [i_10] [19ULL] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_32 [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 1] [(short)12] [i_1 - 2])) ? (arr_12 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_0]) : (((/* implicit */int) (unsigned short)63841))))));
                        arr_73 [i_0] = ((/* implicit */unsigned long long int) (+((-(arr_10 [i_1] [i_1] [i_1 + 2] [i_0])))));
                    }
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_1))));
}
