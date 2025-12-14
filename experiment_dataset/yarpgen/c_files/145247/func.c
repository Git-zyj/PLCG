/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145247
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_17 += ((/* implicit */int) (unsigned char)220);
                        arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (880525376050553446LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_2] [i_2]))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 - 2] [i_1])) * (((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))));
                    }
                } 
            } 
        } 
        var_18 *= (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [20U])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))) : ((+(18446744073709551615ULL)))));
    }
    var_20 = ((/* implicit */unsigned char) var_1);
}
