/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146249
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
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_1]))) : (((/* implicit */int) arr_2 [i_0] [i_1])))) < (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440))) : (17U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [(signed char)3])))))));
                var_20 = ((/* implicit */int) arr_3 [i_0] [(short)8]);
                arr_6 [i_1] = ((/* implicit */int) arr_3 [6U] [i_1]);
            }
        } 
    } 
}
