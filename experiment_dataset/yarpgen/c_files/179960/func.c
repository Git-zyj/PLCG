/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179960
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) var_7);
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) var_10);
        var_13 = var_1;
        var_14 = ((/* implicit */unsigned short) var_10);
        var_15 = ((/* implicit */unsigned short) var_4);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) var_10);
        arr_5 [12] &= ((/* implicit */short) var_7);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) var_11);
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_11))));
            var_19 = ((/* implicit */int) var_8);
        }
    }
    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) var_0);
        var_21 = ((/* implicit */unsigned int) var_0);
        var_22 = ((/* implicit */unsigned char) var_3);
    }
    /* vectorizable */
    for (short i_4 = 3; i_4 < 10; i_4 += 4) 
    {
        var_23 = ((/* implicit */_Bool) var_2);
        var_24 = ((/* implicit */_Bool) var_2);
        var_25 = var_10;
    }
    var_26 = ((/* implicit */unsigned short) var_8);
    var_27 = ((/* implicit */short) var_4);
    var_28 = ((/* implicit */signed char) var_1);
    var_29 = var_7;
}
