/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127384
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
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_4);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (max((((((/* implicit */_Bool) (short)8497)) ? (((/* implicit */int) (short)8480)) : (((/* implicit */int) (unsigned char)0)))), (max((((/* implicit */int) var_8)), (var_1))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_5)))))));
                    var_19 = ((max((var_10), (var_10))) ? (((/* implicit */int) max((((/* implicit */signed char) var_12)), (var_2)))) : ((~(((/* implicit */int) var_14)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)0)))))))))));
                                arr_17 [i_0] [i_4] [i_2] [(unsigned short)0] [i_4] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
