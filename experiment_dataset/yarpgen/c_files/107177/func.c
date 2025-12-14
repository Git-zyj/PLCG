/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107177
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1 - 4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (2205288178U) : (974974711U)));
                        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5223)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)5223))));
                    }
                    arr_12 [i_0 - 3] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562072080U)) ? (arr_9 [i_2 - 2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2]) : (var_9)))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 3] [i_2] [12U] [i_2] [i_2] [i_2 + 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)54735)) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_0] [i_2 + 1]) : (arr_9 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 2] [i_2 - 2] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_15 [9U] = ((((/* implicit */_Bool) 4161475023U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)5223))))) : (3106963216U));
        arr_16 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)45728))))) ? (((((/* implicit */_Bool) 864543991U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (unsigned short)60313)) ? (3991887599U) : (arr_14 [i_4]))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_20 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1059867353U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5229))) : (2096896U)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5223))) : (arr_19 [i_5] [i_5]))));
        arr_21 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (arr_17 [i_5]) : (arr_17 [i_5]))) : (((((/* implicit */_Bool) (unsigned short)52822)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))));
    }
}
