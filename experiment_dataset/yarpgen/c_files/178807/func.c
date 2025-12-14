/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178807
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((var_8), (min((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_14)))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_19)))));
                    arr_7 [i_1] [i_0] = ((((((/* implicit */int) (signed char)-80)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)125)) - (119))));
                    arr_8 [i_0] = ((/* implicit */_Bool) var_17);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_4 [i_0 - 1] [i_0] [i_0]))))));
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)131)) >> (((((/* implicit */int) (unsigned char)40)) - (26)))))))) ? ((~(max((var_1), (((/* implicit */unsigned int) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) var_3))))))))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((var_17), (var_17))))));
}
