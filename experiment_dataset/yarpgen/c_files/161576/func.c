/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161576
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
    var_15 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */unsigned int) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) != (arr_1 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) var_4))))) : (min((((/* implicit */long long int) var_6)), (arr_1 [i_0]))))), (var_10)));
                var_17 *= min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) min((var_13), (var_13)))) : (arr_0 [i_0] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) var_4)) / (arr_9 [i_2] [i_2] [i_2] [i_1] [i_2]))) : (((/* implicit */long long int) (~(2147483637))))));
                        var_19 = ((/* implicit */long long int) (unsigned short)28038);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (arr_11 [i_0])));
                    }
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [(unsigned short)2] [11LL] [(unsigned short)2] [i_4 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4 - 1]))));
                        arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) & ((~(((/* implicit */int) var_5))))));
                        var_22 = ((/* implicit */long long int) (!(var_11)));
                        var_23 = ((/* implicit */long long int) (unsigned char)165);
                    }
                    arr_15 [i_0] [(unsigned char)7] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80)))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((min((8589934591ULL), (((/* implicit */unsigned long long int) 1517709290U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_0 [i_0] [6LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_5))))) : (((((/* implicit */_Bool) 12475272622503119288ULL)) ? (0U) : (((/* implicit */unsigned int) -14450313)))))))));
                    var_24 = ((/* implicit */unsigned long long int) (~(min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))));
                    var_25 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_5] [(short)2])), (arr_0 [i_5] [i_1])))));
                    arr_19 [i_5] [(unsigned char)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((5831421921491905376ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [4U] [(unsigned char)0] [(unsigned char)0] [i_5]))) & (527681616U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_13)))) ? ((-(arr_17 [4LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(_Bool)1]))))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((max((arr_12 [i_0] [i_1] [i_6] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_1] [i_6]))), ((-(arr_1 [i_0])))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_27 ^= ((/* implicit */unsigned char) (~(3767285676U)));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(6970858849856401871ULL))))));
                        var_29 -= ((((/* implicit */_Bool) min(((-(1756455771U))), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_14)))));
                    }
                    arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */short) arr_20 [i_0] [i_0] [i_6])))))) : (arr_10 [i_0]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_4 [i_6] [i_6] [i_6])))) ? (((((/* implicit */_Bool) arr_22 [i_1] [8ULL] [i_6] [i_1])) ? (var_9) : (527681608U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [11U] [i_6] [i_1] [i_0]))))))));
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) arr_17 [i_0]);
                    arr_27 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) 12243284105701935627ULL)) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [i_1])) ? (max((arr_10 [(unsigned char)5]), (arr_11 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8] [i_1] [i_0])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_7 [i_0] [i_0] [0LL] [i_0]))))))), (((/* implicit */long long int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_32 &= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) + (4176535447581737172LL))) - (27LL)))))), (min((((/* implicit */long long int) 4294967272U)), (arr_12 [i_8] [i_9] [i_8] [i_1] [10])))));
                                var_33 = ((/* implicit */int) (((((_Bool)1) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_10] [i_9] [i_8] [i_1] [i_0]))) & ((+(arr_26 [i_10] [i_8] [i_1])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    var_34 = 8411683091522396970ULL;
                    var_35 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_2))))));
                    arr_35 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_11] [i_1] [i_0])) ? ((+(((/* implicit */int) arr_20 [i_0] [i_1] [i_11])))) : (((/* implicit */int) min((arr_20 [i_0] [i_1] [i_11]), (arr_20 [i_11] [i_1] [i_11]))))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) (unsigned char)172);
    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_7))));
}
