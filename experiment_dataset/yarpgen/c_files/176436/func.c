/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176436
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
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2655456690978990195LL)) ? (-6364203748798389803LL) : (((/* implicit */long long int) 0))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-8))))) : (6364203748798389802LL))), (((/* implicit */long long int) max((((/* implicit */int) (short)0)), (arr_6 [i_2] [i_1] [i_2] [i_3])))))))));
                                arr_13 [21ULL] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [9U] [14LL]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (+(6364203748798389784LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [(unsigned short)12] [i_1] [i_2] [i_5] [(unsigned short)12] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_0] [i_5] [i_6])) ? (arr_17 [i_0] [i_1] [i_0] [i_5] [i_6] [(signed char)1]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_6 [(signed char)7] [i_2] [i_2] [i_2]))));
                                arr_21 [i_0] [11ULL] [i_0] [14LL] [i_5] [i_6] = ((((/* implicit */_Bool) min((arr_11 [i_0] [i_6]), (arr_11 [i_0] [i_6])))) && ((!(((/* implicit */_Bool) arr_2 [i_2])))));
                                var_19 = ((/* implicit */unsigned char) arr_8 [i_6] [i_5] [i_2] [12LL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_2);
}
