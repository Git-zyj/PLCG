/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125676
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
    var_20 = ((((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_5)) < (((((/* implicit */int) var_17)) << (((((-2085470393) + (2085470423))) - (18))))))))));
    var_21 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_3)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) arr_9 [i_4] [i_3])))) ? (((/* implicit */unsigned int) ((var_4) | (((/* implicit */int) arr_8 [i_1] [i_2]))))) : (((unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6376)) > (((int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = min((min((-2085470372), (-2085470411))), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)6373)) : (var_4))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]), (((/* implicit */int) (short)6370))))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4])) : ((~(arr_5 [i_2] [i_4])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_17))) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_6])) : (((((/* implicit */_Bool) arr_0 [i_5])) ? (1787268956U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) == (((((/* implicit */long long int) (+(var_1)))) / (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) arr_9 [i_0] [i_2])) : (arr_13 [i_1] [i_1] [i_1] [i_5] [i_6] [i_2] [i_1])))))));
                                var_23 = ((/* implicit */unsigned int) (+(2085470404)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((var_11) == ((-(((/* implicit */int) min((var_12), (var_12))))))));
}
