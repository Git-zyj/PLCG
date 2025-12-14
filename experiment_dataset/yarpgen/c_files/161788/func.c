/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161788
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((6443294708086491402ULL), (((/* implicit */unsigned long long int) (unsigned short)65507))))) ? (((/* implicit */int) (unsigned short)27181)) : (((/* implicit */int) (unsigned short)65507)))) <= (((/* implicit */int) arr_0 [i_0]))));
                        var_13 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_1 [i_0])), (968418004))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_2] [i_3] [i_3] [i_0])))))));
                        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        var_15 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((((/* implicit */int) var_9)) >> (((1860661535U) - (1860661504U))));
                    }
                    arr_12 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)69)), ((unsigned short)46)));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_2]);
                        arr_16 [5] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [9] [i_1] [i_2]))))), (min((((/* implicit */long long int) (short)32759)), (3421394738583039156LL))))), (((/* implicit */long long int) arr_5 [0U] [i_1] [i_1] [i_0]))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_0] [8] [i_1] [i_2] [i_2]), (arr_10 [10ULL] [10ULL] [i_0] [i_0] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 659933732U)) ? (((/* implicit */int) arr_1 [i_2])) : (arr_5 [6] [i_1] [i_2] [i_5])))) : (max((((/* implicit */unsigned int) arr_0 [i_5])), (arr_9 [i_2] [i_2] [i_2])))))) : (arr_6 [i_0] [i_1] [i_1] [i_2] [i_1])));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [i_0] [10] [i_0])) >= (953969902))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (((((/* implicit */_Bool) 659933732U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)))))) ? (arr_9 [i_0] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6)))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [(short)15] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_6 + 1] [i_1] [i_6] [i_6 + 1]) + ((-(arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) var_2);
                            arr_22 [i_7] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [16U] [i_2])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_6 [(unsigned short)4] [(unsigned short)4] [i_7 + 1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_2] [i_2] [(_Bool)1] [0] [i_2] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((max((((/* implicit */long long int) (((_Bool)1) ? (arr_13 [i_2] [i_5] [i_8]) : (((/* implicit */int) arr_2 [(_Bool)1]))))), ((-(arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_5] [i_2] [i_1] [i_0])) > (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_2] [i_2]))))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_22 -= ((/* implicit */short) arr_6 [(short)3] [i_1] [i_2] [i_5] [i_9]);
                            arr_27 [i_2] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) (unsigned short)40);
                        }
                    }
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)9634)) : (((/* implicit */int) var_8))))))));
}
