/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134448
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
    var_13 = ((((/* implicit */_Bool) ((int) var_9))) ? (max((max((((/* implicit */long long int) -869550811)), (var_0))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (5151591515375217666LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((max(((+(1591886016U))), (2703081280U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (2703081279U)))))))));
                                arr_12 [i_0] [i_3] [i_2] [i_2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_1] [i_0]);
                                arr_13 [i_4] [i_3 + 2] [i_4] = ((/* implicit */_Bool) (-(var_9)));
                                arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1 - 3] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_5] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) 1591886016U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1591886014U));
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */int) (~((~(2703081280U)))));
                                arr_23 [i_6] [i_1] [i_2] = 68719476608LL;
                                arr_24 [i_5] [i_5] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                                arr_25 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_6] = (-(min((-556307664), (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
