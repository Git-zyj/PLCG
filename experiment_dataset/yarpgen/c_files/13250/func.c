/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13250
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
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 2] &= ((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_0 + 1])) && (((/* implicit */_Bool) (unsigned short)53172)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [(unsigned short)2] [i_0 + 1] [(_Bool)1])) < (((((/* implicit */_Bool) 1149069132)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) == (((/* implicit */int) var_13))))) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((+(var_12))) < (((((/* implicit */int) var_7)) + (1149069132))))))));
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) > (var_2))))), (max((var_10), (2147483647)))));
}
