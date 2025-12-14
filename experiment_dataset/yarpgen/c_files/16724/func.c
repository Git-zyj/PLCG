/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16724
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
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_1);
        var_20 = (((-(((/* implicit */int) arr_2 [i_0] [i_0])))) + (((/* implicit */int) arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) arr_3 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        var_22 = var_1;
                        arr_16 [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_3 + 3] [i_2 + 2] [i_3 + 3] [i_2 - 2]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) (+(((-195620306) & (((/* implicit */int) (_Bool)1))))));
        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) 8727947539317064967LL)) ? (754754506U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), ((~(var_12)))));
    }
}
