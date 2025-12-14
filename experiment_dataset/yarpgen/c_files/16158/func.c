/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16158
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((1103392243057920252LL) << (((((/* implicit */int) var_8)) - (28251))))), (((/* implicit */long long int) max((var_7), (var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((1103392243057920252LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))))) : ((~((-(var_9))))))))));
    var_13 = ((/* implicit */signed char) ((var_1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (((-(1103392243057920252LL))) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = var_2;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned char) max(((signed char)73), (((/* implicit */signed char) (_Bool)1))))), (max((arr_10 [i_0] [i_0 - 1] [i_0] [i_2 + 1]), (arr_10 [4LL] [i_0 + 3] [i_1] [i_2 + 1])))));
                                var_15 = ((/* implicit */signed char) max((((/* implicit */short) (!(((((/* implicit */_Bool) -1103392243057920244LL)) && (var_7)))))), (var_11)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_11))))) - ((+(var_0)))))) && ((!(arr_8 [i_0] [i_0 - 1] [i_2 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */short) min((((min((11192674104415707773ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) / (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 4] [i_2] [i_1] [i_0]))) : (var_9))))), (((/* implicit */unsigned long long int) var_8))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_1 [i_2]), (var_4))))))) : (((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                }
            } 
        } 
    } 
}
