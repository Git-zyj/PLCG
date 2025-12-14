/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139533
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (3627709181U)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)34509))))) : (min((1433093037U), (arr_5 [i_1 + 2] [i_0] [i_0])))));
                            arr_9 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) (+((~(arr_1 [i_0])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+((-(var_0))))))));
                arr_10 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1 - 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (signed char i_5 = 4; i_5 < 13; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)65535))))) != (4025173876U)))), (2097152U)));
                var_22 = (((+(arr_15 [i_5 - 4] [i_5 + 3] [i_5 - 1]))) | (max((arr_15 [i_5 + 2] [i_5 - 4] [i_5 + 2]), (((/* implicit */unsigned int) arr_11 [i_5 - 2] [i_5 + 2])))));
                arr_17 [i_4] = ((/* implicit */unsigned long long int) (-(min((arr_16 [i_4]), (arr_16 [i_4])))));
                arr_18 [i_4] [12U] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [4LL])))))));
            }
        } 
    } 
}
