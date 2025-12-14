/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101362
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = var_18;
                var_20 = max((((arr_2 [i_0] [i_1]) | (var_18))), (((int) max((arr_0 [i_0]), (arr_1 [i_0] [i_1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_21 = (~(arr_5 [i_2 + 2] [i_1] [i_0]));
                    arr_8 [i_0] [i_1] [i_2 + 3] [i_1] = ((((int) var_13)) / (((((/* implicit */_Bool) arr_3 [i_0] [8])) ? (var_2) : (var_5))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_22 = ((((int) 0)) >> (((((int) 2031616)) - (2031586))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_15 [i_0] [4] [i_1] [10] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-900146776) : (1830279880)))) ? (((int) -2)) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [12] [i_3] [i_4] [i_4])) ? (-1252917322) : (1571204808))));
                            var_23 = ((/* implicit */int) min((var_23), (((arr_6 [i_0] [i_0] [2]) % (arr_6 [i_0] [3] [i_4])))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((arr_6 [i_2 + 3] [i_2] [i_2 + 1]) % (arr_17 [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_5 + 1])))));
                        var_25 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [5] [i_2] [10] [i_2 - 1] [i_0])) ? (var_8) : (arr_16 [i_0])))) ? (var_10) : (((((/* implicit */_Bool) 1289883627)) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) var_6)) ? (var_14) : (arr_16 [i_2 - 1])))));
                    }
                    arr_19 [i_0] [9] [i_0] [1] &= ((((/* implicit */_Bool) arr_10 [8] [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2])) ? (-2) : (-33554432));
                }
                for (int i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) max((1289883636), (-466453799)))) ? (((min((-1471110912), (-96351409))) / (923032482))) : (arr_14 [6] [i_1] [i_1] [4] [4] [i_1]));
                    arr_22 [i_0] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6 + 3] [7] [i_1])) ? (-1471110921) : (arr_4 [i_6 + 2])))) && (((/* implicit */_Bool) var_17))));
                }
                for (int i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_32 [i_9] [i_8] [i_7] [11] [1] = ((int) 469105081);
                                arr_33 [i_0] [i_1] [i_7] [i_7 - 2] [4] [i_8 - 1] [i_9] = min((((((/* implicit */_Bool) min((-135686807), (arr_16 [2])))) ? (((int) var_17)) : ((+(-1471110912))))), (var_9));
                                var_28 = ((int) -571161668);
                            }
                        } 
                    } 
                    var_29 = ((int) var_15);
                    var_30 = min((1289883623), (-1289883640));
                    var_31 = ((((/* implicit */_Bool) max((((int) arr_11 [2] [i_1] [i_7 - 1] [i_1])), (var_18)))) ? (((((/* implicit */_Bool) ((int) arr_6 [i_0] [3] [i_0]))) ? (min((arr_25 [i_0] [12] [1] [i_0]), (var_5))) : (var_0))) : (min((var_8), ((-(arr_4 [i_7]))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
        var_33 = ((/* implicit */int) max((var_33), (min((((int) arr_36 [i_10])), (((((/* implicit */_Bool) ((int) arr_34 [4] [i_10]))) ? (arr_36 [i_10]) : (min((var_16), (-1699684642)))))))));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 13; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            var_34 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [3])) && (((/* implicit */_Bool) arr_34 [i_11 - 1] [i_11 + 2]))))) >= (var_3)));
            arr_42 [i_11] [i_12] = ((((/* implicit */_Bool) arr_39 [i_12])) ? (var_1) : (-1289883618));
        }
        arr_43 [i_11] = ((/* implicit */int) ((((/* implicit */int) ((arr_37 [i_11]) < (arr_40 [i_11 + 1] [i_11 - 2] [i_11])))) < (((((/* implicit */_Bool) var_8)) ? (arr_34 [5] [i_11 - 1]) : (var_1)))));
    }
    for (int i_13 = 2; i_13 < 13; i_13 += 3) /* same iter space */
    {
        var_35 = ((((/* implicit */_Bool) min((var_3), (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_13 + 1]))))) : (((/* implicit */int) ((min((arr_44 [i_13 + 1] [i_13 + 1]), (arr_35 [i_13 - 1]))) < (var_0)))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (int i_15 = 2; i_15 < 13; i_15 += 1) 
            {
                for (int i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    {
                        var_36 = ((int) (-(arr_50 [12] [5] [i_16 - 1] [i_16 + 1] [4] [i_16])));
                        arr_52 [i_15] = ((var_13) ^ (((((/* implicit */_Bool) ((((var_6) + (2147483647))) << (((var_3) - (530774720)))))) ? ((~(var_11))) : (arr_46 [10]))));
                        var_37 = ((int) ((((/* implicit */_Bool) ((var_11) << (((((-1471110928) + (1471110956))) - (28)))))) ? (((466453787) % (var_5))) : (((var_10) % (var_7)))));
                    }
                } 
            } 
        } 
    }
}
