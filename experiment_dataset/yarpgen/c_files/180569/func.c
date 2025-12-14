/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180569
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
    var_17 = ((/* implicit */int) 757583185U);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [10U] [i_1] [6U] [i_1] |= ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)31973)) / (520093696))), (((/* implicit */int) ((1969716146) > (-520093697))))));
                    var_18 ^= ((/* implicit */signed char) arr_4 [i_1 + 2] [14LL] [i_1] [i_2]);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : ((+(arr_0 [i_0])))));
                    var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)20)) : (-2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4294967290U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))) & (var_4))))));
                    arr_9 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 2] [i_0] [i_2] [i_2])) >> (((((/* implicit */int) var_9)) - (29)))))) ? (((((/* implicit */_Bool) ((-1258677713) % (520093686)))) ? (((/* implicit */int) (unsigned short)33570)) : (0))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > ((+(((/* implicit */int) arr_4 [i_2 + 3] [i_0] [i_0] [i_0])))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2 - 2] [i_0] [i_2] [i_2])) + (2147483647))) >> (((((/* implicit */int) var_9)) - (29)))))) ? (((((/* implicit */_Bool) ((-1258677713) % (520093686)))) ? (((/* implicit */int) (unsigned short)33570)) : (0))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > ((+(((/* implicit */int) arr_4 [i_2 + 3] [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
}
