/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157770
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) ((signed char) (unsigned short)41944));
                var_11 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_7)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [1U])))))) % (arr_1 [i_0 + 1] [i_0]))) : (min((arr_3 [i_0]), ((+(var_9))))));
                var_12 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 10641265312530369283ULL)) ? (1609238537U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)2] [i_1]))))))), (((var_7) + (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned int) ((short) var_1)))));
    var_14 = ((/* implicit */int) 831360705U);
}
