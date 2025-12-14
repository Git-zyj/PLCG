/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173951
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
    var_20 = ((/* implicit */int) var_7);
    var_21 += ((/* implicit */_Bool) ((signed char) var_15));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] = min((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_18)))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)))))), ((+((+(((/* implicit */int) (unsigned char)107)))))));
                arr_5 [i_0] [i_1 - 1] [i_0] &= (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)42)) : (1868064473)))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))))) : (var_11))))));
}
