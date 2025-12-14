/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151723
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) arr_0 [i_0]);
                    var_12 = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [i_2])) && (((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) var_7);
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = (+(((((/* implicit */_Bool) (~(arr_5 [i_4] [i_3])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)1022)))))))));
                                arr_18 [i_4] [i_3] [i_3] [i_2] [i_2] [6U] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1 + 1] [(unsigned char)13]);
                                var_14 = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (var_0)))) - (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)6] [i_1] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_4 [i_2] [i_1]))))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (-3460153759655811510LL) : (((/* implicit */long long int) 2147483648U))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_15 [i_0] [i_1] [i_1 - 1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (~(511)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 + 1] [i_2])) ? (arr_2 [7ULL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                }
            } 
        } 
    } 
}
