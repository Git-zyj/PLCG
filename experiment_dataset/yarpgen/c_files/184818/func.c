/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184818
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (18446744073709551610ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [18] [i_4] [i_2] [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 75940009)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (8298726979824355682LL))) - (65LL))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (short)29527)) : (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_3])))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */short) (((!(arr_10 [i_0] [i_1] [i_2] [i_2]))) ? (((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2])) + (((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_2])))) : ((~(((/* implicit */int) (unsigned char)65))))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-100)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1863657795)) || (var_11)))), ((((_Bool)1) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_23 &= ((((/* implicit */int) ((short) (_Bool)1))) + (min((((/* implicit */int) (unsigned char)75)), (max((var_6), (((/* implicit */int) var_3)))))));
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)28026)))));
    var_25 = ((/* implicit */unsigned char) ((long long int) 1499546883));
}
