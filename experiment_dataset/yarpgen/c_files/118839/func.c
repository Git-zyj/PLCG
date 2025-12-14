/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118839
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
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 += ((/* implicit */unsigned long long int) (+(4294967295U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))) / (arr_5 [i_1] [i_1 + 1] [i_1]))) << ((((+(4294967290U))) - (4294967232U)))));
                var_17 &= ((/* implicit */int) arr_6 [i_0] [i_0] [10]);
                var_18 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) & (min((((5159149858553654679ULL) | (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) 4294967295U)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(arr_10 [2U] [i_3 + 2]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] = min((6U), (((/* implicit */unsigned int) arr_10 [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
