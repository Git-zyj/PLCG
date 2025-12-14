/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146482
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
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */signed char) (unsigned short)52121);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_14)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_5 [(unsigned short)19] [(unsigned short)19] [i_1 - 4] [i_1 - 1])))));
                                var_19 ^= ((/* implicit */unsigned int) (signed char)85);
                            }
                        } 
                    } 
                    arr_13 [5] [5] [i_2 + 1] = ((/* implicit */unsigned char) var_5);
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_11 [i_0] [i_0 - 2] [5LL] [1U] [i_1 - 1] [i_2] [i_0]))))));
                    var_21 = ((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_0 + 1] [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (signed char)85)), (127LL))) << (((var_11) + (3592269804070214783LL)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)85)) < ((~(((/* implicit */int) (signed char)-86))))));
}
