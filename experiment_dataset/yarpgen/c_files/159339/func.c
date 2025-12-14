/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159339
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) 4294967295U);
                                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7952165368570555408LL)) ? (max((1U), (((/* implicit */unsigned int) (unsigned short)30785)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((min((2597074550U), (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)32767)))))) : (((/* implicit */unsigned int) arr_6 [8ULL] [8ULL]))));
                                var_19 = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) arr_13 [(unsigned short)7] [(unsigned short)13] [i_0] [i_0] [(unsigned short)7]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) max((var_1), (var_10))))) ? (3462944430818111640LL) : (((/* implicit */long long int) var_1))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -1)) : ((-(33488928602310090ULL)))))) ? (((unsigned long long int) ((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */long long int) 1U)))) | (var_12))))));
}
