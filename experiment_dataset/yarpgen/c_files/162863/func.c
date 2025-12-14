/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162863
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
    var_20 = ((/* implicit */int) ((long long int) var_8));
    var_21 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned char) var_17);
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned short) var_16));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1 + 1] = ((/* implicit */int) arr_5 [i_2] [i_0]);
                    var_23 = ((/* implicit */int) var_0);
                    arr_12 [i_0] = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((+((~(var_8))))) >> (((var_4) - (477181999U))))))));
    var_25 = var_15;
}
