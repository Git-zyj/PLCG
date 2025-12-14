/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123590
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
    var_14 ^= ((/* implicit */short) min((((/* implicit */int) ((short) min(((signed char)-9), ((signed char)108))))), ((-(((((/* implicit */int) (signed char)45)) / (((/* implicit */int) (short)-21158))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)127))))) : ((~(((/* implicit */int) (short)29581))))))) ? ((+(((/* implicit */int) (short)32762)))) : ((~(((/* implicit */int) (short)-32752))))));
                    var_15 *= ((/* implicit */short) (-((~(((/* implicit */int) min(((short)-28617), ((short)6207))))))));
                    var_16 = ((/* implicit */signed char) (short)-1);
                    var_17 = ((short) ((signed char) min(((signed char)72), ((signed char)56))));
                }
            } 
        } 
    } 
    var_18 = ((short) (+(((/* implicit */int) ((short) (short)21158)))));
    var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_7)))));
}
