/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153808
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
    var_20 &= ((/* implicit */short) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) + (18446744073709551611ULL)))) ? (130023424) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) > (2130405092135698299ULL)))))));
                arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10U]))) * (2130405092135698298ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_2 [i_1 - 1] [(unsigned char)11])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_1 - 1] [i_1] [i_0 - 4]), (var_3))))) & ((-(var_2))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)242)))))))))))));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_3] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) max((((((_Bool) (signed char)-76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (max((16316338981573853297ULL), (((/* implicit */unsigned long long int) (unsigned short)56937)))))), (((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]))) + (min((2130405092135698293ULL), (((/* implicit */unsigned long long int) var_9))))))));
                                var_23 += ((/* implicit */short) (~((-(((/* implicit */int) arr_2 [i_4 + 3] [i_4 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (var_19)));
}
