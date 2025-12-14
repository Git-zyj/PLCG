/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109354
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) 7620626073810037098ULL);
                arr_5 [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((int) arr_0 [i_1]))))) ? ((-(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0] [(unsigned short)5] [(unsigned short)5]))))) : (min((arr_4 [i_1 + 2] [i_1 + 1]), (arr_4 [i_1 + 2] [i_1 + 1])))));
                var_17 = ((/* implicit */_Bool) arr_3 [i_0] [(signed char)12] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) (short)13627)), (2001047040U)))));
}
