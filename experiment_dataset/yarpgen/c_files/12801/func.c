/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12801
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [6] [i_1] [6] &= ((((/* implicit */int) var_7)) * (((/* implicit */int) ((_Bool) var_5))));
                var_17 = (+((~(((/* implicit */int) var_2)))));
                arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((max((((int) var_1)), (((((/* implicit */int) var_15)) - (799548131))))), (((/* implicit */int) var_0))));
    var_19 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) var_3))))), (((/* implicit */int) (unsigned short)41963))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)23574))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41961))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */_Bool) (unsigned short)59706)) ? (((/* implicit */int) arr_14 [i_2] [i_4] [i_4] [i_6])) : (((/* implicit */int) var_16)))))))))));
                                arr_21 [i_6] [i_6] [i_6] [i_6] [i_3 + 1] [(unsigned short)16] &= (((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_2] [i_4] [i_6])) : (((/* implicit */int) var_14)))))) & ((+(1778033046))));
                                var_21 = ((((/* implicit */_Bool) (unsigned short)41961)) ? (((((/* implicit */_Bool) arr_19 [i_3 - 1])) ? ((~(-1))) : ((~(((/* implicit */int) arr_20 [i_2] [i_2] [i_2])))))) : ((~(arr_8 [i_2]))));
                            }
                        } 
                    } 
                    var_22 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [(short)3] [3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)23586))))) ? (((/* implicit */int) min((var_16), (var_11)))) : ((~(var_4))))));
                }
            } 
        } 
    } 
    var_23 = (~((+((~(((/* implicit */int) (unsigned short)41979)))))));
}
