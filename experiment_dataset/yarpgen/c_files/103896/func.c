/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103896
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [(short)6] [(short)9] [(short)2] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 - 1] [i_0 - 1])))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [(short)10]))))) ? (max((((((/* implicit */int) arr_4 [(short)10] [i_0] [i_0])) * (((/* implicit */int) (short)-1)))), (((/* implicit */int) min(((short)32760), ((short)9866)))))) : ((-(((/* implicit */int) (short)-7622))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) var_13)) * (((((/* implicit */int) var_4)) / (((/* implicit */int) (short)23885)))))) : (((/* implicit */int) var_3))));
    var_22 = ((/* implicit */short) (~(((/* implicit */int) max(((short)-32761), ((short)-32760))))));
    var_23 = ((/* implicit */short) max((((((/* implicit */int) max(((short)-30820), (var_7)))) == ((+(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4))))));
}
