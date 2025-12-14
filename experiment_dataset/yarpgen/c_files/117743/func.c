/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117743
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_4] [i_4] [i_0]))) * ((~(((arr_7 [i_0] [i_0 - 1] [i_4]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_0] [i_0]);
                                var_23 = ((/* implicit */long long int) min((var_23), (arr_4 [(short)3] [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_24 = var_18;
                                var_25 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_1 [i_0])), (((unsigned char) var_19))));
                                arr_18 [i_0] [i_0] [(signed char)0] [i_5] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_6])))) && ((((_Bool)1) || (((/* implicit */_Bool) (signed char)36)))))))));
                                arr_19 [i_0] [(short)4] [i_2] [(short)4] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)199))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
