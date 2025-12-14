/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123732
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned short) var_3)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))) ? (((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2])) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) arr_0 [i_1]))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-10576)), (((unsigned long long int) arr_2 [i_0 - 1] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (-(((unsigned long long int) 18446744073709551603ULL))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) (signed char)(-127 - 1));
    var_21 ^= ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) var_17);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (short)12725))) : (((/* implicit */int) ((unsigned short) var_12)))))) > (((unsigned int) arr_9 [i_4 - 2]))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_4 - 1]))) : (max((var_1), (arr_12 [i_4 + 2]))))))));
                }
            } 
        } 
    } 
}
