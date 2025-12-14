/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16717
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17585))) : (0ULL)))));
        var_16 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                    var_18 ^= (~(1735732328605669312ULL));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) 8482874461394523702ULL))) && (((/* implicit */_Bool) arr_12 [i_5 - 2] [i_5] [i_5]))));
                        var_20 -= ((/* implicit */short) var_1);
                        var_21 &= var_4;
                    }
                } 
            } 
        } 
        var_22 = arr_12 [i_3] [i_3] [i_3];
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1)) >> (((((/* implicit */int) (short)-8852)) + (8867)))));
    }
    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((12509827470477210304ULL) - (3509721697674805651ULL)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_25 *= ((/* implicit */short) (-(((/* implicit */int) var_9))));
}
