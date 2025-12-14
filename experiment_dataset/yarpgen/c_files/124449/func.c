/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124449
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) ((unsigned char) 3968U))))));
                    var_18 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_2])), (arr_4 [i_1] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_1 - 1] [i_3])) ^ (((/* implicit */int) var_11)))));
                                var_20 = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 1]);
                                arr_11 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */long long int) var_12);
                                arr_12 [i_2] [i_3 - 3] [8U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((int) 15111372861359983061ULL)), (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)56))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((int) ((unsigned long long int) var_9)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_5]))));
                arr_18 [2U] [7ULL] &= ((/* implicit */unsigned long long int) var_10);
                arr_19 [(unsigned char)3] = ((/* implicit */unsigned long long int) ((int) var_11));
            }
        } 
    } 
    var_23 *= ((/* implicit */short) var_5);
}
