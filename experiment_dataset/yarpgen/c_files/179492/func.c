/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179492
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [4ULL] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                arr_7 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)235)))) == (((/* implicit */int) (unsigned char)235))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_3))))), (var_7)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_3] [i_5 + 2] [i_2] |= (!((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)235)) >> (((2147483648U) - (2147483644U)))))))));
                                arr_20 [i_2] [i_4] [8U] [i_5] [8U] = ((/* implicit */_Bool) max((max(((+(((/* implicit */int) arr_16 [12] [i_3] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))))))), (((/* implicit */int) var_2))));
                                arr_21 [i_3] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((-1), (arr_0 [i_5 + 1] [i_4])))) != (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (4422477463660298940ULL)))));
                                arr_22 [i_2] [i_2] [i_5] [4U] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -978876741)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1])))) | (((/* implicit */int) ((_Bool) -720887872)))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) : (max((((/* implicit */unsigned long long int) -720887872)), (min((((/* implicit */unsigned long long int) var_2)), (0ULL)))))));
                    arr_24 [i_4] [i_3] [i_2] = ((/* implicit */_Bool) var_6);
                    arr_25 [i_2] [(unsigned short)12] [i_4] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(0ULL)))))))));
                }
                arr_26 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)21)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20033)) ? (((/* implicit */int) arr_4 [i_2] [(short)9] [i_2])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_12)) : (var_1))) : (((((/* implicit */_Bool) (unsigned char)121)) ? ((-(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)29527)) : (((/* implicit */int) (unsigned char)235))))))));
            }
        } 
    } 
    var_16 = var_0;
    var_17 = ((/* implicit */int) var_9);
}
