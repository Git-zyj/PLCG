/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167883
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
    var_13 -= (short)13451;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 238009406)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (var_1))) : (((((/* implicit */_Bool) var_9)) ? (4762916241398711881ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3565581936141349680LL)));
                arr_7 [i_0] [i_0] = (unsigned char)0;
                var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (min((((/* implicit */unsigned int) var_12)), (arr_2 [i_0]))) : (((unsigned int) arr_2 [i_0]))));
                var_16 = ((/* implicit */signed char) (~((-(arr_2 [i_1])))));
                var_17 -= ((/* implicit */short) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) ((_Bool) var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) min(((unsigned char)48), (((/* implicit */unsigned char) var_3))))), (arr_10 [i_2])))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) var_5);
                                arr_22 [i_2] [7LL] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))), (min((arr_1 [i_2]), (arr_1 [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
