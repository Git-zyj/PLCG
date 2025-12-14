/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113761
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)4);
                    arr_10 [i_1] [i_1] = ((/* implicit */short) max((min((var_9), (395952814))), (-2097152)));
                    var_12 = ((/* implicit */_Bool) ((int) ((int) (unsigned short)1023)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) 4194303ULL);
    var_14 = ((/* implicit */short) (unsigned short)65531);
}
