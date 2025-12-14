/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178127
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
    var_11 = ((/* implicit */unsigned char) (signed char)-13);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_1 + 2] [i_0 + 1]))))));
                    var_12 += ((/* implicit */unsigned int) var_1);
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1 + 2]))) : (-1459203032925245066LL))) - (4582255460806730681LL)));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */long long int) var_6);
}
