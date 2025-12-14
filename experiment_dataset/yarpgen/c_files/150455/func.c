/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150455
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (~(((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
                                var_19 = 2U;
                                var_20 = ((/* implicit */unsigned short) var_16);
                                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                                var_22 -= arr_5 [i_1 + 2] [i_1] [(unsigned char)14];
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1859729426)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14811))) : (4294967295U)));
}
