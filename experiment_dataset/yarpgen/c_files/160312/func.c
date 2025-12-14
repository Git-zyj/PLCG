/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160312
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
    var_12 = ((/* implicit */unsigned int) -1996318133194272590LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                arr_6 [i_0] [10ULL] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((unsigned long long int) var_10))))));
                arr_7 [i_1] [13U] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    arr_11 [i_0] = ((/* implicit */unsigned int) var_9);
                }
            }
        } 
    } 
}
