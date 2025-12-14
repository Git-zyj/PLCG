/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141645
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((unsigned long long int) 0)))) >= (((/* implicit */int) (short)32750))));
                    arr_8 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)38884))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_10);
}
