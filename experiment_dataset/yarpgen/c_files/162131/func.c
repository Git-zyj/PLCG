/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162131
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
    var_18 += ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_6 [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_19 |= ((/* implicit */long long int) (+(var_4)));
                        var_20 = arr_8 [0] [i_1];
                    }
                } 
            } 
        } 
    }
}
