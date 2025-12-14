/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177678
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), (var_1)));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_1))))) ? ((-(var_9))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_13)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((((arr_4 [i_0]) <= (((/* implicit */int) arr_1 [i_0 + 3])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (min((var_9), (((/* implicit */int) arr_1 [i_1])))));
                    arr_7 [i_0 - 3] [i_1] [i_2] |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_14)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_2 [i_1] [i_1]))))));
                    var_18 = ((/* implicit */signed char) (-(max((var_2), (((/* implicit */long long int) arr_1 [i_0 + 2]))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((short) (_Bool)1)), (((/* implicit */short) ((signed char) (unsigned short)14262)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) ((var_9) < (((/* implicit */int) var_1))))))));
}
