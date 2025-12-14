/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120295
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
    var_18 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_7))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_3)) << (((var_4) - (1977804996))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [9LL] [i_1] [i_1] = ((/* implicit */signed char) (+((+((+(arr_4 [i_0 - 1] [i_1])))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((((/* implicit */int) ((arr_2 [i_0] [i_1]) <= (arr_0 [i_1] [i_0 - 1])))) - (((/* implicit */int) arr_1 [3U]))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-((+(var_9)))));
                arr_9 [i_0] [i_1] = arr_2 [i_1] [i_0];
                var_20 = ((/* implicit */long long int) (-((~(min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_6)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(arr_16 [i_2])))) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_2])) ? (arr_22 [i_2] [i_6]) : (((/* implicit */int) arr_18 [0U] [i_2] [i_3] [i_4] [i_5] [14LL])))) : (((/* implicit */int) arr_14 [i_6] [i_3]))))));
                                arr_23 [i_5] [i_5] [6U] [i_2] [i_5] = ((/* implicit */unsigned char) arr_13 [i_4] [i_2]);
                                arr_24 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_5)) : (var_15))) >> (((arr_22 [i_4 - 1] [i_2]) - (511825041)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [9U] [i_6] [9U] [i_6]))) : (((((/* implicit */unsigned long long int) (-(var_8)))) & ((+(var_15)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_5)) : (var_15))) >> (((((arr_22 [i_4 - 1] [i_2]) - (511825041))) - (571457667)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [9U] [i_6] [9U] [i_6]))) : (((((/* implicit */unsigned long long int) (-(var_8)))) & ((+(var_15))))))));
                                arr_25 [i_3] |= ((/* implicit */long long int) (+(((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) var_16))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3])))))))));
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((arr_22 [21ULL] [i_2]), (((/* implicit */int) arr_12 [i_5])))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
            }
        } 
    } 
}
