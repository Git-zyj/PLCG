/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154251
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
    var_19 = ((/* implicit */unsigned long long int) min(((+(((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((/* implicit */int) (signed char)0)))))), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = arr_0 [6LL] [0];
                    var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [(unsigned char)1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))), ((-(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */_Bool) ((((18014398509481983LL) ^ (((/* implicit */long long int) 1512023651U)))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_22 = ((/* implicit */_Bool) var_11);
}
