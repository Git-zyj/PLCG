/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163984
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
    var_18 = ((/* implicit */unsigned char) 3749906057U);
    var_19 = ((/* implicit */short) min(((unsigned char)135), ((unsigned char)17)));
    var_20 *= ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_3 [i_2] [6]);
                    var_22 = ((/* implicit */unsigned short) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_1 [i_2] [i_0])))) + (((/* implicit */int) arr_4 [4ULL] [i_2]))));
                    arr_9 [2ULL] [i_2] [i_2] = ((/* implicit */signed char) (~(arr_3 [i_0] [(short)11])));
                }
            } 
        } 
    } 
}
