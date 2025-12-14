/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130679
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_1)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_5)))) : (((/* implicit */int) var_8)));
        var_13 |= ((/* implicit */unsigned int) min((var_2), (((var_4) - (((/* implicit */int) ((var_6) != (((/* implicit */long long int) var_3)))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [11ULL] = ((/* implicit */int) min((((var_12) >> (((((/* implicit */int) var_11)) + (11253))))), (((((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_5))))) : (var_9)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)188)))), (min((var_0), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
                                arr_16 [i_0] [i_1] [i_4] = var_4;
                                var_14 = ((/* implicit */unsigned short) min((min((max((((/* implicit */unsigned long long int) var_1)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
    {
        var_15 = ((/* implicit */_Bool) var_4);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_12)));
    }
    var_17 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) var_3)) - (var_12))) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_5)))))))));
}
