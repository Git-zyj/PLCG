/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152648
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
    var_16 = ((/* implicit */int) (signed char)24);
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * ((~(((/* implicit */int) var_14))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-19)), (arr_3 [i_1])))), (max((((((/* implicit */int) (short)10860)) * (((/* implicit */int) (signed char)-60)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-38)) : (arr_6 [i_0] [i_0] [9] [i_1])))))));
                    var_18 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (!(var_11)))))), (((/* implicit */int) var_9))));
    var_20 = ((/* implicit */signed char) ((var_11) ? (((((/* implicit */unsigned int) ((-1617624754) * (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20353))) * (var_8))))) : (((/* implicit */unsigned int) -1))));
}
