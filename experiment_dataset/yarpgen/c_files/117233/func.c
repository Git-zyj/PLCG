/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117233
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
    var_14 = ((/* implicit */_Bool) min((var_2), ((~((~(((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1 + 1] = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_6)) : (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)161))))) : (-386398625463178151LL)))) ? (((/* implicit */long long int) ((min((var_9), (((/* implicit */unsigned int) var_5)))) << (((((/* implicit */int) arr_3 [i_1] [i_1 - 2])) - (54)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])), (1594482128822364643ULL)))) ? (((((/* implicit */_Bool) (short)-22540)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)111)))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_6)) : (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)161))))) : (-386398625463178151LL)))) ? (((/* implicit */long long int) ((min((var_9), (((/* implicit */unsigned int) var_5)))) << (((((((/* implicit */int) arr_3 [i_1] [i_1 - 2])) - (54))) - (67)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])), (1594482128822364643ULL)))) ? (((((/* implicit */_Bool) (short)-22540)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)111))))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_13);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) min((max((arr_4 [i_0] [i_1 - 1]), (arr_4 [i_0] [i_1 + 1]))), ((~(arr_4 [i_0] [i_1 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            {
                arr_19 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) : (var_13))), (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (arr_7 [i_3] [i_4 + 1]))))))) ? (arr_15 [i_3]) : (((((var_6) > (((/* implicit */int) arr_6 [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1]))) : ((~(67108864U)))))));
                arr_20 [i_3] = max(((~(arr_8 [i_4] [i_4] [i_4 + 1] [i_4 + 1]))), (((/* implicit */unsigned int) arr_18 [i_4 + 1] [i_4] [i_4 - 1])));
            }
        } 
    } 
}
