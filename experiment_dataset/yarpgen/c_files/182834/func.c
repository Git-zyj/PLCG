/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182834
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
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [0U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14942638971737143686ULL)) ? (-1547067860) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) arr_0 [i_1 - 2] [i_1]))))) ? (min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15))))))));
                arr_6 [i_0] [(unsigned short)4] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (min((1469223185U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = min((var_19), (((/* implicit */unsigned long long int) var_3)));
}
