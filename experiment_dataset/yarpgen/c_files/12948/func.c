/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12948
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
    var_11 = var_4;
    var_12 = ((/* implicit */unsigned int) ((int) var_8));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) (((+(((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))) * (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */int) var_7)) / (1353319326))))))));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)6498)) << ((((((((-2147483647 - 1)) - (-2147483644))) + (24))) - (4)))))) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])) : (min((var_8), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1])))), (((arr_8 [i_0] [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1])))))))));
                    var_14 = ((/* implicit */int) (_Bool)1);
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (short)4502)) / (((/* implicit */int) ((short) arr_4 [i_2])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (max((var_9), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10955))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_2), (var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_10)))))))));
    var_17 = ((/* implicit */int) (short)-6499);
}
