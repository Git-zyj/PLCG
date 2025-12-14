/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188701
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4426))))), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_0])))))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [8])) >> (((arr_4 [i_0]) - (16581883427540923601ULL))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_0] [i_0] [(short)6] = ((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_3] [i_4] [i_1]);
                                var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min(((unsigned short)58185), (((/* implicit */unsigned short) (_Bool)1))))), (max((arr_4 [i_0]), (((/* implicit */unsigned long long int) -9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19914))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58222))))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                arr_16 [i_2] [i_0] = ((/* implicit */unsigned short) (-(arr_5 [i_0] [i_3])));
                                var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_0]) > (arr_1 [i_2])))), (min((arr_1 [i_2]), (arr_1 [i_0])))));
                            }
                            arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned char) max((arr_2 [i_0]), (arr_2 [i_0])));
                arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(signed char)10] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0])))))) : ((-(arr_1 [(unsigned short)5])))))) ? ((((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]))))) : (max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [0] [5U] [i_1] [i_1])) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0])))))))), (max((((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -2091717795)) : (2305843009079476224ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                {
                    var_18 -= max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_6])), (min((((/* implicit */long long int) arr_25 [i_6] [i_6])), (arr_20 [(unsigned short)4] [i_8])))))), (max((arr_26 [i_8] [i_7 + 2] [i_8]), (((/* implicit */unsigned long long int) arr_22 [i_7 + 3])))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_21 [i_8]))));
                    arr_28 [(short)8] [(short)8] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_25 [i_7 + 3] [i_7 - 1]), (arr_25 [i_7 + 3] [i_7 - 1])))), (min((((/* implicit */unsigned long long int) arr_20 [13LL] [i_7])), (max((((/* implicit */unsigned long long int) arr_24 [i_6])), (arr_26 [i_6] [i_7] [i_8])))))));
                    arr_29 [i_6] [i_7 + 2] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((arr_26 [i_8] [i_7 - 1] [i_6]), (((/* implicit */unsigned long long int) arr_24 [(_Bool)1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [8ULL])))))), (arr_26 [i_8] [i_8] [i_8])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)8184))));
        var_21 = ((/* implicit */long long int) ((min((arr_32 [i_9]), (arr_32 [i_9]))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_31 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9])))))))))));
        var_22 = ((/* implicit */int) arr_30 [i_9]);
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_41 [i_9] [i_9] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_38 [i_9] [5LL] [i_9] [16ULL] [5LL]), (arr_33 [i_9] [i_10 + 2] [i_9]))))))), (min((min((-465700221), (2091717795))), (arr_32 [i_9])))));
                        arr_42 [i_9] [i_9] [i_10] [i_11] [i_12 + 2] [(_Bool)1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_36 [(unsigned short)21]), (arr_37 [i_9] [i_9])))) ? ((-(arr_31 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_11]))))), (max((((/* implicit */unsigned int) max((arr_36 [i_9]), (arr_38 [i_10] [i_10] [i_10] [i_10] [(unsigned short)14])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11] [i_9] [i_10 - 1]))) + (arr_31 [i_9])))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_37 [(unsigned short)0] [i_9])))) + (2147483647))) >> (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_9]))) / (arr_31 [i_9]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_35 [i_9])), (arr_33 [i_9] [i_9] [i_9]))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_3);
    var_25 = ((/* implicit */signed char) min((((var_5) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) var_1))));
}
