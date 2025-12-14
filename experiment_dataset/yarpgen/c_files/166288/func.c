/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166288
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) var_11);
                    var_20 ^= ((/* implicit */_Bool) ((((var_15) && (((/* implicit */_Bool) var_11)))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_1 [i_0 + 1])))))));
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 1])))), ((~((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29236)) ? (((/* implicit */unsigned long long int) -17LL)) : (1101051024195735264ULL)));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */int) (short)31456)) >> (((((/* implicit */int) var_18)) + (33))))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_16)))))));
}
