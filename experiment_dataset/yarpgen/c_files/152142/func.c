/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152142
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
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 |= max((var_9), (((/* implicit */int) ((((/* implicit */int) (unsigned char)173)) >= (((/* implicit */int) (!(var_1))))))));
    var_14 = ((/* implicit */signed char) (-(1158462125)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [24U] [(short)6] &= ((/* implicit */unsigned long long int) 1714446381U);
                arr_5 [i_1] [i_1] = (-(1158462130));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)54539), (((/* implicit */unsigned short) (_Bool)1))))) / ((-(((/* implicit */int) (unsigned char)255)))))))));
                                arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1158462125)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28414))) : (23592557376439652LL)));
                                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3 - 1]))))) ? (((/* implicit */int) (unsigned char)7)) : (-1158462135)));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-28418))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned char)254))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_17 [i_5] |= (-(((((/* implicit */int) arr_2 [i_0] [i_1])) << ((((-(var_0))) - (1479606310))))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_0])))) ? ((-(-1))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_1])) : (((/* implicit */int) (unsigned char)83)))))))));
                }
            }
        } 
    } 
}
