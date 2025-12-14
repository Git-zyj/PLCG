/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100058
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
    var_18 = ((/* implicit */long long int) (unsigned char)107);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = (short)-23891;
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3] [i_1]))));
                                var_20 = var_5;
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58248))))) ? (min((((/* implicit */long long int) (_Bool)0)), (arr_3 [i_4 + 1] [i_3]))) : (((arr_3 [i_4 + 1] [i_1]) % (arr_3 [i_4 - 1] [i_4 + 1])))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = ((/* implicit */signed char) max((((arr_3 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)44829)) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))) : (arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) 466315911U)))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))))));
                }
            } 
        } 
    } 
}
