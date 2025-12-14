/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154216
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
    var_19 &= ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((signed char) arr_5 [i_0 + 1] [i_0 + 1] [i_1]));
                    arr_9 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_4)) ^ ((-(((/* implicit */int) (unsigned short)36718)))))) + (2147483647))) << ((((((~(((/* implicit */int) (_Bool)0)))) + (27))) - (26)))));
}
