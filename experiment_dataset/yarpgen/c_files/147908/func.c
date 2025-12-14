/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147908
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
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((12013646763592399698ULL), (((/* implicit */unsigned long long int) (signed char)127))))) ? (((((/* implicit */_Bool) min((arr_4 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) : (arr_6 [i_0] [4ULL] [i_0]))) : (arr_4 [i_2 - 2] [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (((_Bool)1) || (((/* implicit */_Bool) 18446744073709551597ULL)))))))));
                    arr_8 [i_0] [i_1] [(signed char)6] |= ((/* implicit */short) min((min((((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (arr_4 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17293822569102704640ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))), (min((((/* implicit */unsigned long long int) arr_3 [(unsigned short)4] [i_2 + 1] [(unsigned short)4])), (arr_5 [i_2] [i_2 - 1] [i_1])))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) var_10);
}
