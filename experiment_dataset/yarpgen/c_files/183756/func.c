/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183756
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_11);
                var_16 = (~(min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (9223372036854775797LL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_17 |= var_9;
                                var_18 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                            for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_3]);
                                arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned char)111), ((unsigned char)111)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (9223372036854775797LL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)17319)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_1 - 2] [i_2 + 1]), (max((-2762104391195521273LL), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_3] [i_0] [i_3] [i_0]);
                            }
                            for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
                            {
                                var_19 += ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_6]))) : (-2762104391195521273LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_6] [i_6] [i_0] [i_6]))) : (-659730516661219300LL))))));
                                arr_24 [i_2] [i_2] [i_2] [i_3] = (~(var_1));
                            }
                            arr_25 [i_3] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 659730516661219306LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10724))) : (var_4))))), (((((/* implicit */_Bool) -659730516661219298LL)) ? (-659730516661219295LL) : (659730516661219294LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (unsigned char)252);
}
