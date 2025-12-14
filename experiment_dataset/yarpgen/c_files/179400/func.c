/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179400
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */_Bool) var_4);
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (2382994501096102734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                var_13 &= ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) 0);
                    arr_14 [i_1] [i_1] [i_2] = ((/* implicit */int) var_10);
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)))))));
                }
                var_16 = ((/* implicit */unsigned int) var_8);
                var_17 = ((/* implicit */unsigned long long int) var_1);
                arr_15 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
}
