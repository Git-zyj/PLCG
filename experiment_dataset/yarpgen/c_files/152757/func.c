/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152757
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
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((arr_1 [i_0]) - (3231046671089489934LL)))))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60335))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (var_8)));
                                var_18 = ((/* implicit */long long int) max((arr_11 [(_Bool)1]), (arr_9 [0LL])));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_2);
}
