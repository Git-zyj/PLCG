/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168581
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
    var_18 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (unsigned short)48119)), (((unsigned long long int) (unsigned char)148))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 12684088627759458274ULL))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) 1768873573712783415ULL)) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_5 [i_0] [i_0])));
            var_21 = ((/* implicit */unsigned long long int) (((((~(arr_2 [i_0]))) + (2147483647))) >> (((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (5964190140830450926ULL)))));
            var_22 = ((/* implicit */unsigned long long int) var_15);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) min((var_2), (var_12)))) ? ((~(((/* implicit */int) (unsigned short)17416)))) : (((/* implicit */int) var_2))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_2]);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_0 [i_2]))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), (((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (-1309205737) : (arr_5 [i_0] [i_2])))))) : ((~(arr_6 [i_0] [i_0] [i_0 - 1])))));
        }
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */long long int) max((var_6), (((/* implicit */short) arr_7 [i_0] [i_0 - 2]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17411))) / (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            var_26 -= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)255));
            var_27 |= ((/* implicit */short) (-(arr_0 [i_3 + 4])));
        }
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (arr_11 [i_3 + 4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 3])))))) : (((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_3])) ? (arr_6 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]))))));
        arr_15 [i_3 + 1] = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 14; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_28 = (~(((/* implicit */int) arr_7 [i_3] [i_5 - 1])));
                                var_29 -= ((/* implicit */unsigned long long int) ((var_10) % (((var_13) ? (1309205736) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    var_30 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_22 [i_3] [i_5 + 1])) ? (((/* implicit */unsigned long long int) arr_19 [i_3] [i_5] [i_6])) : (16677870499996768191ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)48112)) : (((/* implicit */int) var_12)))))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned int) ((1309205736) & (((/* implicit */int) (_Bool)1))))))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5 - 1])) ? (arr_26 [i_5] [i_3] [i_5 - 1] [i_5 - 1] [i_3] [i_3] [4ULL]) : (arr_26 [(unsigned char)12] [i_3] [i_5 - 1] [i_3] [i_3 + 3] [i_3] [(_Bool)0]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 4) 
                        {
                            var_33 -= ((/* implicit */unsigned long long int) arr_20 [i_3] [i_6 + 1] [i_10]);
                            arr_33 [i_3] [i_5 - 1] [i_6] [i_9] [i_10] = ((/* implicit */short) -3094370292029246415LL);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned char)86))) + (((/* implicit */int) var_17)))))));
                            var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [(_Bool)1]))));
                            arr_36 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) ((((int) (unsigned short)17416)) * (((/* implicit */int) arr_17 [i_3] [i_3] [i_3]))));
                            var_36 += ((/* implicit */signed char) ((unsigned short) var_1));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            arr_39 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [10U] [i_6] = ((/* implicit */unsigned char) -1509974189);
                        }
                        arr_40 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_16)))));
                        arr_41 [i_3] [i_6] [i_6] [12ULL] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned char)148)))) : (((/* implicit */int) ((var_13) || (((/* implicit */_Bool) arr_22 [i_9] [i_5 + 1])))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) (+(arr_22 [i_3 - 2] [i_5])));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (1509974188) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) arr_37 [i_3] [i_5 + 1] [i_6] [i_3] [i_3] [i_13] [i_5]))));
                            var_41 = ((/* implicit */_Bool) (+(arr_20 [i_3] [i_5 - 1] [i_6])));
                            var_42 |= ((/* implicit */short) var_5);
                            arr_49 [i_3] &= ((/* implicit */int) (~(arr_28 [i_5] [i_5] [i_6 - 1] [i_3] [6LL] [i_13])));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_43 &= ((/* implicit */_Bool) ((arr_25 [i_3] [i_5 + 1] [i_3] [i_15] [i_5]) ? (((1509974189) ^ (((/* implicit */int) arr_7 [11U] [i_3])))) : ((+(((/* implicit */int) var_9))))));
                        var_44 |= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (-1309205737))) : (((/* implicit */int) arr_25 [i_3] [i_5 - 1] [i_5 - 1] [(unsigned short)0] [i_15]))));
                        var_45 = ((/* implicit */unsigned long long int) arr_18 [i_6]);
                    }
                }
            } 
        } 
    }
    var_46 += ((/* implicit */unsigned int) var_3);
    var_47 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((var_1) ? (var_0) : (4762259379050446829ULL)))) ? ((~(((/* implicit */int) var_4)))) : (max((-1509974189), (((/* implicit */int) var_3))))))));
}
