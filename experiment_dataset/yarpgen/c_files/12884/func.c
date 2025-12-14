/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12884
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [(unsigned short)3]))));
        var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45866)) || (((/* implicit */_Bool) (unsigned short)57731))))) | (((((/* implicit */_Bool) arr_3 [(unsigned short)6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)57731))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    var_18 ^= arr_5 [i_2];
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_18 [(unsigned short)0] [(unsigned short)12] [(unsigned short)14] [(unsigned short)12] [i_5] [(unsigned short)2] |= ((unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))));
                                var_19 += ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (unsigned short)7810)) ? (((/* implicit */int) (unsigned short)57731)) : (((/* implicit */int) var_7)))) % (((/* implicit */int) arr_13 [i_2] [(unsigned short)14] [(unsigned short)8] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
