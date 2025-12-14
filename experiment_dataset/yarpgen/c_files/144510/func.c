/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144510
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
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_8), (var_14)))), (var_5)))) == (max((((arr_5 [i_0] [i_1 + 1] [i_2] [i_0 - 2]) >> (((((/* implicit */int) var_14)) - (28019))))), (((/* implicit */unsigned long long int) var_6))))));
                    var_18 = ((/* implicit */int) ((unsigned long long int) arr_5 [3U] [2] [(unsigned short)7] [i_1 + 1]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_4 [i_4] [i_0] [i_0] [i_0 + 3]);
                                var_20 |= ((/* implicit */unsigned int) -2762793177046227458LL);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_6) >> (((((/* implicit */unsigned long long int) arr_19 [12ULL] [i_5] [i_5] [i_5])) / (arr_15 [i_5] [4])))))), (min((((((/* implicit */unsigned long long int) 2147483640)) - (arr_15 [(signed char)23] [i_9 + 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2762793177046227470LL)))))))));
                                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_9 + 2] [7] [i_9] [(unsigned short)19])), (var_10))))))), (max((max((var_13), (((/* implicit */unsigned int) arr_13 [(unsigned short)10] [i_9])))), (((/* implicit */unsigned int) (unsigned short)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) (~(-2147483641)));
                        var_25 &= ((/* implicit */unsigned long long int) min((max((-2762793177046227465LL), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6] [(unsigned short)1] [(short)23] [i_5])) - (((/* implicit */int) arr_23 [i_7] [(unsigned short)19] [i_10] [i_10] [i_7]))))))), (((max((((/* implicit */long long int) var_14)), (2762793177046227488LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    }
                }
            } 
        } 
    } 
}
