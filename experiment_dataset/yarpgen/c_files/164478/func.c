/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164478
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) arr_5 [i_0 - 3] [i_0 - 3]);
                    var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 3]), (arr_3 [i_2 - 2] [i_0 - 2] [i_0 + 2]))))));
                    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (max((var_3), (((/* implicit */long long int) (signed char)127)))))), (((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)-101)))), ((~(((/* implicit */int) (unsigned short)11)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    var_15 -= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-127)), (0U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) min((var_10), ((short)-31965))))))));
    var_16 = ((/* implicit */short) var_2);
}
