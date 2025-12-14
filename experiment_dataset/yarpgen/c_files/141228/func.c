/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141228
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
    var_16 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)38)))))) & (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((unsigned long long int) arr_0 [i_0] [i_0])) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (short)-25037)))))))))))));
                    arr_8 [i_0] [9U] [i_0] [i_2] = ((/* implicit */int) (short)480);
                    var_18 = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_2 [i_2])))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) 0U)) ? (arr_0 [i_2] [i_1]) : (((/* implicit */long long int) arr_6 [i_2])))))) - (1155774107LL)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_2 [i_2])))) >> (((((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) 0U)) ? (arr_0 [i_2] [i_1]) : (((/* implicit */long long int) arr_6 [i_2])))))) - (1155774107LL))) - (863058481LL))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) min((arr_5 [i_0 - 1] [i_1 + 1]), ((!(((/* implicit */_Bool) (unsigned char)114))))));
                }
            } 
        } 
    } 
}
