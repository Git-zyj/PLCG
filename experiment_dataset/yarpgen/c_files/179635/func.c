/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179635
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0]))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12505))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)53019)) > (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))) : (((/* implicit */int) ((364965847083644651ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_14 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_2 + 3] [i_1] [i_3])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [10ULL]))));
                var_17 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_2]))) : (arr_11 [i_0] [i_0] [i_1] [i_0]));
            }
        }
        var_18 = ((((/* implicit */_Bool) (unsigned short)5076)) ? (max((((/* implicit */unsigned long long int) (unsigned short)1795)), (364965847083644651ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) (unsigned char)0);
        arr_16 [(_Bool)1] = (short)-11991;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_20 [i_5] [i_6] [i_7]) ? (((/* implicit */int) (short)-16823)) : (arr_7 [i_5] [i_6 + 1] [i_6]))))));
                    arr_24 [i_7] [i_6] [i_5] = ((unsigned long long int) (short)11990);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_6 - 1] [i_7 + 1] [i_6 - 1]));
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_8] [i_5] [i_6] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) 
    {
        var_22 = ((/* implicit */int) min((max((((/* implicit */unsigned short) ((-2147483640) > (((/* implicit */int) arr_0 [2ULL]))))), (max(((unsigned short)60617), (((/* implicit */unsigned short) (unsigned char)146)))))), (arr_5 [(_Bool)1])));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (long long int i_12 = 4; i_12 < 12; i_12 += 2) 
            {
                for (short i_13 = 3; i_13 < 13; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_14 [i_10])) ? (((/* implicit */int) arr_20 [i_12] [i_12] [i_12])) : ((~(((/* implicit */int) (unsigned char)232))))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_30 [i_10]))));
                            arr_42 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_19 [i_10 - 1])))));
                            var_25 = arr_12 [i_13];
                        }
                        var_26 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_2 [i_13] [i_13])))), ((+(((/* implicit */int) (unsigned char)0))))));
                        var_27 = max((((/* implicit */long long int) var_2)), (arr_38 [i_10] [i_10] [i_12] [(short)7] [i_12]));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_0 [0LL])))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (long long int i_16 = 3; i_16 < 11; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    {
                        arr_50 [i_10] [i_16] [(short)12] [i_17] [1LL] [7LL] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) -9223372036854775799LL)))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_45 [i_10] [i_15] [i_16 + 1])), (((unsigned long long int) var_3))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            var_30 += ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_10 - 2] [6ULL] [i_16 - 1])) ? ((-(arr_52 [i_10 - 2] [12] [i_16 - 2]))) : (arr_52 [i_10 - 2] [11] [i_16 + 2])));
                            arr_53 [i_18] [i_17] [(short)13] [4ULL] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((8391066792138874331ULL), (((/* implicit */unsigned long long int) (short)-11982))))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_16 - 2] [i_18] [15ULL]) ? (((/* implicit */int) arr_20 [i_16 + 1] [i_16 + 1] [i_18])) : (((/* implicit */int) (short)6835))))) : (((unsigned long long int) arr_20 [i_16 + 1] [3] [3]))));
                            arr_54 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_16 - 2] [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)12505)) : (((/* implicit */int) (short)11970)))));
                            arr_55 [11] [11] [6ULL] [i_17] [6ULL] [i_17] = ((/* implicit */short) ((((arr_17 [i_15] [i_16 - 2]) > (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) min(((short)29171), ((short)6835)))) ? (arr_45 [i_16 - 1] [i_10 + 1] [i_10 - 1]) : (((/* implicit */long long int) (~(3471161314U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_15] [i_17])) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_18] [i_16] [i_15] [(_Bool)1])) > (((/* implicit */int) (short)-11971))))) : (((((/* implicit */_Bool) arr_49 [i_18] [i_15] [i_16])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)11955)))))))));
                            var_31 = arr_31 [i_17] [i_16 - 2] [i_15];
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_2);
                            var_33 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                            var_34 = ((/* implicit */long long int) (+(max((7027968792264257662ULL), (9533997413010498995ULL)))));
                            var_35 = var_1;
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 2) 
                        {
                            var_36 = ((unsigned long long int) ((((/* implicit */int) (short)-31329)) > (((/* implicit */int) (_Bool)1))));
                            var_37 = ((/* implicit */short) (unsigned short)53019);
                        }
                        arr_61 [i_17] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-735947724)))), (((((/* implicit */_Bool) arr_0 [i_15])) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) var_3)))))))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11959)))))));
    var_39 = ((/* implicit */long long int) max((var_39), (var_3)));
}
