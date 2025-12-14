/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145304
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [(short)17] [(short)17] [i_1] = arr_3 [i_0];
                var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3125459544U)))))));
                var_11 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    var_12 = ((/* implicit */short) (unsigned short)58313);
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_9)))) && (((/* implicit */_Bool) (unsigned short)23524)))))));
}
