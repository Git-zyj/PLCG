/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15701
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] = ((/* implicit */short) min(((((_Bool)0) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) var_10))))), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    var_13 = ((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-714))) >= (var_10))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) 5195328980492243044LL);
}
