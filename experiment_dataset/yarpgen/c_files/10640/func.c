/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10640
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [(unsigned short)9] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) var_2))));
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_1] [10U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [(unsigned char)2]))) : (2192286782U)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_2]))) : (var_0)))));
                                arr_18 [i_0 - 1] [(signed char)0] [(short)7] [i_3] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(4294967295U)))) : (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [13] [13])) ? (max((((/* implicit */unsigned long long int) 8778913153024LL)), (4487640589789663089ULL))) : (((/* implicit */unsigned long long int) 1U))))));
                                arr_19 [i_3] [i_0] [i_3] [i_3] [i_3] [i_4] [6ULL] = ((/* implicit */unsigned char) 17254360425340679439ULL);
                            }
                        } 
                    } 
                } 
                arr_20 [i_1] [(short)11] = ((/* implicit */short) min(((+(var_4))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)3] [i_1]))) : (var_4)))))))));
                arr_21 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_22 [i_0 - 1] [i_1] [i_1] = ((/* implicit */int) var_5);
                arr_23 [i_0] [(short)11] [i_1] = ((/* implicit */short) ((int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) 2102680510U)) : (max((((/* implicit */unsigned long long int) 3547273873U)), (4487640589789663089ULL))))));
            }
        } 
    } 
}
