/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14565
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
    var_17 -= ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4183829297368890778ULL)) ? (2111670154318252827ULL) : (((/* implicit */unsigned long long int) var_16))))) ? ((-(14262914776340660837ULL))) : (14262914776340660837ULL)))));
                            var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-88)) == (((/* implicit */int) var_1)))))) <= ((+(1063206805U))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [6])) > (arr_2 [(unsigned char)16] [(unsigned char)16])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (long long int i_6 = 4; i_6 < 9; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) 134217727ULL);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0LL)) ? (arr_15 [i_4]) : (((/* implicit */int) arr_20 [(_Bool)1] [i_5] [i_7] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(short)3] [i_5] [i_6] [i_6] [i_7] [(signed char)2] [i_6]))) - (((((/* implicit */_Bool) arr_14 [i_5] [(short)3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4789))) : (4183829297368890778ULL)))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned char)108))));
                                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_7] [i_8])) ? (arr_6 [i_4] [i_4] [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_5)) ? (14262914776340660837ULL) : (14262914776340660838ULL))) : (min((arr_8 [i_4] [17U] [i_8]), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_6] [i_5] [i_6])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_5] [i_6] [i_6])) <= (((/* implicit */int) (short)-19377)))))) ^ (32736U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
