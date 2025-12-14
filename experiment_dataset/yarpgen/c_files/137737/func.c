/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137737
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [10LL] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [2ULL])))))))) : (((/* implicit */int) var_14))));
                    arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)11])))))))) >> ((((((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((9223372036854775807LL) >> (((((/* implicit */int) arr_3 [i_0])) - (66))))) : (min((-9223372036854775803LL), ((-9223372036854775807LL - 1LL)))))) - (-9223372036854775804LL))) + (35LL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_7)) == (((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-32764)) + (32791)))))))) >> (((/* implicit */int) (_Bool)1))));
}
