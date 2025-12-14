/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188532
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
    var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))) : (min((arr_0 [i_0]), (2305843009213693952LL))));
        var_22 = arr_0 [i_0];
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) arr_2 [i_2] [i_1]);
                var_24 = ((/* implicit */long long int) var_13);
                var_25 = arr_0 [i_2];
            }
        } 
    } 
}
