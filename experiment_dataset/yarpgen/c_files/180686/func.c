/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180686
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
    var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (0)))))) ? (min(((-(((/* implicit */int) (unsigned short)2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */int) var_7)) / (((/* implicit */int) min((var_6), ((short)20778))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0] = arr_8 [i_0] [i_0] [i_0];
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1847041589)) ? (-1) : (arr_7 [i_3])))) ? (arr_1 [i_0] [i_0 - 2]) : (((int) 2147483647))));
                            var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (var_9)))) ? (1847041591) : ((+(((/* implicit */int) (short)24268))))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (short)29466)))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_0])) ? (((/* implicit */int) (unsigned short)33028)) : (var_11)))) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_5] [i_3 + 1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 3])) ? (((/* implicit */int) (unsigned short)18)) : ((-(1913691185)))));
                            arr_20 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] = (-(((/* implicit */int) ((unsigned short) var_4))));
                            var_16 = 2147483647;
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned short) arr_0 [i_6] [i_3 - 1])))));
                        }
                        arr_21 [i_0] = ((/* implicit */int) arr_2 [i_2] [i_1]);
                    }
                    for (unsigned short i_7 = 4; i_7 < 8; i_7 += 2) 
                    {
                        var_18 = arr_11 [i_0] [i_1] [i_1] [i_7] [i_2] [i_0] [i_2];
                        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)5)) << (((((/* implicit */int) (unsigned short)12495)) - (12484))))), (arr_1 [i_2] [i_2])));
                    }
                    for (short i_8 = 2; i_8 < 8; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1] [i_1])) ? (arr_27 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_23 [i_2] [i_2] [i_1] [i_1] [i_1] [i_2]))) - ((+(arr_27 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))))))));
                            var_21 = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_0] [i_8] [i_8])) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12200))))))), (((((/* implicit */_Bool) (short)-22707)) ? (((/* implicit */int) max((arr_6 [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) (short)11))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (arr_2 [i_0] [i_0]))))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~((~(((/* implicit */int) arr_14 [i_9] [i_9 + 1] [i_9 + 1] [i_2] [i_9 - 1] [i_9])))))))));
                        }
                        arr_29 [i_8] [i_8] [i_2] [i_8] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24263)) ? ((-(((/* implicit */int) (unsigned short)49433)))) : ((((-(((/* implicit */int) (unsigned short)64554)))) + (((2147483647) - (((/* implicit */int) (short)19629))))))));
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = min(((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1 + 2] [i_1 + 2])))), (((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_2] [i_10] [i_11] [i_0] [i_10]), (arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */int) arr_34 [i_11] [i_10] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_11] [i_10])) ? (arr_7 [i_2]) : (((/* implicit */int) (unsigned short)65406)))))));
                            arr_38 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_17 [i_0] [i_0] [i_11] [i_11] [i_0 - 1])))) ? ((+(((/* implicit */int) min(((unsigned short)48567), (arr_26 [i_0] [i_0] [i_0] [i_0])))))) : (min(((+(((/* implicit */int) arr_36 [i_0] [i_1] [i_2] [i_2] [i_10] [i_2])))), (((((/* implicit */int) (unsigned short)35048)) & (-2147483644)))))));
                        }
                        arr_39 [i_10] [i_10] [i_0] [i_10] = ((/* implicit */unsigned short) (+(max((1090100891), (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1]))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((arr_35 [i_0] [i_0 - 1] [i_2] [i_1 + 2] [i_0]), (1844351718))) << (((((/* implicit */int) arr_36 [i_0] [i_0] [i_2] [i_10] [i_12] [i_2])) - (16025))))))));
                            var_24 = (((!(((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2091)) ? (320705733) : (-1202936831)))) ? (((-1844351719) / (arr_31 [i_0] [i_0] [i_2] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8399))))))) : (((int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_25 *= arr_34 [i_2] [i_2] [i_2] [i_2] [i_2];
                            var_26 *= ((/* implicit */int) ((((/* implicit */int) (short)19629)) > (((/* implicit */int) arr_45 [i_1 + 3] [i_2] [i_0 + 1]))));
                        }
                        for (unsigned short i_14 = 2; i_14 < 9; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)19629)) ? (((/* implicit */int) arr_14 [i_14 + 1] [i_14 + 1] [i_14] [i_0] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_32 [i_1 - 1])))), ((-(((/* implicit */int) arr_32 [i_1 + 1]))))));
                            var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0])))) ? (max((arr_35 [i_0] [i_0] [i_0] [i_10] [i_14]), (arr_47 [i_0] [i_1] [i_10] [i_10] [i_0] [i_14]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57772)) < (((/* implicit */int) (unsigned short)41854))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_14])) : ((~(((/* implicit */int) (short)-1))))))));
                        }
                        for (unsigned short i_15 = 3; i_15 < 8; i_15 += 2) 
                        {
                            var_29 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_45 [i_0] [i_10] [i_2])) : ((+(arr_1 [i_0] [i_0]))))) == ((+(((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))));
                            arr_52 [i_0] = ((/* implicit */short) 312464250);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_18 [i_10])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -2035886083))))))) : ((~(arr_35 [i_1 + 4] [i_15 + 1] [i_0 - 2] [i_1 + 4] [i_0 - 2]))))))));
                        }
                    }
                    var_31 |= ((/* implicit */short) (~(((/* implicit */int) (short)4))));
                    var_32 -= ((/* implicit */unsigned short) (((+(-536870912))) / ((+(((/* implicit */int) min((arr_26 [i_0] [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
}
