/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106020
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
    var_20 |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)72)))))))) + (((/* implicit */int) ((signed char) var_0)))));
    var_21 = ((/* implicit */unsigned char) ((short) ((signed char) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_15)) + (((/* implicit */int) var_13)))) - (((var_0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-8979))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1 - 2] [i_3] [i_3] [i_1] = ((/* implicit */int) ((((unsigned long long int) ((short) var_2))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_1])) : (((/* implicit */int) var_13))))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_4))) : (min((((/* implicit */unsigned long long int) (short)-21779)), (var_18)))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)4))))) ? (((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)60))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))))))) - ((-(2657307110713485511LL)))));
                            var_24 |= ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
