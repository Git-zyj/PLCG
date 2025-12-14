/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101299
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        arr_4 [i_0 - 1] = arr_1 [i_0];
        var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)248))));
        var_11 = ((/* implicit */unsigned long long int) -369388691537404360LL);
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (-369388691537404362LL) : (((/* implicit */long long int) var_3))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
        var_14 = ((/* implicit */_Bool) ((-369388691537404357LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36578)))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 1]);
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((unsigned long long int) arr_9 [i_2])) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_0 [i_3]))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) arr_10 [i_2] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_4] [i_5] [i_5] [i_5] = var_2;
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_3])) ? (((unsigned long long int) arr_1 [i_2])) : (((/* implicit */unsigned long long int) arr_18 [i_2] [i_3]))));
                        var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_5 [i_3] [i_2])) == (((/* implicit */int) ((var_3) >= (((/* implicit */int) (unsigned short)18128)))))))));
                        arr_20 [i_4] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_8 [i_2] [i_3]))))));
                    }
                    arr_21 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(369388691537404371LL))))));
                }
            } 
        } 
    } 
}
