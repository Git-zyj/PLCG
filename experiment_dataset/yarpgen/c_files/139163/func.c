/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139163
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
    var_16 = ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */signed char) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_4))));
        arr_2 [i_0] = var_15;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_15))))));
                        arr_13 [i_0] [i_1] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */int) var_15);
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_17 [(signed char)2] [i_4] &= ((/* implicit */_Bool) var_9);
        arr_18 [i_4] = ((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((arr_4 [i_4] [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))) >> (((arr_11 [(_Bool)0] [i_4] [i_4] [i_4] [i_4] [i_4]) + (1908528083))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) arr_11 [i_4] [0] [i_4] [i_4] [i_4] [i_4]))))) ? (min((((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])), (arr_4 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_15))));
    }
}
