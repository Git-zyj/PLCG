/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149133
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_10)) : (var_2))) : (((((/* implicit */_Bool) 264750534U)) ? (((/* implicit */long long int) var_18)) : (0LL)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((unsigned char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((unsigned char) (unsigned char)64));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_2 - 1] = ((/* implicit */unsigned short) var_2);
            var_21 = ((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 + 2]);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_2 - 1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 18374686479671623680ULL))) ? (((/* implicit */unsigned long long int) arr_6 [i_4])) : (var_5)));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (short)569))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_2 + 1]))));
        }
        var_24 = ((/* implicit */int) var_16);
    }
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_15))));
    var_26 = ((/* implicit */short) var_8);
    var_27 &= (-(((((/* implicit */_Bool) ((unsigned short) var_16))) ? (((/* implicit */long long int) var_18)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (1LL))))));
}
