/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118428
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
    var_20 = ((/* implicit */unsigned short) var_18);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_1)), (var_8))), (((/* implicit */long long int) var_15))))) * (var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_5))), (max((arr_4 [i_0 + 1] [i_0 + 1]), (var_18)))))), (var_14)));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))))) && (((/* implicit */_Bool) ((arr_5 [i_1] [i_0]) ? (((/* implicit */long long int) var_6)) : (var_8))))))))));
                arr_7 [i_1] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (var_18));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) arr_5 [i_0] [i_1])), (var_4))))), (arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_19);
}
