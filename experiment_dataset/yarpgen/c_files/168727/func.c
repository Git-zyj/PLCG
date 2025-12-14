/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168727
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
    var_20 = (short)0;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = (signed char)25;
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_22 -= ((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)));
                    arr_9 [i_2] = max((((_Bool) max(((short)-32731), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_2])), ((short)0)))) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)32744)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((/* implicit */int) max((var_18), (var_18)))), ((-(((/* implicit */int) var_12))))));
}
