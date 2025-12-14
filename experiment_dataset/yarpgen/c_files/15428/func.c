/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15428
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 605516258)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (signed char)-125)))))))) ? (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) - (((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (598296985752360131ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) / (8141115886261456120LL)))));
}
