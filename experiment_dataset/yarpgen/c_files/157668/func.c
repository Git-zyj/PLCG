/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157668
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
    var_19 *= ((/* implicit */unsigned short) var_10);
    var_20 = ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)112)) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_1 [i_0]))));
                    var_24 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [16ULL]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_3 - 2] [i_3 - 2]);
        var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)3))));
    }
}
