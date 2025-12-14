/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12199
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_20 = (+(var_9));
        var_21 += ((/* implicit */unsigned int) min((min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (-1112314712288808247LL)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0])), (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((4189696808868062474LL) <= (((/* implicit */long long int) 3493235584U))));
                var_22 = ((/* implicit */_Bool) ((arr_3 [i_1] [i_2 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_1])))));
            }
        } 
    } 
}
