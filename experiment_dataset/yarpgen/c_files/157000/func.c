/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157000
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)52)) ? (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_18))))) : ((~(arr_1 [i_0 - 2]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_12);
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) -1037727397)), (var_14))) & (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_7 [i_1 - 1] [i_0 - 2] [(unsigned short)6])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [(short)0] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) 0LL);
                        var_24 *= ((/* implicit */_Bool) var_8);
                        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)11719))));
                        var_26 = (~(((long long int) ((1558229707U) * (1514913166U)))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_15)), (var_0))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11735))) : (var_14))) != (var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned char i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) ((unsigned char) arr_18 [i_5 + 4]));
                    arr_21 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)103))))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_19 [i_4] [i_5 + 3] [i_6] [i_6]))) : (max((arr_19 [i_6] [5ULL] [(short)2] [(unsigned char)1]), (arr_19 [i_4] [i_4] [(short)6] [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned long long int) arr_15 [i_7]);
                                var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((var_14), (((/* implicit */long long int) var_17)))) : (max((((/* implicit */long long int) (unsigned short)65525)), (8535582819169286124LL)))))) | ((~(max((((/* implicit */unsigned long long int) -1037727397)), (8126367488804448800ULL)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) (((~(((unsigned int) var_13)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((min((1037727402), (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_5] [i_6])))) < (((/* implicit */int) min(((unsigned short)21385), (((/* implicit */unsigned short) var_11)))))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(1037727397)))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)192)) >> (((arr_15 [(unsigned char)4]) + (1122946341057338934LL))))) == (-1037727397)))) : (min((((/* implicit */int) min(((unsigned short)63345), (((/* implicit */unsigned short) var_18))))), ((+(((/* implicit */int) (unsigned short)28992))))))));
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_4] [i_5] [i_9] [i_5] [i_5 + 2] [i_4])) < ((+(1037727400)))));
                        var_34 += ((/* implicit */int) (short)12869);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_35 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-12877), ((short)17680)))) ? (var_7) : (((/* implicit */long long int) ((752769281) ^ (((/* implicit */int) arr_29 [i_4] [9ULL] [i_4] [i_10] [i_10] [i_11])))))))) <= (arr_30 [i_4] [9ULL] [i_4] [i_4] [i_5] [i_5 + 4] [i_10]));
                            var_36 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (15642947488282029752ULL) : (((/* implicit */unsigned long long int) -1683734379))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11735))) : (arr_19 [i_4] [i_5] [i_5 - 2] [7]))), (((/* implicit */unsigned long long int) ((0) & (((/* implicit */int) (short)5220)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_37 = ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 2])) ? (882791126) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) -1LL))) || (((arr_15 [(short)11]) != (((/* implicit */long long int) ((/* implicit */int) (short)11609)))))))));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)5220))) == (144080003703767040LL)))))));
                            var_39 = ((/* implicit */int) arr_35 [i_4]);
                            var_40 += ((/* implicit */_Bool) var_16);
                            arr_36 [i_12] [i_10] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_17 [i_5 - 2] [i_10]);
                        }
                    }
                    var_41 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_25 [i_5 + 4] [i_5] [(unsigned char)5] [i_5] [i_5 + 2] [i_5]));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_42 &= ((/* implicit */unsigned short) (unsigned char)205);
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_14] [i_5] [i_5])) ? (arr_15 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11731)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_4] [5] [i_13] [i_14] [i_15] [i_5]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (12LL)))))));
                                var_44 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)85))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        for (short i_17 = 4; i_17 < 11; i_17 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned long long int) arr_29 [i_4] [i_5] [i_4] [i_5] [1ULL] [i_17 - 1]);
                                var_46 -= ((/* implicit */_Bool) 2573579531U);
                                arr_51 [i_17 - 1] [i_4] [i_16 + 2] [i_13] [i_13] [i_4] [i_4] = ((/* implicit */signed char) var_11);
                                var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_5 + 2]))));
                            }
                        } 
                    } 
                    var_48 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)96))))) ? ((-(((/* implicit */int) (unsigned char)106)))) : (((/* implicit */int) var_5))));
                }
                arr_52 [i_4] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_4] [i_4] [i_5] [i_5 + 4] [1U] [i_4]))))) ^ (max((((((/* implicit */_Bool) arr_22 [5U] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60))) : (-13LL))), (((/* implicit */long long int) arr_34 [i_4] [i_4] [i_5] [i_5] [0ULL] [i_5 - 1]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            {
                                var_49 -= ((/* implicit */_Bool) 0);
                                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11735)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)37111))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) var_4))));
}
