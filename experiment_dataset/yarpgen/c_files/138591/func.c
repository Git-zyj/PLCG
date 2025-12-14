/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138591
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
    var_15 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_1] [i_0]))))))));
                var_16 *= ((/* implicit */signed char) ((((unsigned int) 1085743717U)) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) <= (arr_3 [i_0 - 2])))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) arr_3 [i_1]);
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_0 [i_0] [i_1])) + (2147483647))) << (((min((var_9), (arr_3 [i_1]))) - (1305711734U)))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0 + 2] [i_4] [i_3] [i_4] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_3] [i_3])) ? (((long long int) arr_8 [i_1] [i_3] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
                                var_18 -= ((/* implicit */unsigned char) ((long long int) ((arr_3 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1]))))));
                                var_19 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_17 [i_1] [i_3] [2U] [i_3] [i_1] [i_1])) ? (68719472640LL) : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [(unsigned short)0] [i_3] = ((/* implicit */short) ((arr_15 [i_0] [i_1] [i_3] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
                    arr_21 [i_0] [i_3] [i_3] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 1521171690294909264ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))));
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_0 - 2] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_17 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2])) : (arr_23 [i_0] [i_0 + 2] [i_0 - 2])))))));
                    var_21 -= ((/* implicit */_Bool) (~(((unsigned long long int) -8312613992383927657LL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] |= ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
                        arr_29 [i_0 + 1] [i_1] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-683826757)))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) -8352471801737202319LL)))))));
                    }
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_6] [i_8 - 1] [i_8 + 2] [i_0 - 2] [i_0 - 1] [i_6]), (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0])), (var_0))) % (((/* implicit */long long int) ((arr_26 [i_8]) >> (((((/* implicit */int) var_5)) + (51))))))))) : (((((/* implicit */_Bool) min((119710668190260329LL), (((/* implicit */long long int) -1073741824))))) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : ((~(var_8)))))));
                        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8] [i_1])) ? (arr_6 [i_0 + 1] [i_0]) : (((/* implicit */long long int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_12 [i_0] [i_1] [i_6])))))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(var_0))), (((/* implicit */long long int) (!(var_1)))))))));
                    }
                    var_25 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) arr_11 [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0 + 2] [(unsigned short)8] [i_6])) : (arr_16 [i_6] [i_6] [i_6] [i_0])))))));
                    arr_33 [i_0] [i_1] = ((/* implicit */signed char) max(((~(arr_13 [i_0 + 1] [10U] [i_1] [i_0] [i_0] [i_1]))), (((arr_13 [i_0 - 1] [i_1] [i_1] [i_1] [i_6] [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((unsigned long long int) ((unsigned int) var_9))) | ((+(min((var_8), (var_10)))))));
}
