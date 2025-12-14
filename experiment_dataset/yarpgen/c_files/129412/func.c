/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129412
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) : (((/* implicit */int) var_12))));
                arr_6 [i_1] [i_1] [3LL] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
                            var_21 ^= ((/* implicit */int) -7242302210416875028LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_18 [6LL] [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 253609661U))) + ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 14; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_23 [(short)8] [i_7] [i_7] [(short)8] [i_7] &= ((/* implicit */unsigned int) (short)824);
                                var_23 = ((/* implicit */unsigned int) ((long long int) (+(7242302210416875027LL))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((unsigned long long int) (short)16617)) * (((/* implicit */unsigned long long int) -7242302210416875027LL))))));
                                var_25 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_22 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [14])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_16)) == (var_18)));
}
