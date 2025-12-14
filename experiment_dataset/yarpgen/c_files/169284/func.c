/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169284
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) var_5))), (((((min((arr_8 [i_2] [i_2] [i_1] [(signed char)8]), (((/* implicit */int) arr_3 [(unsigned short)14])))) + (2147483647))) >> (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-10))))))));
                    arr_10 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_14 *= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1]))) > (min((((/* implicit */long long int) arr_3 [i_0])), (5256410265395402751LL)))))), (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 2]))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [(signed char)8] [(signed char)8] [i_2 + 1])), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [6ULL] [9LL])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) var_7)) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : (2873218054U)))))));
                }
            } 
        } 
    } 
}
