/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173735
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            var_20 *= ((/* implicit */unsigned int) ((arr_0 [i_3]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 2] [i_1 - 2] [i_1 - 2] [i_3]))) : (arr_6 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-30214)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((536870912U) - (536870911U))))))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned char) (~(((arr_9 [i_0] [i_0 - 1] [i_1 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_0 - 3] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        for (int i_5 = 2; i_5 < 11; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                        {
                            {
                                arr_24 [i_8] [i_4] [i_8] [i_4] [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((31U) - (((/* implicit */unsigned int) -434806333))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_8 + 1]))) + (var_15))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_5 - 1] [i_6] [i_7])))))));
                                var_22 = ((/* implicit */unsigned int) -3365358054322393692LL);
                                arr_25 [i_4] [i_5 + 1] [i_5 + 1] [i_8] [i_8] [i_5 + 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_21 [i_4] [i_5 - 2] [i_6] [i_8] [i_8 + 3])))) % (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 1])) - (1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    for (long long int i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_23 *= max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)0))))));
                                var_24 = ((/* implicit */signed char) arr_34 [i_4] [i_4] [i_9]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
