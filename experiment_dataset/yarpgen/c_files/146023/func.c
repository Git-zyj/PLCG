/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146023
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
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) (short)-28526)), (((((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) (unsigned char)95)) - (76)))))) ? (5678625669775414553LL) : (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_6)))))))));
    var_16 |= ((/* implicit */short) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))), (-1598605656057117059LL)))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_3] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [0LL] [(signed char)16])))))));
                                arr_16 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */signed char) -820770378);
                                var_19 = ((/* implicit */long long int) min((var_19), (max(((-(min((((/* implicit */long long int) (short)-14820)), (2296835809958952960LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (14ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_6 [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)42)))))))) : (((unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)17] [i_1] [i_1])))))));
                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(short)14] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
}
