/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182507
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
    var_14 ^= ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 *= ((/* implicit */signed char) ((min((((_Bool) var_1)), (arr_2 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_2 - 1] [i_2 + 1])))) : (max((((((/* implicit */_Bool) (short)-2754)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26848))) : (arr_7 [i_0] [i_0] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_16 = max((max((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) var_4)), (arr_3 [i_2 - 4]))))), (((/* implicit */long long int) ((short) max((((/* implicit */long long int) (short)2753)), (4511035179509198920LL))))));
                                var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2753))))), (((2579047776344464036ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764)))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_14 [i_3] [i_3 + 1] [i_2] [(_Bool)1] [i_2])))) ? (((arr_14 [i_4] [i_3 + 1] [i_3] [i_1] [i_1]) - (arr_14 [i_3] [i_3 - 1] [i_2] [20] [i_0]))) : (arr_14 [(signed char)13] [i_3 + 1] [0] [i_3] [i_0]))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */long long int) (~(-1233111479)));
                }
            } 
        } 
    } 
}
