/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14095
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_16)) : (var_14)));
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (short)-720)))) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
    var_22 = max((((((2146435072U) >= (0U))) ? (((var_3) ? (2147483620) : (var_10))) : (max((var_2), (var_2))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_18))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (max((((/* implicit */unsigned int) min(((signed char)7), ((signed char)-47)))), (((((/* implicit */_Bool) var_7)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1367829831U))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) + (((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(_Bool)1] [i_2 + 1])) ? (arr_2 [i_0] [i_1] [i_1]) : (268085871U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)8]))))))))));
                }
            } 
        } 
    } 
}
