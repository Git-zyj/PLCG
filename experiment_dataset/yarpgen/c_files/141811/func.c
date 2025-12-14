/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141811
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
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) ((18446744073709551589ULL) > (((/* implicit */unsigned long long int) ((long long int) (short)-13364)))));
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 9ULL))) << (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_12 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)235)), ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] [i_1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1 - 2])))) + (18446744073709551596ULL));
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) ((((arr_15 [i_0]) << (((((/* implicit */int) (short)-6713)) + (6774))))) << (((((/* implicit */int) (short)-25873)) + (25928)))));
                    arr_16 [i_0] [i_1] [i_5] = min((((/* implicit */unsigned short) (short)6708)), (((unsigned short) (short)29253)));
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_6);
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 91688624161192490LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_6 + 3] [i_0]);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) arr_5 [i_6 - 2] [i_6] [i_6] [i_1 + 1])) ? (arr_5 [i_6 + 1] [i_6] [i_6] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_10] [i_6 + 3] [i_0])))))));
                                var_18 = ((/* implicit */int) ((unsigned short) ((long long int) 1211423723)));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1 - 2] [(short)9] [i_6 + 3])) ? (((((/* implicit */_Bool) 17234298792452199268ULL)) ? (3646594987848800612ULL) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 3853774372680597621LL)) && (((/* implicit */_Bool) var_2)))));
                }
                arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_25 [i_0] [i_1] [i_0] [i_0]);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_1] [i_0] [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_21 [i_1] [4] [i_0] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) -3853774372680597633LL);
    var_23 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_5))))));
}
