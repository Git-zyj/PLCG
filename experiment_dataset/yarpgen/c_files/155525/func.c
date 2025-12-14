/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155525
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) min((var_7), (var_17)))));
    var_19 += ((/* implicit */unsigned long long int) var_15);
    var_20 ^= ((/* implicit */unsigned short) (short)31878);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 1] [(short)15] [i_0 + 1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) var_3);
                                arr_15 [i_0] [3] [(signed char)10] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 7933527474193868877ULL)) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_17)) ? (arr_11 [0ULL] [i_2] [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) 0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) -2412024121875439970LL);
                                var_22 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_9)), (var_14))), (arr_0 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
