/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166840
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
    var_17 -= ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) 0LL)) ? (3407870957U) : (3407870937U)))))));
                        var_19 = ((/* implicit */unsigned char) -1LL);
                    }
                    var_20 = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_13 [i_0] [(unsigned short)3] [i_0] [i_0 + 1] &= ((/* implicit */int) min(((signed char)16), (((signed char) arr_2 [i_5] [i_1]))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 887096353U)) ? (((/* implicit */long long int) -293762826)) : (((((/* implicit */_Bool) -416187810)) ? (((/* implicit */long long int) -416187810)) : (-1LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
