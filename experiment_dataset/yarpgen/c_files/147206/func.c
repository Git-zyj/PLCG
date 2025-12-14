/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147206
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (2113520326555864674ULL) : (16333223747153686942ULL)))) ? (((long long int) ((((/* implicit */_Bool) 2113520326555864674ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) 31U)) ? (8068442570314670197ULL) : (((/* implicit */unsigned long long int) -8753289980141285059LL)))))) * (((/* implicit */unsigned long long int) (~(var_4))))));
                        var_12 = ((/* implicit */long long int) min((16333223747153686942ULL), (((/* implicit */unsigned long long int) 1924631006))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned short) arr_0 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_2 [i_5])), (max((2113520326555864674ULL), (var_1))))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-19006)), (var_4)))))))));
                            var_15 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-2760))) & (4294967264U)))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))) ? (-1924631001) : (1924631006))))));
                            arr_16 [i_5] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_6 [i_0] [i_5] [i_0] [i_0]);
                            arr_17 [i_1] [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)207));
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (0U)));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_12 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_6]))) : (arr_2 [4U])))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_2 [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_11 [i_6] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_6])))) : (((/* implicit */int) ((_Bool) var_0)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 3; i_7 < 8; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) var_8);
                            arr_24 [8U] [i_1] [i_0] [i_6] [i_0] &= ((/* implicit */unsigned int) var_7);
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_27 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_9)))))) || (((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0 - 1] [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_8] [i_6] [i_2] [i_1] [i_0])), (-1924631006)))), (var_9)))) && ((!(((/* implicit */_Bool) 16058494004827171422ULL))))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2113520326555864674ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((var_4), (((/* implicit */long long int) (unsigned char)0)))))))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)));
    var_22 = ((/* implicit */unsigned int) max((min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) var_2))));
    var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? ((+(3606403108U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) / (var_9)))))));
}
