/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172245
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 += ((short) ((short) ((((/* implicit */_Bool) (short)22890)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_1 [i_0])))));
                var_12 = ((/* implicit */short) min((var_12), (((short) ((short) ((short) arr_1 [i_1 + 1]))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                            var_14 = ((short) ((short) ((short) arr_7 [i_1])));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((var_15), ((short)32759)));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) var_5)))))))))));
}
