/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188213
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned short)14] [(unsigned short)14] [i_2] [i_2] |= ((((/* implicit */_Bool) ((int) (+(var_10))))) ? (((((/* implicit */unsigned long long int) 1827498755158594789LL)) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))));
                                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 2])) * (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    var_16 = (~(((/* implicit */int) var_5)));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(arr_1 [i_1 - 4])))) + (((((/* implicit */_Bool) 16821662095832570912ULL)) ? (1827498755158594789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35753)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */int) var_3))))) ? (max((var_6), (((/* implicit */int) (unsigned short)35753)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_4)))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? (var_1) : (451839209))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (min((var_11), (((/* implicit */long long int) var_3))))));
    var_19 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)17392)), ((unsigned short)29795))))))));
}
