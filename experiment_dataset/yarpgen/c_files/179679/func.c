/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179679
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [10] = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (0) : (((/* implicit */int) (signed char)-16)))))) << (((((/* implicit */_Bool) arr_3 [i_1])) ? (((arr_2 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1 + 1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)60))));
                            arr_15 [i_1] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (253952U)))))));
                            arr_16 [17LL] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [15LL] [i_2]);
                            arr_17 [i_1] [i_1] [7U] = arr_11 [i_3] [i_3] [i_1] [i_3];
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((((/* implicit */_Bool) (signed char)104)) ? (((((/* implicit */long long int) arr_2 [i_1])) & (min((((/* implicit */long long int) 253952U)), (arr_0 [13U]))))) : (((/* implicit */long long int) 2146435072U)));
                arr_19 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 253952U)) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) * (((/* implicit */int) (unsigned char)32))))), (arr_0 [i_0])))));
            }
        } 
    } 
}
