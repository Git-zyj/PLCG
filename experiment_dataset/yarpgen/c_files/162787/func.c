/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162787
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
    var_17 = var_11;
    var_18 = var_14;
    var_19 = min((((((/* implicit */int) var_12)) - (((/* implicit */int) min(((unsigned short)28672), ((unsigned short)7680)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) (unsigned short)36863))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_0] [i_4] = ((((/* implicit */_Bool) min(((signed char)-88), (min((arr_11 [i_0] [18] [i_0] [i_3]), (arr_7 [i_0] [i_2] [i_3])))))) ? (((((/* implicit */int) arr_12 [i_0] [16] [16] [i_3 - 1] [i_4] [i_0])) / (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [(unsigned short)14] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_0])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_3 + 1] [i_3 - 2] [i_0] [i_3] [i_0])), ((unsigned short)28693)))));
                                var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_8 [i_3 - 2])), ((-(((/* implicit */int) var_14)))))), (((/* implicit */int) arr_4 [i_1] [i_3]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) 2097151);
                }
            } 
        } 
    } 
}
