/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11413
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) <= (2374532955872642014LL)));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 -= ((/* implicit */unsigned char) (+(min((((((/* implicit */int) (unsigned char)173)) << (((((/* implicit */int) var_10)) - (29946))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
}
