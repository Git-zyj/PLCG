/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171277
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [(unsigned short)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_7)))));
                var_20 = ((/* implicit */short) 2194819054U);
                arr_8 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(-1387142916)))), (4294959104U)));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)4)));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (min((var_6), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))))))));
}
