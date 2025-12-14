/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109198
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((16LL) | (arr_5 [i_1])))) ? (arr_4 [2LL] [i_1]) : ((+(arr_5 [i_0])))))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((arr_1 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (_Bool)1))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) ((((_Bool) arr_0 [i_1])) ? (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_2])))) : ((~(((/* implicit */int) var_3))))));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)-1)) + (1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((arr_3 [i_0] [i_0] [i_2]) | (arr_4 [i_0] [i_2]))), (((arr_5 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    var_15 += ((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) arr_1 [i_0])), (arr_5 [i_0]))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) << (((((var_5) + (510586300292758095LL))) - (31LL)))));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) -4734976822828568987LL)))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (-2584684407567535429LL))))));
    var_19 = ((/* implicit */signed char) var_5);
}
