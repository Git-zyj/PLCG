/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115123
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != ((~(2147483646)))))), (((var_13) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))) && (((/* implicit */_Bool) ((946236716552261554LL) / (((/* implicit */long long int) var_2)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 *= arr_1 [(signed char)4];
                    arr_9 [15U] [(short)13] [i_0] [15U] = arr_2 [i_0];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_22 |= arr_10 [i_4];
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((((((_Bool)1) && (((/* implicit */_Bool) -1749105068)))) || ((_Bool)0))) || (((/* implicit */_Bool) ((((var_12) || (((/* implicit */_Bool) arr_14 [(signed char)4] [(signed char)4])))) ? (arr_12 [i_3] [i_4]) : (((/* implicit */long long int) arr_16 [i_3] [i_4] [i_3] [i_6] [(_Bool)0]))))))))));
                                arr_23 [i_4] [i_5] [(signed char)0] [i_7] = ((/* implicit */signed char) (+(((arr_19 [0LL] [i_4] [i_5] [i_6] [i_5]) / (max((arr_12 [i_3] [i_4]), (((/* implicit */long long int) (short)-3678))))))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_18 [(_Bool)1] [i_4] [(signed char)4] [i_5])) % (max((((/* implicit */long long int) arr_1 [i_5])), (((var_17) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_4] [i_5])))))))));
                    var_24 = min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) (signed char)116))))) + (1594773804949336656ULL))), (max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (13192314523058225156ULL))));
                    var_25 = ((/* implicit */long long int) ((signed char) max((min((((/* implicit */long long int) arr_18 [6U] [i_4] [i_4] [i_5])), (arr_4 [i_3] [i_5] [i_5]))), (((/* implicit */long long int) ((arr_17 [i_5]) ? (((/* implicit */int) arr_14 [i_5] [i_4])) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
