/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137646
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
    var_12 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
    var_13 = ((/* implicit */short) (~((~(((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_8);
                arr_7 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 - 1]))) : ((-(arr_3 [i_1 + 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (~(((unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
}
