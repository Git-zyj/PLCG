/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138979
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
    var_20 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [(unsigned char)12] [i_0]);
        var_21 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))));
                        var_23 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) arr_12 [i_1]);
    }
    var_25 = var_3;
}
