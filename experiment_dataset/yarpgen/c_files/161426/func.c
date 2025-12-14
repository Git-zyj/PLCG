/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161426
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1] [i_2]))) : (var_0)))) ? (((unsigned int) arr_2 [i_2 + 2] [i_2 + 3] [(_Bool)1])) : (((/* implicit */unsigned int) ((arr_2 [i_2 + 2] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2 - 1])) != (((/* implicit */int) arr_1 [i_2 + 3]))));
                        arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_1 [7LL]);
                    }
                    arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0] [i_0])) && (((/* implicit */_Bool) 0ULL)))))) != ((~(var_7)))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? ((+(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
