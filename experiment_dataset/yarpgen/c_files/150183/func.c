/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150183
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = arr_2 [i_0];
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) (unsigned char)42);
                    var_15 += ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2]);
                    arr_9 [i_1] [i_1] [9] = ((/* implicit */int) (short)1730);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_5 [i_1] [i_1]))));
                }
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((1089455239U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-9044))))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1631131547U)))))) : (-1815489899));
    var_18 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2769584059U)) ? (((((/* implicit */int) (signed char)125)) + (((/* implicit */int) (unsigned char)221)))) : (min((var_0), (((/* implicit */int) var_9))))))), (var_4));
}
