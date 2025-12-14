/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135672
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [14ULL] [i_1] [(unsigned char)6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 2803609934891320703ULL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) min((92364395), (var_16)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_2), (((/* implicit */unsigned long long int) var_6)))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) 10110967866442144304ULL)))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_5);
}
