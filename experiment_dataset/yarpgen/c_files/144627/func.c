/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144627
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) arr_1 [i_0 + 2]);
                    var_20 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (short)63)) != (arr_6 [i_2]))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (var_2) : (((/* implicit */long long int) (~(((/* implicit */int) (short)71))))))))));
                }
            } 
        } 
        arr_9 [2LL] = (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_22 += ((/* implicit */unsigned char) var_14);
        var_23 = arr_1 [i_3];
    }
    var_24 += ((/* implicit */int) var_17);
    var_25 = ((/* implicit */unsigned int) var_11);
}
