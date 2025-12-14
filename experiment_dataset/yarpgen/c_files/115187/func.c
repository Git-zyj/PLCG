/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115187
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) arr_7 [i_0] [i_2] [i_3]);
                            arr_10 [i_0] [(unsigned char)0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3] [i_1] [i_3] [i_3])))))))), (var_3)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)120))));
                                var_16 = ((/* implicit */unsigned short) ((long long int) arr_7 [i_0] [i_0] [i_0]));
                                var_17 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]);
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_9 [0LL] [i_1])))))));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 8; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(short)5] [i_0]))) : (2888514430U)))) ? ((((_Bool)0) ? (-7223573121314557701LL) : (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_13))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((var_12) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_5])))))))));
                    var_20 = min((((/* implicit */int) (short)9094)), (min((((/* implicit */int) (!((_Bool)1)))), (((arr_7 [i_0] [i_1] [i_5]) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)136)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) -3859254712686944800LL);
                                var_22 = (!(((var_10) >= (var_10))));
                                arr_22 [i_1] [i_7] = ((/* implicit */int) min((arr_3 [i_0] [i_5] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 4; i_9 < 9; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_1] [i_9 - 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)194))));
                                arr_33 [i_8] [i_8] [(signed char)8] &= ((/* implicit */int) ((arr_28 [i_1] [i_8] [i_10]) & (arr_28 [i_8] [i_1] [i_0])));
                                var_24 *= ((((/* implicit */_Bool) arr_14 [i_9] [7LL] [i_9 - 4] [i_9 - 1])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_1] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 8; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) arr_21 [i_1] [i_8] [i_11 - 3] [i_12]);
                                arr_39 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)245)) << (((3859254712686944799LL) - (3859254712686944797LL)))));
                                arr_40 [i_0] [i_0] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1] [i_11 - 2] [i_11 - 3] [i_11 - 3] [i_11 - 2])) ? (((/* implicit */int) arr_18 [i_11] [i_11 - 2] [i_11] [i_11 - 3])) : (((/* implicit */int) arr_30 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 - 1]))));
                            }
                        } 
                    } 
                    arr_41 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_8]);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        for (int i_14 = 2; i_14 < 7; i_14 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_0] [i_1] [i_1] = (~(((/* implicit */int) arr_9 [i_0] [i_13])));
                                arr_48 [i_1] [i_1] [(unsigned short)8] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                                var_26 = ((/* implicit */signed char) var_10);
                                var_27 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_8] [i_13]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)59)), (min((((/* implicit */short) (_Bool)1)), ((short)23040)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 4033528231U)) ? (7037744224704499856LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) : (((/* implicit */long long int) 318624892U))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((((var_1) >> (((/* implicit */int) var_13)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
}
