/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126579
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
    var_15 += ((/* implicit */signed char) max((((/* implicit */short) var_1)), (var_6)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) (short)31850)))) & (((/* implicit */int) ((arr_0 [i_0]) <= (((((/* implicit */_Bool) (signed char)29)) ? (2097024U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4292870272U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (836616732U)))))));
                                var_17 &= (signed char)63;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (4292870272U))) + (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)116), ((signed char)3))))));
    var_19 &= var_5;
}
