/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15326
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min(((-((~(1350592152U))))), (((/* implicit */unsigned int) min(((~(-274783100))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_2))))))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) (~(606232189)))) : ((~(arr_3 [i_1])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1716654256)))))))) : (4041152549U))))));
            }
        } 
    } 
    var_17 = (+(var_10));
}
