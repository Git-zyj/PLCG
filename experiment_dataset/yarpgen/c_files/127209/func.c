/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127209
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) ? ((-((-(var_3))))) : ((+((-(var_3))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 &= min((945565554U), (((/* implicit */unsigned int) (unsigned short)35016)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1699384376124019486ULL)))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) min((arr_4 [i_4] [i_4 - 1] [i_4]), (arr_4 [i_4] [i_4 - 1] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) var_10)))))));
                                arr_15 [i_4] [(short)2] [i_2] [(short)2] [i_4] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3395700050U)))), (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
