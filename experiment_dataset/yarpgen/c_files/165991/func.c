/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165991
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) 17958118176045790629ULL);
                var_18 -= ((/* implicit */unsigned short) arr_1 [i_0]);
                var_19 = (~(((arr_3 [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 4])))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), ((((+(((/* implicit */int) var_14)))) >> (((((/* implicit */int) var_13)) + (31501)))))));
}
