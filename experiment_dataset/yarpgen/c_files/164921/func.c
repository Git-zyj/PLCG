/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164921
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_8)));
                    arr_9 [i_0] = ((/* implicit */long long int) (unsigned short)17839);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 2]))) : (var_11)));
                    arr_12 [i_0] [i_0] [i_0] = ((unsigned short) arr_1 [i_0]);
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) << ((((+(((/* implicit */int) var_2)))) - (87)))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8966942555889100397LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-101))));
                }
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_9), ((unsigned short)36672))))) + (((arr_13 [i_5] [i_5] [i_5]) + (var_4)))))));
                            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (signed char)-6))));
                            var_17 = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6]))))))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                arr_34 [i_6] [i_7] = ((/* implicit */unsigned short) var_8);
                                arr_35 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_31 [i_6] [i_9]))))) && (((var_11) == (var_11)))))), (((((/* implicit */int) arr_15 [i_9] [i_9] [i_7] [i_9 - 1])) + (((((/* implicit */int) (signed char)-36)) % (((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */signed char) (+(((long long int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9))))))));
                }
            } 
        } 
        arr_36 [i_6] = ((/* implicit */signed char) var_11);
        var_20 = ((/* implicit */unsigned short) ((long long int) ((long long int) max((var_11), (((/* implicit */long long int) arr_1 [i_6]))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_46 [i_6] [i_11] [i_6] = max((arr_33 [i_6] [i_11] [i_6] [i_11] [i_6] [i_6 + 1] [i_11]), (arr_38 [i_6 + 1]));
                        var_21 = ((/* implicit */long long int) arr_41 [i_6]);
                        arr_47 [i_6] [i_12] [i_13] = ((/* implicit */unsigned short) ((min((arr_26 [i_12] [i_6 + 1] [i_6] [i_6]), (((/* implicit */long long int) arr_1 [i_13])))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) - (var_8)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        for (signed char i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned short) var_11);
                                var_23 = ((/* implicit */signed char) var_1);
                                arr_52 [i_6] [i_6] [i_6] [i_12] [i_12] [i_14] [i_14] = ((/* implicit */long long int) ((signed char) arr_44 [i_15 + 4] [i_6] [i_12] [i_6] [i_6] [i_6]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_16] [i_16])) ? (arr_16 [i_16] [i_16] [i_16] [i_16]) : (arr_16 [i_16] [i_16] [i_16] [i_16])))) ? (((((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_16] [i_16])) ? (arr_16 [i_16] [i_16] [i_16] [i_16]) : (arr_16 [i_16] [i_16] [i_16] [i_16]))) : (min((arr_16 [i_16] [i_16] [i_16] [i_16]), (arr_16 [i_16] [i_16] [i_16] [i_16])))));
        var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 6519945057070167176LL)) || (((/* implicit */_Bool) (signed char)5))))) == (((/* implicit */int) var_9)))))) | (min((576460752303423487LL), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) - (var_1))))));
    }
    for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))) % (((((/* implicit */_Bool) 6519945057070167176LL)) ? (((arr_13 [i_17] [i_17] [i_17]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)85))) / (-6519945057070167177LL)));
        var_28 &= ((/* implicit */signed char) max((((min((5385555777038013072LL), (9223372036854775796LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36652))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_4))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_44 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))))));
    }
}
