/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182655
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) arr_2 [i_0 - 1] [i_0] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) arr_7 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]);
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) 431099264U))));
                                arr_12 [i_4] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_4))))));
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)9))))), (977590258U))))));
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_1] [i_4 + 2] [i_2] [i_4]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_11 [10LL] [(short)4] [i_3 + 1] [i_2] [i_0] [i_0] [i_0])))) : (min((arr_9 [11U] [i_0 + 3] [11U] [i_0 + 3]), (((/* implicit */unsigned long long int) arr_5 [(signed char)1] [(signed char)1])))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_5]))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_17 [i_5]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_28 [i_9] [i_8] [(unsigned short)10] [i_7] = ((/* implicit */unsigned short) arr_21 [i_8] [i_9]);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_23 [i_9] [i_8] [i_7]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((3353611688U), (((/* implicit */unsigned int) var_5)))) + (1859229150U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 15755780382150339123ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) : (2812924272U)))));
}
