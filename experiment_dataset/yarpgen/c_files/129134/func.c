/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129134
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1 - 1] [i_4] [i_3] [i_2] [i_4] [i_3] = (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) % (((/* implicit */int) (unsigned short)58322)));
                                arr_15 [i_4] [i_3] [i_2] [i_1 + 2] [i_4] = ((/* implicit */long long int) arr_2 [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_2])) ? (((/* implicit */long long int) var_0)) : (4950924571557929642LL)))) ? (arr_16 [i_1 - 1] [i_0] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) (~(arr_1 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_11))))))))));
                                arr_20 [i_1] [i_2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0] [i_1 - 3] [i_2]) : (arr_6 [i_0] [i_1] [i_2]))))));
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((long long int) var_8))))) ? (var_6) : (((((/* implicit */_Bool) arr_11 [i_1 - 4] [i_1] [i_1 - 1] [i_1] [i_1 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_1] [i_1] [(_Bool)1] [i_1 - 3] [i_1 - 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
