/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178668
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (-(arr_1 [i_0] [i_1]));
                    arr_8 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) -715034349616270514LL);
                    var_10 = ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
        var_11 = ((/* implicit */_Bool) (~(arr_2 [i_0 + 1])));
    }
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_4)));
}
