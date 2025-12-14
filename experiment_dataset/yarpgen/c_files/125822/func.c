/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125822
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = 7642470141091663425ULL;
                var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_1 [i_0] [10ULL]) ^ (((/* implicit */long long int) ((arr_0 [i_1]) ? (var_14) : (268427264U)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_4])))));
                                var_20 += ((/* implicit */long long int) (~(arr_8 [i_4 - 2] [i_0] [i_2] [i_1] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            {
                arr_19 [i_6] [17LL] = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_5] [i_6]), (arr_3 [i_5] [i_6])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_5] [14ULL])) : (((/* implicit */int) arr_7 [i_5] [i_5])))) : (((((/* implicit */int) arr_7 [i_5] [i_6])) * (((/* implicit */int) arr_3 [i_5] [i_6])))))))));
            }
        } 
    } 
}
