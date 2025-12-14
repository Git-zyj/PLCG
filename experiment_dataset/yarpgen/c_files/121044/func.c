/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121044
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(short)14] &= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_6))))), (((unsigned long long int) -532570644443193326LL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */long long int) (+(min((arr_9 [i_0] [i_3] [i_3] [i_3] [i_0] [i_2]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_20 = ((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1] [i_3]))))));
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((var_4) - (((/* implicit */int) arr_2 [i_0] [i_0] [1LL]))))) : (max((((/* implicit */long long int) (unsigned short)6)), (arr_0 [i_0]))))) != (-5682739791874695695LL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [19LL] [6LL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (((((((/* implicit */_Bool) var_8)) ? (arr_11 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_5]))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63008)) - (((/* implicit */int) (_Bool)1)))))))));
                arr_17 [10] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> ((((-(((/* implicit */int) var_9)))) + (12062))))));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) var_3))))) >> (((((/* implicit */int) var_13)) - (9349)))));
}
