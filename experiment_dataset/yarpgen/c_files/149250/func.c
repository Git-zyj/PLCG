/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149250
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
    var_18 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [4ULL] = ((/* implicit */short) var_9);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8586990840288655972LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-8586990840288655964LL)));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_4 - 3] = max((((/* implicit */long long int) var_14)), (((((long long int) var_17)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32661))) >= (-2753306985962226925LL)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) (unsigned char)193);
            }
        } 
    } 
}
