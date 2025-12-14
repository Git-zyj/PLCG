/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113057
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)97))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) 536870912U);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2] [i_2 + 1])) ? (((/* implicit */long long int) 4294967295U)) : (arr_8 [i_2 + 3] [i_2] [i_2])))) ? (((((/* implicit */_Bool) ((arr_4 [i_0 + 2] [i_1] [i_2 - 2]) + (var_18)))) ? (((long long int) (unsigned char)82)) : (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) ((11622131065321279308ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7512)))))) * (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    var_22 = ((/* implicit */int) ((long long int) ((_Bool) arr_2 [i_0])));
                    arr_10 [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((1LL) | (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)243)))) ? (arr_1 [5U]) : (((/* implicit */unsigned int) arr_4 [i_2 - 2] [i_0 - 1] [i_2])))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (unsigned short)45528))));
                }
            } 
        } 
    } 
}
