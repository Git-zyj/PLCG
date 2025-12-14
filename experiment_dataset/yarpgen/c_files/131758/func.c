/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131758
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
    var_11 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)41073)) : (((/* implicit */int) var_5)))))) / (((((/* implicit */int) var_0)) + (((/* implicit */int) var_3))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)64851), (arr_10 [(unsigned short)11] [(unsigned short)11] [i_2] [i_3] [(unsigned short)11])))) ? (((((/* implicit */int) arr_8 [i_0] [(unsigned short)2])) >> (((((/* implicit */int) var_5)) - (34945))))) : ((-(((/* implicit */int) (unsigned short)42517))))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65527)) + (((/* implicit */int) (unsigned short)21)))) != (((/* implicit */int) arr_7 [i_2 + 1]))))) : ((+(((/* implicit */int) (unsigned short)65526))))));
                                var_12 = var_8;
                                var_13 = arr_2 [i_0] [i_0] [i_0];
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_4] [i_1])) : (((((/* implicit */_Bool) (unsigned short)39558)) ? (((/* implicit */int) (unsigned short)25990)) : (((/* implicit */int) (unsigned short)0))))));
                                var_15 = ((unsigned short) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                var_16 = arr_0 [i_0] [i_0];
                var_17 = ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
}
