/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125197
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_18);
                                var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) 240885373)) : ((((-(1802996418262617542ULL))) / (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (signed char)37))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (signed char)53)) < (arr_9 [i_2] [i_1] [i_0 + 1] [i_0]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_1);
}
