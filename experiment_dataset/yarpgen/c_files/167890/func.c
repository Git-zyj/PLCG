/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167890
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1008)) ? (((/* implicit */int) (short)-1009)) : (-1785701429)));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (+(1785701419)));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_13);
                }
            } 
        } 
    } 
    var_16 = (~(((/* implicit */int) ((18279054553189633503ULL) != (((/* implicit */unsigned long long int) var_4))))));
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 ^= ((/* implicit */short) 2586442470734157342ULL);
}
