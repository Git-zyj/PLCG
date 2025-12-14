/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152126
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
    var_19 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */int) ((signed char) var_8)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned int) (short)-32759))));
                var_21 = ((/* implicit */int) ((arr_4 [i_0]) == ((+(((/* implicit */int) (short)32754))))));
                var_22 = (i_0 % 2 == 0) ? (((/* implicit */signed char) (-(max((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - (7751295159683917908ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (signed char)(-127 - 1))))))))))) : (((/* implicit */signed char) (-(max((((arr_1 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0]) - (7751295159683917908ULL))) - (9014089595266745549ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (signed char)(-127 - 1)))))))))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_17)))) ? ((-(134217727))) : (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) (-(arr_4 [i_0])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_17);
}
