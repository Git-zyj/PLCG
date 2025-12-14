/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136045
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
    var_19 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_3 [i_0]);
                    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_2] [i_0] [i_1 + 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_0] [i_1 + 1])), (var_2)))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0]))))) : (min((((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_0] [i_0])), (((var_7) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_2])) : (var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3ULL))))), (23ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_2]))));
                                var_21 = ((/* implicit */long long int) arr_14 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (2147483647) : (((/* implicit */int) (signed char)108)))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) var_18);
}
