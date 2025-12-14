/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155018
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
    var_16 = ((min((max((4U), (3028253596U))), ((~(3028253596U))))) & (((/* implicit */unsigned int) var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) & ((~(((int) arr_2 [(short)8] [i_1 + 2] [i_0 - 3]))))));
                var_18 = min((((/* implicit */short) ((arr_3 [(unsigned char)6] [i_0 - 1] [i_0 - 3]) == (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [(short)7] [i_1] [i_1])), (var_8))))))), (((short) var_11)));
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) 3028253596U)) ? (((/* implicit */int) (signed char)85)) : (((((/* implicit */int) (signed char)85)) * (((/* implicit */int) (signed char)-85)))))) & (((/* implicit */int) ((((/* implicit */long long int) (~(var_15)))) == ((-(var_7)))))));
    var_20 = ((/* implicit */unsigned char) var_14);
}
