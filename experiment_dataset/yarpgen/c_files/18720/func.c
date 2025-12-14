/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18720
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
    var_12 |= ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) ((min((1588598687), (((/* implicit */int) (short)-1)))) < (((((/* implicit */int) arr_3 [i_0] [i_0])) * (arr_2 [6LL])))))));
                var_14 = ((/* implicit */int) ((arr_3 [i_0] [i_1]) ? (((unsigned long long int) arr_3 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45994))))))));
                var_15 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-86)))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) / (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_1]))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((int) arr_5 [i_0] [i_2 - 3] [i_2 - 2])));
                                var_17 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_11 [(short)12] [i_1] [i_2] [i_2] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
