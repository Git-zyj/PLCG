/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187578
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (var_2)));
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-127)), (5408791975592997312ULL)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 2] [i_0])), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) >> (((/* implicit */int) (signed char)13))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (signed char)13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_8);
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_2])))) | (((arr_14 [i_2]) / (((/* implicit */int) (signed char)9))))))) ? ((~(min((2489937715U), (((/* implicit */unsigned int) (signed char)-7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_10))));
}
