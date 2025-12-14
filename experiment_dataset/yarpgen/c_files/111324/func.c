/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111324
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(short)3] [(short)3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (2147483647)));
                                arr_16 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_4 - 2])) ? (arr_4 [i_1 - 1] [i_1] [i_4 - 1]) : (((/* implicit */unsigned long long int) var_6)))))));
                                var_15 = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_2] [i_0]) * (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [(unsigned char)7] [i_2] [i_1] [i_0]))) | (30LL))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) | (1848141858U)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_13)))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_10)), (31U))), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)61), (((/* implicit */unsigned char) (_Bool)1))))) > (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-7366)) : (((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */int) ((unsigned short) 2446825436U))) : (((/* implicit */int) ((((/* implicit */_Bool) 2446825438U)) || (((/* implicit */_Bool) 0ULL)))))))));
}
