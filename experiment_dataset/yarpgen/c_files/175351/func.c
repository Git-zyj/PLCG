/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175351
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
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0 + 1] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (((var_8) ^ (((/* implicit */unsigned int) var_15)))))), (((((/* implicit */unsigned int) ((var_1) % (((/* implicit */int) var_10))))) + (min((((/* implicit */unsigned int) var_15)), (var_5)))))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (max((var_12), (var_8))) : (((var_12) & (var_16))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) var_14)))), (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((((unsigned long long int) var_15)), (((var_13) & (((/* implicit */unsigned long long int) var_1))))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (max((((((/* implicit */unsigned int) var_15)) * (var_12))), ((+(var_8)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_9)))) * (((/* implicit */int) (!(var_14))))))) % ((~(min((var_16), (((/* implicit */unsigned int) var_3))))))));
        arr_12 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_12), (var_12))))));
        arr_13 [i_0] = ((/* implicit */unsigned short) var_12);
        arr_14 [i_0] = var_9;
    }
}
