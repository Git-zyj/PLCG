/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168512
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
    var_15 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) var_2);
                    var_17 = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) var_10);
                        arr_11 [i_0] [i_1] = ((/* implicit */long long int) var_1);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) var_2);
        var_21 |= ((/* implicit */signed char) var_6);
        var_22 |= ((/* implicit */short) var_2);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_10))));
    }
}
