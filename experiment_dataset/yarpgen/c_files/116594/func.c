/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116594
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
    var_19 += (+(max((((/* implicit */unsigned long long int) var_1)), (max((18446744073709551596ULL), (((/* implicit */unsigned long long int) var_3)))))));
    var_20 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_1] [0] = ((/* implicit */unsigned short) min((var_12), (min((((((/* implicit */_Bool) 18446744073709551575ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551596ULL))), (min((var_12), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))))));
                var_21 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((int) var_11))), (((18446744073709551596ULL) >> (33ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                arr_6 [6LL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) != (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))) >> (((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14))) - (15878U)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) 31ULL);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_18);
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(18446744073709551596ULL))))));
                var_26 += ((/* implicit */_Bool) var_18);
            }
        } 
    } 
}
