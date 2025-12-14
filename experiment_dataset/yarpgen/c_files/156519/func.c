/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156519
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
    var_20 -= (signed char)-44;
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) 8190585473528620643LL);
        arr_4 [i_0] [i_0] = ((/* implicit */int) (signed char)-47);
        var_21 -= (signed char)-23;
        arr_5 [i_0] = (signed char)46;
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) -194551690))));
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_23 = 1407588384;
            arr_10 [i_1] [i_1] [i_1] &= (signed char)-65;
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_13 [i_1] [i_1] [i_3] = ((/* implicit */int) (signed char)112);
            arr_14 [i_1] [i_3] [i_3] = -305239807;
        }
        var_24 -= (signed char)-46;
    }
}
