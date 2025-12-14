/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172756
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2]);
                        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [(unsigned char)16] [(unsigned char)16] [i_0])) ? (arr_8 [i_0] [16ULL] [i_2] [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 3] [i_1])))))) : (var_4)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_0] [i_4] [i_4])))) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 3] [(_Bool)1] [i_1]))))) > (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))))) : (((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_11)))));
                        var_17 = (+((((!(var_8))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4])))))));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) var_0);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 *= ((/* implicit */unsigned int) arr_6 [17] [i_1] [i_2] [i_5]);
                        arr_20 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */long long int) arr_0 [i_2 + 4]);
                    }
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_0))));
                    arr_21 [16] [12U] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */long long int) var_10)) < (arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] [8U]))))))) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_5 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((arr_11 [i_0]) / (arr_8 [i_2] [i_2] [i_1] [i_0] [i_0])))) : (max((var_2), (((/* implicit */long long int) arr_19 [i_0] [i_1] [i_0] [i_2] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)7] [i_0]))) : (var_4))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))))));
                    arr_22 [1LL] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) var_5)) | (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (arr_1 [i_1] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_5)))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_13 [i_0] [i_1] [i_2 + 1] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_26 [i_6] = var_11;
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) > (arr_24 [i_6] [7ULL]))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_23 [i_6])))) : (((/* implicit */int) var_9))));
        arr_27 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_24 [i_6] [i_6]) * (((/* implicit */int) arr_23 [i_6]))))) ? (((/* implicit */int) arr_25 [i_6] [i_6])) : (((/* implicit */int) arr_23 [i_6]))));
    }
    for (int i_7 = 2; i_7 < 23; i_7 += 4) 
    {
        arr_31 [i_7 - 2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [12LL] [i_7 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((max((((/* implicit */int) arr_30 [12] [i_7])), (var_13))) <= (((/* implicit */int) var_8)))))));
        var_21 = ((/* implicit */unsigned char) var_13);
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1583260803281186745LL));
        arr_34 [i_8] [i_8] = (-(((/* implicit */int) (_Bool)1)));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_8])) <= (((/* implicit */int) var_14))))))) * (((/* implicit */int) arr_23 [i_8]))));
                    var_23 = ((/* implicit */unsigned int) arr_35 [i_8] [i_9]);
                    arr_42 [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [i_8] [i_9])) ? (arr_36 [i_9] [1LL]) : (arr_36 [i_8] [i_8]))) > (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)230)) >> (((-8061167576926150227LL) + (8061167576926150244LL))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_5)))))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_39 [(short)12] [i_8] [10U]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8])))))) ? ((~(arr_29 [(short)21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_8]))))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_0))));
    }
    var_26 = ((/* implicit */unsigned int) var_6);
    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_3))));
}
