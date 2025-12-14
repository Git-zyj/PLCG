/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187321
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0]))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)13] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [1U] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (-4554652413997891944LL)))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) 10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [4ULL] [4ULL] [i_4]))) : (arr_8 [i_4] [(unsigned char)6] [i_4] [i_4] [i_4] [(unsigned short)16]))));
        var_23 ^= ((/* implicit */unsigned char) ((arr_8 [i_4] [10U] [8ULL] [i_4] [10U] [(unsigned short)12]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [1ULL])))));
        var_24 *= ((/* implicit */unsigned int) arr_9 [i_4] [i_4] [i_4]);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-121)) > (((/* implicit */int) (unsigned char)192))));
    }
    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_26 = var_14;
        var_27 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(arr_18 [16LL])))), (((unsigned long long int) arr_15 [4U]))));
        var_28 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned int) min((arr_16 [i_5]), (arr_16 [i_5]))))));
    }
}
