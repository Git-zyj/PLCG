/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128045
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
    var_18 = ((/* implicit */short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)2369))))))), (max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (!((_Bool)0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((max(((short)2376), (((/* implicit */short) (!((_Bool)1)))))), (min((min((((/* implicit */short) var_5)), ((short)26760))), (((/* implicit */short) (!(var_0))))))));
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */short) (-((-(((/* implicit */int) max((((/* implicit */short) var_14)), ((short)10402))))))));
    var_21 = ((/* implicit */short) min((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((_Bool)1), (var_14)))))), (((/* implicit */int) max((max((var_16), ((_Bool)1))), (min((var_12), (var_16))))))));
}
