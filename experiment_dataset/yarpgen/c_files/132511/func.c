/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132511
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((var_3) << (((((/* implicit */int) arr_3 [i_1] [i_1])) - (25494))))), (((/* implicit */unsigned int) max((var_0), (((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
        var_14 += arr_3 [i_1] [(unsigned short)11];
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 4; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2638429061U) : (var_6)))) ? (-2135592107) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)36550))))))), (max((((/* implicit */unsigned long long int) ((-2135592107) % (((/* implicit */int) arr_9 [i_2]))))), (((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_8 [11] [11] [i_4]) : (((/* implicit */unsigned long long int) var_3))))))));
                                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)23771)) > (((/* implicit */int) (short)10759)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) (signed char)-56)))))))) : (var_7)))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (_Bool)1))));
                                arr_18 [i_2] [i_2] [i_3] [i_4] [i_5 - 1] [i_6 + 3] [i_6 - 4] = ((/* implicit */unsigned long long int) (~(arr_6 [i_5])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_25 [i_2] [i_4] [i_7] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((max((17464568138504814328ULL), (((/* implicit */unsigned long long int) -2111327315)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 2135592107)) > (arr_10 [i_3 - 1] [i_3 - 1] [i_8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))));
                                var_18 ^= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [10U] [i_2] [i_2] [i_2] [i_2]) | (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_5 [i_2])) : (arr_24 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) arr_20 [18LL] [i_2] [i_2] [i_2])))))))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2])) ? (arr_20 [i_2] [i_2] [i_2] [i_2]) : (arr_20 [i_2] [i_2] [i_2] [i_2])))));
        arr_26 [i_2] = ((/* implicit */_Bool) var_0);
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_15 [i_2] [(unsigned short)2] [i_2] [i_2] [i_2]))));
    }
    var_21 = ((/* implicit */unsigned char) 2111327315);
}
