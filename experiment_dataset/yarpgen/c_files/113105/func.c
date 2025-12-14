/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113105
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
    var_14 = ((/* implicit */unsigned short) max((max((var_10), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_13)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1212750641))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (signed char)80))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */short) 2721841138U);
                    var_16 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(short)2] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2721841138U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_1 [i_1] [(signed char)14])) ? (2721841138U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20046))))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2721841160U)) : (1991244701503059725ULL))))) ? (((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_7)))))) : (-1701999450)));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) 1628073678))));
}
