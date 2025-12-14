/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121590
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned short)12] = ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) < (((unsigned int) arr_2 [i_0] [i_1] [i_1]))));
                arr_5 [(short)15] [i_1] = ((/* implicit */_Bool) (+(max((arr_1 [i_0] [(unsigned short)1]), (var_5)))));
                arr_6 [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((4073819645U), (3291972824U)))), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_1]))));
            }
        } 
    } 
    var_16 = var_4;
    var_17 = ((/* implicit */short) ((var_0) + (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_15)) | (var_6))), (((((var_12) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (29))))))))));
}
