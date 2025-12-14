/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129987
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (var_7)))), (((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((3182187438000148017LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)3805)), (18446744073709551612ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_7) : (((/* implicit */int) var_6))))) : (((arr_8 [i_1]) - (((/* implicit */long long int) var_1))))))));
                            arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((min(((((_Bool)1) ? (175727880U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned int) (short)-726)))) >= (((/* implicit */unsigned int) 540231462))));
                        }
                    } 
                } 
                var_12 = max((((short) var_5)), (((/* implicit */short) var_6)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) var_0);
                    var_14 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (short)3)) ? (arr_19 [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14256)))))));
                    var_15 = ((/* implicit */int) arr_19 [i_4] [4] [i_4]);
                    arr_22 [(_Bool)1] [i_5] [i_5] [(_Bool)1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) (short)-28779)))), (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
}
