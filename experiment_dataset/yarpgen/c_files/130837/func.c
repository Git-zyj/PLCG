/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130837
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
    var_20 = ((/* implicit */unsigned int) (+(min((var_14), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (3333656613U))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) (((-(((/* implicit */int) max(((_Bool)1), (arr_0 [i_0])))))) & (((/* implicit */int) max((min((arr_0 [i_0]), (arr_0 [7ULL]))), (((_Bool) arr_1 [i_0])))))));
        var_22 ^= arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) arr_2 [(short)19])));
                    arr_8 [i_0] [i_2] [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_2 - 2])))));
                }
            } 
        } 
    }
}
