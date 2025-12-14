/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138679
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_5 [i_1])))) : (((/* implicit */unsigned int) ((arr_5 [i_1]) & (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)8])))))))));
                arr_7 [i_0] |= ((((/* implicit */long long int) arr_5 [i_0])) * (min((((/* implicit */long long int) (signed char)83)), (4768399558331694041LL))));
                arr_8 [i_1] [i_1] [3LL] = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_1);
}
