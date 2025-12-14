/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167882
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-((+(arr_3 [i_0] [i_0] [i_0]))))))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))), (max((6123330016314019309LL), (((/* implicit */long long int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_6), (((/* implicit */int) var_17)))), (((/* implicit */int) var_9))))) ? (max((12686244509240029080ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8)))));
                                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3 + 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (max((arr_6 [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) var_6))))))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_3 + 1] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_7 [i_2] [i_2]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)16453))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_3 - 1] [i_3 - 1])) ? (arr_3 [i_3 + 2] [i_3 + 3] [i_3 + 1]) : (arr_3 [i_3 + 3] [i_3 - 1] [i_3 + 3]))))));
                                arr_13 [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23277)) ? (arr_9 [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3 + 2]) : (((/* implicit */int) (short)818)))))));
                                var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), (var_6)))) ? (min((((/* implicit */long long int) arr_11 [i_3 - 1] [i_3 + 2] [i_2] [i_3])), (6123330016314019324LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3 + 2] [i_1] [i_3])) && (((/* implicit */_Bool) 2645524086U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_14);
}
