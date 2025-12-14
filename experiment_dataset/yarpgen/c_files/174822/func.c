/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174822
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))))))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned short) ((arr_4 [i_0] [i_0]) >> (((arr_0 [i_1 + 1] [i_0]) - (7543737911150601386ULL)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [1LL] [8ULL] [i_1] = ((/* implicit */unsigned char) min((16273218879802434749ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 + 1])) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) && (((/* implicit */_Bool) (short)-3))))))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((((((/* implicit */_Bool) (short)-16297)) ? (2173525193907116884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (short)0);
                }
            } 
        } 
    } 
}
