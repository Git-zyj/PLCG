/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15931
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((int) ((_Bool) var_6)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_14 *= ((/* implicit */_Bool) ((signed char) ((long long int) var_10)));
                    var_15 = ((/* implicit */int) ((short) ((int) -1)));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((int) -11)));
                    arr_10 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((signed char) ((short) var_11)));
                }
                for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((signed char) ((short) arr_4 [i_0] [i_1] [i_0])));
                    var_16 = ((short) ((short) arr_11 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]));
                }
                var_17 = ((short) ((short) arr_12 [i_0] [i_1] [i_0 - 1] [i_0]));
            }
        } 
    } 
    var_18 = ((long long int) ((int) ((short) 4)));
    var_19 = ((/* implicit */int) var_3);
}
