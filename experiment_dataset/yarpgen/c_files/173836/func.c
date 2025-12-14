/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173836
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = min((((/* implicit */long long int) (+(((/* implicit */int) min((var_11), (var_11))))))), (min((((/* implicit */long long int) arr_1 [i_0])), (-8505684444077498750LL))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */_Bool) 9223372036854775807LL);
                        arr_10 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-32766))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)0), ((signed char)0))))));
        arr_15 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
    }
    var_18 = var_0;
    var_19 = ((/* implicit */signed char) var_14);
}
