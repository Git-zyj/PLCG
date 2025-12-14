/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149936
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
    var_18 &= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (arr_0 [i_0 - 2]))))) > (1434751292U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_20 = (-(arr_6 [i_0] [i_0] [i_2] [i_3]));
                        var_21 -= ((((/* implicit */_Bool) 1434751292U)) ? (4294967295U) : (19U));
                    }
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) var_14);
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0])))) << (((((((19U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30932))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (65264U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) 2031305932)) ? (((arr_2 [i_0 + 3] [i_4 - 1] [i_0]) | (arr_2 [i_0 + 3] [i_4 - 1] [i_0]))) : (min(((~(2860216007U))), (((/* implicit */unsigned int) var_8)))));
                                var_24 = (+(arr_6 [i_1] [i_1] [i_0 - 1] [i_2]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) ((unsigned short) var_16));
}
