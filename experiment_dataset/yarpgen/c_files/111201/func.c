/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111201
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
    var_13 ^= var_7;
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((max((arr_1 [i_0]), (((/* implicit */long long int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4])))) >= (((((arr_1 [i_2]) + (9223372036854775807LL))) >> (((181484956U) - (181484894U))))))))));
                                arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((int) (unsigned short)0)) < (max((arr_11 [i_0] [i_0] [i_4 - 2] [i_4 - 2] [i_1 - 1]), (((/* implicit */int) var_11))))));
                                var_16 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0])))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_9 [i_2] [i_4 + 3]))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) var_5);
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
}
