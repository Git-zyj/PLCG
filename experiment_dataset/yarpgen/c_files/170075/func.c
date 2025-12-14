/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170075
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
    var_16 = ((/* implicit */int) var_9);
    var_17 = var_9;
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!((!((_Bool)1)))))) != ((-(((/* implicit */int) (unsigned char)15))))));
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((long long int) (-((-(((/* implicit */int) arr_3 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
}
