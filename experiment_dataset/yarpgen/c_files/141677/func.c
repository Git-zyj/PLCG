/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141677
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = (-(min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (arr_5 [i_1 + 2]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_5 [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2])))))));
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)2] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3435525732U)))))));
                }
            } 
        } 
    } 
    var_21 = 1593721401U;
}
