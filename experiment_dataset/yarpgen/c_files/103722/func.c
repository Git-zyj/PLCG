/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103722
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((var_2) >= (((/* implicit */int) var_11)))))))) == (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_1] [4] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 4])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? ((~(((arr_13 [i_0] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)0]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 - 2] [12U])))));
                            arr_16 [i_3] [(_Bool)1] [(unsigned short)3] [i_3] [(unsigned short)3] = ((/* implicit */long long int) (-((~(((var_6) ? (var_9) : (((/* implicit */unsigned long long int) 415626315U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) (~((~((-(var_2)))))));
    var_17 = ((/* implicit */_Bool) (((((+(var_4))) > (((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */int) (unsigned short)14319))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_10))));
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
}
