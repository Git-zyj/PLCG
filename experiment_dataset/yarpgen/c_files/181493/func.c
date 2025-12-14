/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181493
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
    var_10 = ((/* implicit */int) ((((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) var_5))))) & (max((max((var_8), (((/* implicit */unsigned long long int) var_7)))), (max((3799722571956660059ULL), (((/* implicit */unsigned long long int) 935793684U))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */long long int) var_9);
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((int) var_6)), (((/* implicit */int) min((arr_2 [i_2] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
