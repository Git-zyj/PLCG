/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103894
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
    var_14 = ((/* implicit */unsigned char) ((((int) (short)32760)) - (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */int) ((((max((2917641863U), (((/* implicit */unsigned int) var_8)))) << (((16776704U) - (16776677U))))) << (((var_3) - (3718033718U)))));
    var_16 *= ((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32752))))))) ^ ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(-1925400146)))) ? (min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (5U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8231))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) 3U)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1U)) ^ (var_0)))), (max((arr_9 [(unsigned char)18] [(unsigned char)18] [i_2] [i_3] [(unsigned char)18] [i_4] [i_4]), (arr_2 [i_3] [13LL])))))));
                                arr_11 [5ULL] [i_1] [i_2] [i_2] [(unsigned char)2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 3524988977U))) ? (max((arr_4 [i_4] [i_1] [2ULL] [i_1]), ((-9223372036854775807LL - 1LL)))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_2] [i_2]), (arr_0 [i_0] [i_1 - 1]))))) : (((arr_8 [i_1 - 1] [i_4 - 1]) >> (((min((4294967286U), (arr_3 [i_1]))) - (3489354961U)))))));
                                arr_12 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (short)32762)))))) | (max((((/* implicit */unsigned long long int) arr_10 [i_0] [1U] [1U] [1U] [i_0] [i_0])), (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                                var_19 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [i_4 - 2]))) >= (769978327U)))) >> (((max((1926814746), (((/* implicit */int) (_Bool)1)))) - (1926814731))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
