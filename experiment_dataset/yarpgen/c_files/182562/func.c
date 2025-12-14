/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182562
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((short) var_6)))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (min((((/* implicit */long long int) arr_1 [i_2])), (var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
                        arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_8))));
                    }
                }
            } 
        } 
        var_19 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    var_20 = (!(((/* implicit */_Bool) (+(9223372036854775807LL)))));
    var_21 = ((/* implicit */short) var_11);
}
