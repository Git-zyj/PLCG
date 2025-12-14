/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179500
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
    var_16 = ((/* implicit */int) min((var_16), (min((((/* implicit */int) (unsigned char)34)), ((+(((((/* implicit */int) (unsigned short)46995)) / (((/* implicit */int) (unsigned short)18561))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) max((((signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-127))))), (((/* implicit */signed char) (_Bool)1))));
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18557))) != (1690558116U)))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2604409179U))))));
                    var_18 += ((signed char) (~(1518627398U)));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned short)18540))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)18532))), (((((/* implicit */unsigned long long int) -379212462)) - (6053511887430933480ULL))))), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)230))))))))));
}
