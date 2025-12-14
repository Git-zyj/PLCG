/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186685
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (var_3)))) ^ (var_10)));
                arr_8 [i_0] = ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), ((unsigned char)92)))) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) ((short) (unsigned short)61440)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))))));
}
