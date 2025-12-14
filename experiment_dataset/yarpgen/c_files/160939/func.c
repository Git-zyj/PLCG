/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160939
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
    var_16 = ((/* implicit */int) ((unsigned short) var_5));
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */unsigned char) 1348185361U);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    var_20 = ((/* implicit */long long int) arr_6 [i_2 + 1] [i_2 - 1] [i_0]);
                    var_21 += ((/* implicit */signed char) arr_8 [i_2]);
                }
            } 
        } 
    } 
}
