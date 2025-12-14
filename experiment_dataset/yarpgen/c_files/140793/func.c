/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140793
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
    var_19 = ((/* implicit */int) var_10);
    var_20 = ((/* implicit */int) var_4);
    var_21 = ((-1) > (((/* implicit */int) (short)9200)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1 + 3] [i_2 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)13323))));
                    var_22 *= ((/* implicit */short) max(((!(arr_3 [i_1 + 1]))), (((_Bool) -1))));
                }
            } 
        } 
    } 
}
