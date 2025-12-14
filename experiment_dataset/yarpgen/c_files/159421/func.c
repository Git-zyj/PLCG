/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159421
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned long long int) -1810374964)) : (((((/* implicit */_Bool) ((int) 1810374964))) ? (((/* implicit */unsigned long long int) -1810374964)) : (var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_1] [(unsigned short)18] [(short)11])) : (((1087727069) % (-1087727069)))))))));
                    var_16 = ((/* implicit */long long int) 1087727069);
                }
            } 
        } 
    } 
}
