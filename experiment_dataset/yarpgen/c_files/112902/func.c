/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112902
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) 8521215115264LL))));
    var_13 = ((/* implicit */unsigned int) (~(var_5)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 |= (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_10)) : (var_3)))))) ? (((((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) 125829120)) && (((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_1]))))))) : (((/* implicit */int) (signed char)110)));
                var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) / (((unsigned int) arr_3 [i_1] [i_1] [(short)8]))))) || (((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-15470)), (((unsigned int) (unsigned char)179))));
}
