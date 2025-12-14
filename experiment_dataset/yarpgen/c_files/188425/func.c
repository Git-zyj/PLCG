/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188425
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
    var_11 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)13043)) : (((/* implicit */int) (short)19921)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (1056698068932042255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                var_12 = ((((/* implicit */long long int) ((((/* implicit */_Bool) -4783352632622070978LL)) ? (((/* implicit */int) (short)-13038)) : (((/* implicit */int) ((short) (short)13047)))))) - (((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 + 1] [4ULL]))))) & (((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)14] [(short)14]))))))));
            }
        } 
    } 
}
