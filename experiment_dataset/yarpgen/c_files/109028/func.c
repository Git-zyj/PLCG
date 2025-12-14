/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109028
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) 2853416524U);
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) != (-1395672892292864041LL)));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_13)))))), ((signed char)22)));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(4294967284U)));
        var_19 = ((/* implicit */unsigned int) var_3);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) 18446744073709551615ULL))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_15 [10LL] [7] [7] = var_15;
                    arr_16 [i_2] [10LL] [i_2] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) & (4294967284U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) var_8))))) ? (-7230567580009891527LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6796798052280100208LL)) ? (var_10) : (var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_23 = ((/* implicit */int) 4211084891837838192ULL);
}
