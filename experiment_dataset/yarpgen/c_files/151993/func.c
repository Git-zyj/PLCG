/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151993
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) (-(max((var_1), (((/* implicit */long long int) max((2080374784U), (2080374784U))))))));
                arr_6 [(unsigned char)6] &= ((/* implicit */short) arr_3 [(unsigned char)12]);
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-84))))) : (2147483647)));
                arr_8 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)14617))))), (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14605)) ? (min((min((((/* implicit */int) var_10)), (-760481856))), ((~(((/* implicit */int) (signed char)28)))))) : (((/* implicit */int) var_3))));
}
