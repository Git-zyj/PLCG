/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114662
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)4))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) -857242488)) ? (((/* implicit */unsigned int) -857242494)) : (4294967295U))))));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((857242488) - (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))) : (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))))))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) 857242508)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */long long int) max((max(((~(((/* implicit */int) var_5)))), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -857242494)))))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((min((((/* implicit */unsigned int) var_5)), (1488194793U))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (10653396513807509177ULL))) - (7793347559902048594ULL)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_8)))))))), (min((var_0), (max((var_9), (var_9)))))));
}
