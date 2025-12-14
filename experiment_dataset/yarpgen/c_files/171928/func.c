/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171928
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
    var_15 *= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~(arr_4 [i_0] [i_1] [(short)21])));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) max((((((/* implicit */_Bool) -147890484)) ? (147890483) : (((/* implicit */int) (unsigned char)44)))), (min((147890481), (147890481)))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (unsigned short)35053)) : (((/* implicit */int) (short)3538))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min(((short)2093), (((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)-90))))))))))));
}
