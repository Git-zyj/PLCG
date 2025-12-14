/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117015
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) arr_6 [i_1]))))), (arr_3 [i_2] [i_1])))) + (((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [7LL])))) ? (((((/* implicit */int) (signed char)-2)) + (((/* implicit */int) (signed char)114)))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [1] [i_1] [i_0] = ((/* implicit */unsigned char) max((arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_11 [i_2 + 2] [i_2] [i_2])));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_5 [i_4]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_11 [i_2] [i_2] [10LL]) | (arr_11 [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */long long int) ((var_5) ^ (((/* implicit */int) var_0))));
    var_22 = ((/* implicit */signed char) min((min((max((var_9), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) var_18)))), (var_8)));
}
