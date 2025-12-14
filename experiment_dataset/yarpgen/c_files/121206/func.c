/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121206
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
    var_20 = ((/* implicit */unsigned short) var_19);
    var_21 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(short)4] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) arr_0 [(unsigned short)16])) : (((/* implicit */int) arr_0 [(_Bool)1]))))) ^ (((((/* implicit */_Bool) arr_0 [0])) ? (arr_3 [i_0]) : (arr_3 [i_1])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
}
