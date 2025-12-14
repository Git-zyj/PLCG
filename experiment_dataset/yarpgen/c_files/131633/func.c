/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131633
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
    var_20 = var_5;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_3 [i_1] [i_0]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((long long int) var_10))) : (((((/* implicit */_Bool) 1208135842U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) : (var_12)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_2] [(unsigned short)1] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                                var_22 = ((/* implicit */unsigned long long int) arr_10 [i_1] [1] [4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_11);
}
