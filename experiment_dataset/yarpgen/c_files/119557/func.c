/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119557
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0]) | (arr_9 [i_0] [i_1] [i_2] [i_0] [i_3]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)0)), (4294967295U))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((_Bool) min((arr_11 [i_2] [i_0 - 2] [i_0] [i_0]), (arr_11 [i_3] [i_0 + 2] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_17 |= var_0;
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 4338146905080613474LL)))))) - (var_6)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */short) ((max((var_1), (((/* implicit */long long int) ((var_2) <= (var_5)))))) > (((/* implicit */long long int) var_7))));
}
