/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124080
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (short)-24646)) : (-2115466777))))));
                var_12 |= ((/* implicit */unsigned int) arr_0 [10ULL]);
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((_Bool) arr_3 [(_Bool)1])))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */int) (short)-24640)) / (arr_0 [i_0]))) : (arr_0 [i_0])));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-24649)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) max((var_16), (var_8)));
        arr_8 [12LL] &= ((((/* implicit */int) (signed char)127)) & (arr_3 [(_Bool)0]));
    }
    var_17 |= ((/* implicit */_Bool) var_7);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
}
