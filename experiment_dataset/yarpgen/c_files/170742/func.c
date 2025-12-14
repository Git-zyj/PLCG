/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170742
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
    var_11 *= ((/* implicit */signed char) ((((var_7) + (2147483647))) << (((((/* implicit */int) var_5)) - (1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(-67108864))))));
                    var_13 = ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_2] [(signed char)9] [4ULL] [i_2])) ? (1497419341) : (arr_5 [2] [i_2] [i_2] [i_2]))) : (var_7));
                }
                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) -1497419341)) ? (727980525) : (-1))) + (((arr_4 [(_Bool)0] [i_1 - 2] [i_1 - 1] [i_1 - 2]) + (arr_4 [0] [i_1 - 2] [i_1 + 1] [i_1 - 2])))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_4 [8ULL] [i_1 - 3] [i_1 - 2] [0])))));
            }
        } 
    } 
}
