/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164743
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((1671351383) > (((/* implicit */int) (signed char)-59)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_3 + 1] [(_Bool)1] [i_4] = ((signed char) (-(2145740204U)));
                                var_16 = ((/* implicit */signed char) (((-((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 + 4] [i_3 - 1] [(_Bool)1])))))) >= (((/* implicit */int) (((+(((/* implicit */int) var_1)))) <= (arr_5 [i_1] [i_1] [i_2] [i_1]))))));
                                arr_12 [(short)10] [i_4] [i_2 + 1] [(short)10] [i_3 + 1] &= ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [(_Bool)1] [i_1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            {
                arr_19 [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_18 [i_5])), (1573495006U)));
                arr_20 [i_5] [i_5] &= ((/* implicit */unsigned char) min((((2145740221U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((2145740198U) >> (((2149227073U) - (2149227057U)))))));
            }
        } 
    } 
}
