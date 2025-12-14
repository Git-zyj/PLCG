/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185813
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) var_9)), (var_7))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12))), (var_17))))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-23085)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (short)22765)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
    var_22 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((signed char) 8))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_17))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)86))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_3 - 1] [i_4] = ((/* implicit */short) var_7);
                                var_23 = ((/* implicit */unsigned int) min(((short)23084), (((/* implicit */short) ((unsigned char) var_16)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) 2793560640U))))), ((~(((/* implicit */int) (unsigned short)39968))))))));
                }
            } 
        } 
    } 
}
