/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125361
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
    var_18 &= ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) -1LL)) ? (3808268324742900059LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] &= ((/* implicit */long long int) min((((arr_7 [i_1 + 2]) * (arr_7 [i_1 - 2]))), (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_7 [i_1 + 2])))));
                                arr_14 [i_4 + 1] [i_3 + 1] [i_2] [10LL] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10490))) | (((((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (17LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_4] [19U])) > (17184886174123695125ULL))))) : (arr_4 [i_1] [i_1 - 3] [i_2 + 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_7] [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_0 [i_0]))), (((/* implicit */long long int) max((((/* implicit */short) var_1)), (arr_19 [i_0] [i_5]))))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3733647304U)) ? (arr_3 [i_1] [i_7]) : (((/* implicit */long long int) 3404560076U)))))))));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] [i_0] [i_7] = ((/* implicit */signed char) (+(arr_8 [i_0])));
                                arr_24 [i_6] [i_1] [i_6] [i_6] [i_6] [i_1] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_5)))) & (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_0] [i_6] [6U] [(signed char)16] [i_7 + 2])))) : ((-(max((((/* implicit */long long int) arr_17 [i_1] [1LL] [i_1])), (var_5)))))));
                                arr_25 [i_0] [i_1 - 1] [i_5] [8LL] [i_7] = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned long long int) 3617541638U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
