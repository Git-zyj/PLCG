/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160061
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2])) & (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((var_0) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_0])) + (64))) - (17)))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3])))));
                                var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-85)), (var_6)))) ? (arr_7 [i_2 - 4] [i_2 + 1] [i_2 - 3] [i_2 - 2]) : (((/* implicit */unsigned int) 149416918))))));
                                var_13 = ((/* implicit */_Bool) arr_10 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2]);
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] = (~(((/* implicit */int) (unsigned char)4)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2] [i_2]))));
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
}
