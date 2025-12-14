/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153639
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
    var_16 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (max((((/* implicit */unsigned int) var_0)), (var_12)))))), (((((((/* implicit */long long int) var_0)) > (var_3))) ? (((var_9) ? (var_15) : (var_15))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_15)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2])), (var_10)))));
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)8] = ((/* implicit */int) (-(13855788623379403036ULL)));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)190)))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [i_1] [i_0])), (arr_4 [i_2] [(_Bool)1]))), ((~(((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_2]))))))) ? (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */short) arr_9 [i_2])))))) : (min((((/* implicit */unsigned int) var_6)), (var_10))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_9), (var_6)))))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) ((var_0) <= ((-(((/* implicit */int) var_14))))));
}
