/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124332
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((short) arr_0 [i_0]));
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 5531169454445427934LL)) : (1390729543667764009ULL)));
                    var_16 *= ((/* implicit */_Bool) arr_10 [12U] [i_2 - 1] [12U]);
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) (-(1390729543667764009ULL)))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) : (arr_11 [i_1] [(short)10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)95)), ((unsigned short)749))))));
        var_18 *= ((/* implicit */unsigned int) arr_1 [i_1]);
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) (short)9314);
            var_20 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) arr_15 [i_5])), (var_4)))));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_21 -= (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)38)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_12))))) : (1499864755131000076LL)))));
            var_22 *= max((max((((((/* implicit */_Bool) 843807179156924261ULL)) ? (((/* implicit */unsigned long long int) -63846848)) : (arr_2 [i_6]))), (((/* implicit */unsigned long long int) (unsigned char)230)))), (((/* implicit */unsigned long long int) max((8524770218559389315LL), (((/* implicit */long long int) var_3))))));
            arr_23 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (short)5496))), (max(((((_Bool)1) ? (((/* implicit */int) var_1)) : (1901155470))), (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))))));
        }
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((_Bool) max((((unsigned int) var_11)), (max((((/* implicit */unsigned int) (short)5496)), (8388607U)))))))));
    }
}
