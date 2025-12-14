/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145659
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)14] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_2])), (arr_2 [i_0] [(unsigned char)11] [i_1])))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4)))))), (max((arr_4 [i_0]), (((/* implicit */int) min(((unsigned char)136), ((unsigned char)145))))))));
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65509))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
}
