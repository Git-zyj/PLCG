/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142249
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14107))));
                arr_8 [(unsigned short)16] [(unsigned short)16] = min((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_10)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_1)))))), (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1]))));
                var_12 |= ((/* implicit */_Bool) ((int) ((unsigned short) min((((/* implicit */unsigned int) var_0)), (var_10)))));
            }
        } 
    } 
    var_13 = var_2;
}
