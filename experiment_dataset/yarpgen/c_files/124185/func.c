/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124185
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59448)))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((((/* implicit */_Bool) 844809797)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= var_5;
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_4] [i_4 - 1] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) arr_2 [i_3 - 1] [i_4 + 2] [i_2 - 1])), (arr_7 [i_2 - 2] [(short)10] [i_1])))));
                                arr_15 [i_4] = ((((arr_1 [14ULL] [i_4 + 1]) < (arr_1 [i_0] [i_4 + 1]))) ? (var_1) : (((/* implicit */unsigned long long int) (~(arr_11 [i_1] [i_3] [i_3] [i_3 - 1] [i_3])))));
                                arr_16 [i_4 - 1] [(signed char)11] [i_4] [i_2] [i_4] [6ULL] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_2 [i_3] [(short)16] [17LL])))))));
                            }
                        } 
                    } 
                } 
                arr_17 [12] [12] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (var_2)));
                arr_18 [i_1] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            }
        } 
    } 
}
