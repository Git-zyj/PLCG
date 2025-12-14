/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109037
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
    var_13 = var_3;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 6219222012013472246ULL)) || (((/* implicit */_Bool) 12227522061696079369ULL))))) <= ((+(((/* implicit */int) (unsigned short)40678))))))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)7578))))))));
                                arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (var_2)))) ? (((unsigned long long int) 1502986205786123754ULL)) : (max((((/* implicit */unsigned long long int) 1768944959)), (arr_6 [i_0] [i_2] [i_2] [i_0])))));
                                var_14 ^= ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 347242289263146538ULL))));
                    var_16 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
