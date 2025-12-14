/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185335
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
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) arr_5 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2 + 3] [i_3] [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2 - 1])) ? (arr_12 [i_2 - 1] [i_2 + 2] [i_2 + 3] [i_2 - 1]) : (((/* implicit */int) var_12)))));
                            arr_14 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_0]);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                arr_18 [i_4] [i_1] [i_2 + 2] [i_3] [i_2] [i_2 + 2] [i_4] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_4 - 1] [i_2 - 1])))) ? (((/* implicit */int) arr_6 [i_0] [i_4 - 1] [i_2 - 1])) : (((/* implicit */int) min(((unsigned char)55), (((/* implicit */unsigned char) arr_6 [i_0] [i_4 + 1] [i_2 - 1])))))));
                            }
                            for (long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) arr_12 [i_5 - 2] [i_3] [i_2] [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_5 [i_3])) : ((-(((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                                var_20 = ((/* implicit */unsigned char) var_6);
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (~(((unsigned long long int) (unsigned char)200))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((((((long long int) (unsigned char)201)) >> (((((var_10) ^ (var_0))) + (720928769))))), (((/* implicit */long long int) ((((int) var_12)) / (((/* implicit */int) min((var_8), (var_12)))))))));
}
