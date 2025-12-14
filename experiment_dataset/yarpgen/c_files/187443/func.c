/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187443
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
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_0))) / (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_18 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_12)));
                    var_19 = ((/* implicit */unsigned long long int) var_8);
                    var_20 = ((((/* implicit */int) var_13)) + (((/* implicit */int) var_4)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_0)))) >> (((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((var_10) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3436575543U)) & (9223372036854775807LL))))));
                    var_21 = var_1;
                }
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_17 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_12))))) - (((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                arr_18 [i_0] [i_0] [i_4] [i_4] [i_5] [i_1] [i_6 - 2] = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
