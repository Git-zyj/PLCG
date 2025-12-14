/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115112
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((var_13) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)26553)))))) : ((+(((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_2 - 1]))))));
                                var_17 = ((/* implicit */unsigned char) (short)-28875);
                                var_18 -= ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [i_3] [i_0] [i_1] [i_0]))))))) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (max((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [9] [i_1] [i_2])), (arr_9 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 + 3] [i_2 + 3]))));
                                arr_13 [i_4] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) min((var_10), ((!(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (arr_11 [i_0] [i_0] [i_0] [2U] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (unsigned char)81);
}
