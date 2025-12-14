/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179774
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
    var_12 = 3923418476U;
    var_13 = ((/* implicit */short) (+(var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_3 [2LL] [2LL] |= ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) : (760475826U)));
                    arr_10 [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [(short)10]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_24 [i_3] [(_Bool)0] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_12 [(short)3] [(unsigned char)8])));
                        arr_25 [(_Bool)1] [i_3] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_6]))) ? (371548820U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31523)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7])) ? (arr_26 [i_8]) : (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (signed char i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                var_16 = ((/* implicit */signed char) var_2);
                arr_33 [i_7] [3LL] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_9] [13ULL] [i_9 - 1] [i_9] [i_9] [i_9 + 1])) ? (294932748) : (((/* implicit */int) var_3))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 760475814U)) ? (4107027062U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10])))));
                arr_37 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_8]))));
            }
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 2; i_12 < 13; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        arr_48 [i_7] [i_7] [(short)10] [9ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_7] [(signed char)7])) ? (((/* implicit */int) var_0)) : (var_4)));
                        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_12 + 2] [i_12] [i_12] [i_12 - 2]))) % (974482147U)));
                    }
                    var_19 = ((/* implicit */signed char) 1286315680);
                    var_20 = ((/* implicit */long long int) (_Bool)1);
                    arr_49 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_12 + 3] [i_12 + 2] [i_12 + 2] [(_Bool)1] [i_12 + 4] [i_12 + 3])) ? (arr_44 [i_12 + 3] [i_12] [i_12 + 3] [11ULL] [i_12 + 4] [i_12 - 1]) : (((/* implicit */int) arr_17 [i_12 + 4] [i_12 - 2]))));
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                }
                var_22 = ((/* implicit */long long int) arr_28 [i_11]);
            }
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (short i_15 = 2; i_15 < 14; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            var_23 -= ((/* implicit */int) (-(((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            var_24 = arr_41 [(signed char)16] [(signed char)16];
                            arr_59 [i_7] [i_7] [i_7] [i_7] [i_7] [3ULL] [5U] = (short)18526;
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) 3320485148U)))), (((/* implicit */unsigned long long int) ((arr_42 [i_7] [i_7] [i_7] [i_7]) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_7] [(short)7] [i_7])) : (-720014751)))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (var_7))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 3534491454U))) ? ((~(arr_39 [i_7]))) : (max((arr_27 [i_7] [i_7]), (((/* implicit */int) var_6))))));
        arr_60 [i_7] [12LL] |= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
    }
}
