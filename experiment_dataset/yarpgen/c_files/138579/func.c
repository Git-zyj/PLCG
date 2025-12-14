/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138579
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) arr_3 [9ULL] [9ULL]);
                        var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) (_Bool)1))))))), ((~((+(((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
        var_13 = (unsigned char)255;
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_8))))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_15 = ((/* implicit */_Bool) ((arr_14 [i_6]) * (var_7)));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned long long int) (unsigned char)1);
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_8] [i_6] [i_4]))));
                            arr_24 [i_4] [i_5] [i_4] [(_Bool)1] [i_7] [i_8] = ((/* implicit */unsigned char) (+((-(arr_19 [i_7] [i_6] [i_5])))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_18 [i_4] [i_4] [i_5]) : (arr_23 [14ULL] [i_5] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    arr_31 [i_4] [i_5] [i_5] [i_9] [i_9] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_17 [i_10] [i_9] [i_4]))) == (((/* implicit */int) ((_Bool) var_8)))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_10 + 3] [i_10] [i_10 - 2] [i_10 - 1])) - (((((/* implicit */_Bool) arr_20 [12ULL] [(unsigned char)2] [i_5] [i_9] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_0)))));
                    var_21 = arr_22 [i_10 + 3] [i_10] [i_5] [i_5] [i_10 - 1] [i_5];
                    var_22 += ((/* implicit */_Bool) (+((-(18446744073709551609ULL)))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    var_23 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_8)))));
                    var_24 = ((/* implicit */unsigned char) (_Bool)0);
                    var_25 = (!(arr_29 [i_11 + 1] [i_5] [i_11 - 1] [i_11 + 2]));
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    var_26 &= ((/* implicit */unsigned char) arr_29 [i_4] [(unsigned char)10] [i_4] [i_4]);
                    var_27 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) var_2))))));
                    var_28 = ((/* implicit */unsigned char) var_5);
                    arr_37 [i_4] [i_5] [i_9] [i_12] = ((/* implicit */unsigned long long int) (unsigned char)178);
                    var_29 -= ((/* implicit */unsigned long long int) arr_22 [i_4] [i_5] [i_5] [(unsigned char)0] [i_12 + 1] [i_12]);
                }
            }
            var_30 = ((/* implicit */unsigned long long int) ((_Bool) (!((_Bool)0))));
            var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_4] [i_5]))));
        }
        arr_38 [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */int) var_1)), (((((/* implicit */int) arr_29 [i_4] [14ULL] [i_4] [i_4])) % (((/* implicit */int) var_10))))));
        var_32 = (!(((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) / (var_0)))));
        arr_39 [i_4] [i_4] = var_0;
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 4; i_13 < 18; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), (arr_42 [i_14])));
            var_34 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) <= (((/* implicit */int) arr_42 [i_14])))))));
        }
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) var_10);
            var_36 += arr_48 [6ULL] [6ULL];
        }
        var_37 |= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_46 [i_13] [i_13 + 1] [(unsigned char)15])))) & (((/* implicit */int) (_Bool)0))));
    }
}
