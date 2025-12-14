/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116986
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */unsigned char) min(((short)-20621), (((/* implicit */short) (unsigned char)213))));
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned short) var_6)), (((/* implicit */unsigned short) arr_1 [i_1]))))) ? (min(((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_14);
}
