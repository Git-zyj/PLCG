/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18056
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = (+(((((/* implicit */int) arr_3 [i_2 + 1])) + (((/* implicit */int) var_11)))));
                                var_15 ^= ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned int) max(((short)-1), (((/* implicit */short) (unsigned char)9))));
                    arr_12 [i_2] [i_1] [(short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2] [i_2 - 1])) ? (arr_10 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned char)101))) + (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */int) var_13)) != (((/* implicit */int) var_2)));
}
