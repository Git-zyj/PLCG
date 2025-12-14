/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106364
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
    var_13 ^= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_3))))));
    var_14 = ((unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (((unsigned long long int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))) ? (((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (arr_0 [i_0] [i_0]))) : (((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : ((~(((/* implicit */int) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_0])))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (arr_3 [(short)6]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                var_15 ^= (+(((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_1])) > (arr_0 [i_0] [i_1])))))));
                arr_8 [i_0] = ((long long int) ((arr_4 [i_1] [i_1]) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0])))));
                arr_9 [i_1] = ((/* implicit */unsigned short) (-((~(arr_2 [i_0] [i_1])))));
            }
        } 
    } 
}
