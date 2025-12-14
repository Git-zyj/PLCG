/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135376
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
    var_17 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((-2630481022453597957LL) >= (((/* implicit */long long int) var_11))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (-175324380) : (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) max((arr_1 [i_2]), (arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) | (var_12)))) ? (((((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_0 [i_2] [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [13ULL])))) ^ (((/* implicit */int) arr_11 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 3])))) : (((/* implicit */int) arr_9 [i_0]))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_5 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) arr_0 [i_3] [i_4 + 2]))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)23909)))) : ((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4] [i_4]))));
                                var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_1 [i_4 + 3])) <= (-36232919))));
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */_Bool) (((~(max((arr_10 [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) & (((unsigned long long int) max((((/* implicit */unsigned int) var_10)), (4208784849U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_6]), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) (short)-26088))))));
                                var_23 = ((/* implicit */unsigned int) ((((((int) (~(arr_0 [i_0] [i_1])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_12 [i_5] [i_5 + 4] [i_5] [i_5 + 3] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) -175324380)) : (9716000683434663185ULL))) - (18446744073534227216ULL)))));
                                var_24 = ((/* implicit */int) arr_18 [i_0] [i_5] [i_1]);
                                arr_21 [i_0] [i_1] [i_0] [i_2] [i_5] [i_5 - 1] [i_6] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_5 - 1] [i_0]))))), (arr_3 [i_0]));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5 + 4] [i_5] [i_5 + 3] [i_5 + 4]))) / (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0])) ? (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1] [i_5])))) : (arr_10 [i_5 - 1] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = var_11;
    var_27 ^= ((/* implicit */int) var_16);
}
