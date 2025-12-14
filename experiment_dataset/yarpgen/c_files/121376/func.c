/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121376
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
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)37))));
    var_13 = var_1;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) == (((/* implicit */int) var_11))))) ^ (((/* implicit */int) (short)7162))))) || (((/* implicit */_Bool) ((short) min((arr_5 [i_1]), (((/* implicit */short) var_5))))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-26025)) + (2147483647))) << (((((/* implicit */int) ((unsigned char) (unsigned char)178))) - (178))))) & (((((/* implicit */_Bool) (short)-16321)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_1] = max(((unsigned char)70), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)165))))));
                            arr_14 [i_1] [i_1] [i_1] [(short)14] [i_1] [(short)14] = ((unsigned char) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) var_0))))));
                            arr_15 [i_3] [(short)7] [i_1] [i_1] [(short)19] [(short)19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1])) ? (((/* implicit */int) max((arr_9 [i_1 + 2] [i_1]), (arr_9 [i_1 - 1] [i_1])))) : (((/* implicit */int) arr_9 [i_1 + 3] [i_1]))));
                            arr_16 [i_0] [i_1] [i_1] [i_0] = min((((/* implicit */short) (unsigned char)0)), ((short)2693));
                        }
                    } 
                } 
            }
        } 
    } 
}
