/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176656
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */short) ((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))) & (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1 + 4] [i_1 + 1] [i_1 - 1]))) : ((+(var_6)))))));
                                var_19 = arr_5 [i_0] [i_0] [i_0] [i_0];
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(3859088839018678072ULL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)0] [13ULL]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [16ULL] [i_6 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_2] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_9))));
                                arr_18 [i_1] [i_5] [i_2] [i_1 + 3] [i_1] = var_11;
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((unsigned long long int) var_6)) - (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)7877)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
}
