/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146384
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned char) ((-1440545770) < (((/* implicit */int) (_Bool)1))))))));
            arr_4 [i_1] |= ((/* implicit */unsigned char) ((unsigned long long int) var_10));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (1173312718))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) 16867479079000214817ULL);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_12 [i_0] = (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65195)))) && (arr_0 [i_3])));
                var_16 *= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_3]);
            }
            for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_3 [i_0] [i_4]))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_4]) : (arr_14 [i_0] [i_2]))) > (((var_5) ^ (((/* implicit */int) arr_9 [i_0] [i_2]))))))), (min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)1)) : (-797513208))), ((~(arr_14 [i_0] [i_0]))))))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_24 [i_6] [i_6] [i_6] [1] [(unsigned char)2] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_2]))));
                        var_19 = ((/* implicit */unsigned char) var_14);
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */int) arr_0 [i_2]);
                        var_21 *= arr_3 [i_0] [i_2];
                        arr_29 [i_0] [i_2] [i_5] [i_6] [i_0] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (5612990926890748145ULL))) >= (16867479079000214817ULL)));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1106307865U) - (15U)))) ? (((((/* implicit */_Bool) 2097148U)) ? (arr_23 [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_2]))))) : (arr_22 [i_0] [i_2] [i_5] [i_5] [i_6] [i_2] [i_8])));
                        arr_30 [i_8] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_17 [9U] [9U] [i_5] [i_6]))))));
                    }
                    arr_31 [i_0] [i_0] = ((/* implicit */int) arr_9 [i_6] [i_5]);
                }
                for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_34 [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [14ULL] [i_2] [i_5] [i_9] [i_5] [i_9])) ? (((/* implicit */unsigned int) arr_19 [i_5] [i_5] [i_5] [5ULL] [i_5] [i_5])) : (1286176452U)));
                    arr_35 [i_0] [i_0] [i_2] [i_5] [i_9] = ((/* implicit */_Bool) var_11);
                }
                var_23 = ((((/* implicit */_Bool) arr_16 [i_0] [i_5])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_5])) : (arr_16 [i_5] [(short)1]));
            }
            arr_36 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2])) ? (((((/* implicit */unsigned long long int) 3001142919U)) + (arr_3 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0])))))))));
            arr_37 [i_0] = ((/* implicit */unsigned char) ((arr_22 [i_0] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]) != (((/* implicit */unsigned long long int) var_14))));
            var_24 = ((/* implicit */short) arr_2 [i_0] [13U]);
        }
        arr_38 [i_0] = min((min((797513208), (((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) ((arr_26 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) 2147483647))))));
    }
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_41 [i_10] = ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((unsigned int) max((((/* implicit */unsigned long long int) var_8)), (arr_39 [i_10])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-21971616) : (((/* implicit */int) arr_40 [i_10]))))))))));
        arr_42 [i_10] [11U] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1286176452U)));
        var_25 = ((/* implicit */unsigned char) (~(arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2511997718U)))))));
        arr_47 [i_11] = (_Bool)1;
        arr_48 [i_11] [i_11] = ((/* implicit */unsigned short) ((max((arr_1 [i_11 - 1] [i_11 - 1]), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (arr_33 [i_11] [i_11] [i_11] [i_11])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (2114949348)))))))));
    }
    var_27 -= ((/* implicit */_Bool) ((((var_1) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)12046)) : (var_7)))));
}
